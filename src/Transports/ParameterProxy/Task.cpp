//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further information contact lsts@fe.up.pt.        *
//                                                                          *
// European Union Public Licence - EUPL v.1.1 Usage                         *
// Alternatively, this file may be used under the terms of the EUPL,        *
// Version 1.1 only (the "Licence"), appearing in the file LICENCE.md       *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://www.lsts.pt/dune/licence.                                        *
//***************************************************************************
// Author: Renato Caldas                                                    *
//***************************************************************************

// Std C++ headers.
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace ParameterProxy
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Proxied entity label.
      std::string p_elabel;
      //! Proxied system name.
      std::string p_system;
      //! Proxied system heartbeat timeout in seconds.
      float p_hb_timeout;
      //! Proxied system query reply timeout in seconds.
      float p_reply_timeout;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Task arguments.
      Arguments m_args;
      //! System id of the proxied DUNE instance.
      unsigned m_proxied_id;
      //! Proxied parameter table.
      Tasks::ParameterTable m_ptable;
      //! Proxied parameter values.
      std::vector<std::string*> m_pvalues;
      //! True if the proxy parameters are different from those of the proxied task.
      bool m_dirty;
      //! Heartbeat timer.
      Time::Counter<float> m_hb_timer;
      //! Reply timer.
      Time::Counter<float> m_reply_timer;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_proxied_id(0),
        m_dirty(true)
      {
        // Define configuration parameters.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Proxied Entity Label", m_args.p_elabel)
        .defaultValue("")
        .description("Label for the proxied entity");

        param("Proxied System Name", m_args.p_system)
        .defaultValue("")
        .description("Name of the proxied system");

        param("Proxied System Heartbeat Timeout", m_args.p_hb_timeout)
        .units(Units::Second)
        .defaultValue("10.0")
        .minimumValue("2.0")
        .description("Timeout after which the system is considered out of sync");

        param("Proxied System Query Reply Timeout", m_args.p_reply_timeout)
        .units(Units::Second)
        .defaultValue("2.0")
        .minimumValue("0.0")
        .description("Timeout before retrying a query");

        // Register handler routines.
        bind<IMC::Heartbeat>(this);
        bind<IMC::QueryEntityParameters>(this);
        bind<IMC::EntityParameters>(this);
        bind<IMC::SetEntityParameters>(this);
      }

      void
      initTestParamTable(void)
      {
        Tasks::BasicParameterParser<std::string>* parser;
        std::string* str;

        // Load parameters
        // (test code)
        str = new std::string;
        m_pvalues.push_back(str);
        parser = new Tasks::BasicParameterParser<std::string>(*str);
        m_ptable.add("Frames Per Second", str, parser)
        .visibility(Tasks::Parameter::VISIBILITY_USER)
        .scope(Tasks::Parameter::SCOPE_GLOBAL)
        .defaultValue("7")
        .description("Proxied test fps value");

        // Load values
        // (test code)
        m_ptable.set("Frames Per Second", "123");
      }

      void
      onUpdateParameters(void)
      {
        m_proxied_id = resolveSystemName(m_args.p_system);
        m_hb_timer.setTop(m_args.p_hb_timeout);
        m_reply_timer.setTop(m_args.p_reply_timeout);

        // Testing
        initTestParamTable();
      }

      void
      consume(const IMC::QueryEntityParameters* msg)
      {
        if (msg->name != m_args.p_elabel)
          return;

        IMC::EntityParameters eps;
        eps.name = m_args.p_elabel;

        std::map<std::string, Tasks::Parameter*>::const_iterator itr = m_ptable.begin();
        for (; itr != m_ptable.end(); ++itr)
        {
          IMC::EntityParameter ep;
          ep.name = itr->second->name();
          ep.value = itr->second->value();
          eps.params.push_back(ep);
        }

        dispatchReply(*msg, eps);
      }

      void
      consume(const IMC::EntityParameters* msg)
      {
        if (msg->name != m_args.p_elabel)
          return;

        m_hb_timer.reset();

        IMC::MessageList<IMC::EntityParameter>::const_iterator itr = msg->params.begin();
        for (; itr != msg->params.end(); ++itr)
        {
          std::map<std::string, Tasks::Parameter*>::iterator pt_itr = m_ptable.find((*itr)->name);
          if (pt_itr == m_ptable.end())
          {
            war(DTR("parameter update from proxied task: unknown parameter: '%s'"), (*itr)->name.c_str());
            continue;
          }
          if ((*pt_itr).second->value() != (*itr)->value)
          {
            m_dirty = true;
            debug("parameter value not in sync, marking as dirty");
            return;
          }
        }
        debug("no offending parameter found, marking as clean");
        m_dirty = false;
      }

      void
      consume(const IMC::SetEntityParameters* msg)
      {
        if (msg->name != m_args.p_elabel)
          return;

        IMC::MessageList<IMC::EntityParameter>::const_iterator itr = msg->params.begin();
        for (; itr != msg->params.end(); ++itr)
        {
          try
          {
            if (m_ptable.set((*itr)->name, (*itr)->value).changed())
              m_dirty = true;
          }
          catch (std::runtime_error& e)
          {
            err(DTR("updating entity parameters: %s: '%s'"), e.what(),
                (*itr)->name.c_str());
          }
        }
      }

      void
      setProxiedParameters(void)
      {
        IMC::SetEntityParameters eps;
        eps.name = m_args.p_elabel;

        std::map<std::string, Tasks::Parameter*>::const_iterator itr = m_ptable.begin();
        for (; itr != m_ptable.end(); ++itr)
        {
          IMC::EntityParameter ep;
          ep.name = itr->second->name();
          ep.value = itr->second->value();
          eps.params.push_back(ep);

          debug("sending parameter %s = %s", ep.name.c_str(), ep.value.c_str());
        }

        dispatch(eps);
      }

      void
      queryProxiedParameters(void)
      {
        IMC::QueryEntityParameters qeps;
        qeps.name = m_args.p_elabel;
        qeps.visibility = Tasks::Parameter::VISIBILITY_DEVELOPER;
        qeps.scope = Tasks::Parameter::SCOPE_GLOBAL;
        dispatch(qeps);
      }

      void
      consume(const IMC::Heartbeat* msg)
      {
        if (msg->getSource() != m_proxied_id)
          return;

        if (m_dirty && m_reply_timer.overflow())
        {
          setProxiedParameters();
          queryProxiedParameters();
          m_reply_timer.reset();
        }

         if (m_hb_timer.overflow())
         {
           queryProxiedParameters();
         }
         else
         {
           m_hb_timer.reset();
         }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);

          if (isActive())
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
          else
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        }
      }

    };
  }
}

DUNE_TASK
