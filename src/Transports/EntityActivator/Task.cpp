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

// ISO C++ 98 headers.
#include <algorithm>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Tasks/ActLockEntity.hpp>

namespace Transports
{
  namespace EntityActivator
  {
    using DUNE_NAMESPACES;

    //! %Task arguments.
    struct Arguments
    {
      //! Slave entity
      std::string slave_entity;
    };

    //! Desired lock timeout
    static float c_desired_tout = 10.0;
    //! Safety margin for lock timeout
    static float c_tout_margin = 1.0;

    //! Entity activator task.
    struct Task: public DUNE::Tasks::Task
    {
      //! Configuration parameters
      Arguments m_args;
      //! Slave entity id
      unsigned int m_slave_id;
      //! Activation lock timer
      Counter<float> m_lock_timer;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_slave_id(DUNE_IMC_CONST_UNK_EID)
      {
        param("Slave Entity", m_args.slave_entity)
        .defaultValue("")
        .description("Slave entities to keep active");

        bind<IMC::EntityActivationLock>(this);
      }

      void
      onEntityResolution(void)
      {
        m_slave_id = resolveEntity(m_args.slave_entity);
      }

      void
      keepSlaveActive(void)
      {
        if (!m_lock_timer.overflow())
          return;

        spew("requesting activation lock on entity %d", m_slave_id);

        IMC::EntityActivationLock eal;
        eal.setDestinationEntity(m_slave_id);
        eal.op = IMC::EntityActivationLock::EAL_ACQUIRE;
        eal.timeout = c_desired_tout;
        dispatch(eal);
      }

      void
      releaseSlave(void)
      {
        spew("releasing activation lock on entity %d", m_slave_id);

        IMC::EntityActivationLock eal;
        eal.setDestinationEntity(m_slave_id);
        eal.op = IMC::EntityActivationLock::EAL_RELEASE;
        dispatch(eal);
      }



      void
      consume(const IMC::EntityActivationLock* msg)
      {
        if (msg->getSourceEntity() != m_slave_id)
          return;

        if (msg->op == IMC::EntityActivationLock::EAL_ACQUIRE_ACK)
        {
          inf("got activation lock on entity %s for %d seconds", m_args.slave_entity.c_str(), msg->timeout);
          m_lock_timer.setTop(std::max(msg->timeout - c_tout_margin, 0.0f));
        }
        else if (msg->op == IMC::EntityActivationLock::EAL_RELEASE_ACK)
        {
          inf("release activation lock on entity %s", m_args.slave_entity.c_str());
          m_lock_timer.setTop(0);
        }
        else if (msg->op == IMC::EntityActivationLock::EAL_TIMEOUT)
        {
          inf("activation lock on entity %s timed out", m_args.slave_entity.c_str());
          m_lock_timer.setTop(0);
        }
      }

      void
      onMain(void)
      {
        while(!stopping())
        {
          waitForMessages(1.0);
          keepSlaveActive();
        }
        releaseSlave();
      }
    };
  }
}

DUNE_TASK
