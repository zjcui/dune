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

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Tasks/ActLockEntity.hpp>

using DUNE_NAMESPACES;

namespace Simulators
{
  //! %DummyActLock simulator for DUNE.
  //! This task serves as a testbed for the EntityActivationLock mecanism.
  //!
  //! @author Renato Caldas
  namespace DummyActLock
  {
    //| Probability of error while running.
    const double c_run_error_prob = 0.01;
    //| Probability of error while activating.
    const double c_act_error_prob = 0.3;

    struct Task: public Tasks::Task
    {
      //! Activation lock entity.
      ActLockEntity* m_entity;
      //! Random error gerenaror
      Math::Random::Generator* m_rnd;
      //! True if was in error
      bool m_was_in_error;


      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_entity(NULL),
        m_rnd(NULL),
        m_was_in_error(false)
      {

      }

      void
      onEntityReservation(void)
      {
        m_entity = reserveEntity<ActLockEntity>("Activation Lock Test");
        inf("created ActLockEntity with id %d", m_entity->getId());
      }

      void
      onResourceAcquisition(void)
      {
        m_rnd = Math::Random::Factory::create(Math::Random::Factory::c_default);
      }

      void
      onResourceRelease(void)
      {
        delete m_rnd;
      }

      bool
      generateRandomError(float error_prob)
      {
        if (m_rnd->uniform() < error_prob)
          return true;
        else
          return false;
      }

      void
      handleActive(void)
      {
        // Do active stuff..
        // check errors
        bool in_error = generateRandomError(c_run_error_prob);
        if (in_error)
        {
          m_entity->markFault("in dummy error mode");
          if (!m_was_in_error)
          {
            err("Entity is in error");
            m_was_in_error = true;
          }

        }
        else if (m_entity->isActivationChanging())
        {
          // Do activation stuff...
          bool can_mark_active = true;
          bool activation_error = generateRandomError(c_act_error_prob);

          // Then mark as active if possible
          if (activation_error)
          {
            m_entity->markFault("random stuff missing for activation");
          }
          else if (can_mark_active)
          {
            m_entity->markActive();
            inf("Entity was activated");
          }
        }
        else
        {
          // Active main loop...
          m_entity->markActive();
          if (m_was_in_error)
          {
            m_was_in_error = false;
            inf("Entity recovered from error.");
          }
        }
      }

      void
      handleInactive(void)
      {
        if (m_entity->isActivationChanging())
        {
          // Do deactivation stuff...
          bool can_mark_inactive = true;
          // Then mark as inactive if possible
          if (can_mark_inactive)
          {
            m_entity->markInactive();
            inf("Entity was deactivated");
          }
        }
      }


      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          if (m_entity->isRequestedActive())
            handleActive();
          else
            handleInactive();
        }
      }
    };
  }
}

DUNE_TASK
