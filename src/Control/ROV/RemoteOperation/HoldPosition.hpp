//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef CONTROL_ROV_HOLD_POSITION_HPP_INCLUDED_
#define CONTROL_ROV_HOLD_POSITION_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Control
{
  namespace ROV
  {
    namespace RemoteOperation
    {
      using DUNE_NAMESPACES;

      //! Hold position controller for a fully actuated ROV
      class HoldPosition
      {
      public:
        //! Constructor.
        HoldPosition(const std::vector<float>& gains) :
          m_time(-1.0)
        {
          setGains(gains);
        }
        
        //! Destructor.
        ~HoldPosition(void)
        {

        }

        void
        setPosition(const IMC::EstimatedState* msg)
        {
          Coordinates::toWGS84(*msg, m_lat, m_lon);
        }

        void
        setGains(const std::vector<float>& gains)
        {
          m_pid.reset();
          m_pid.setGains(gains);
        }

        void
        getSpeeds(const IMC::EstimatedState* msg, double& u, double& v)
        {
          if (m_time < 0)
          {
            m_time = Clock::get();
            return;
          }

          double e_lat = msg->lat;
          double e_lon = msg->lon;
          double bearing;
          double range;

          Coordinates::toWGS84(*msg, e_lat, e_lon);

          Coordinates::WGS84::getNEBearingAndRange(e_lat, e_lon,
                                                   m_lat, m_lon,
                                                   &bearing, &range);

          float speed = m_pid.step(Clock::get() - m_time, range);
          m_time = Clock::get();

          u = speed * std::cos(bearing);
          v = speed * std::sin(bearing);

          Math::Angles::rotate(msg->psi, true, u, v);
        }

      private:
        //! Discrete PID controller
        DiscretePID m_pid;
        //! Latitude of coordinate to hold
        double m_lat;
        //! Longitude of coordinate to hold
        double m_lon;
        //! Save a time reference
        float m_time;
      };
    }
  }
}

#endif
