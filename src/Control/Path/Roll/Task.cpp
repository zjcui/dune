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
// Author: Joao Fortuna                                                     *
//***************************************************************************

//***************************************************************************
// A simple roll controller that doesn't really do anything                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace Path
  {
    namespace Roll
    {
      using DUNE_NAMESPACES;

      struct Arguments
      {
        //! Maximum bank angle - Defined by aircaft structural, navigation
        //! or control constraints
        double max_bank;
      };

      struct Task: public DUNE::Control::PathController
      {
        Arguments m_args;
        IMC::DesiredRoll m_bank;
        double m_airspeed;
        double m_last_change;
        Random::Generator* m_rnd;

        Task(const std::string& name, Tasks::Context& ctx):
          DUNE::Control::PathController(name, ctx),
          m_airspeed(0.0),
          m_last_change(0.0),
          m_rnd(NULL)
        {
          param("Maximum Bank", m_args.max_bank)
          .units(Units::Degree)
          .minimumValue("5")
          .maximumValue("45")
          .defaultValue("30")
          .description("Limit for absolute value of output bank angle reference");
       }

        void
        onResourceAcquisition(void)
        {
          m_rnd = Random::Factory::create("drand48", -1);
        }

        void
        onUpdateParameters(void)
        {
          PathController::onUpdateParameters();

          if (paramChanged(m_args.max_bank))
            m_args.max_bank = Angles::radians(m_args.max_bank);
        }

        void
        onPathActivation(void)
        {
          // Activate bank (roll) controller.
          enableControlLoops(IMC::CL_ROLL);
        }

        void
        step(const IMC::EstimatedState& state, const TrackingState& ts)
        {
          // Unused state
          (void) state;

          if (ts.now - m_last_change > 2)
          {
            m_bank.value = m_rnd->uniform(-m_args.max_bank, m_args.max_bank);
            m_last_change = ts.now;
          }

          // Send to bus
          dispatch(m_bank);
        }
      };
    }
  }
}

DUNE_TASK
