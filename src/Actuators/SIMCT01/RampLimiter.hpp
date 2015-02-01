//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef ACTUATORS_SIMCT01_RAMP_LIMITER_HPP_INCLUDED_
#define ACTUATORS_SIMCT01_RAMP_LIMITER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Actuators
{
  namespace SIMCT01
  {
    using DUNE_NAMESPACES;

    // Remp Limiter limits the an input according to a maximum derivative
    template <typename Type>
    class RampLimiter
    {
    public:
      //! Constructor
      //! @param[in] max_derivative maximum derivative (increasing or decreasing)
      RampLimiter(float max_derivative):
        m_max_der(max_derivative)
      {
        m_last_value = (Type)0;
        m_req_value = (Type)0;
      }

      ~RampLimiter(void)
      {

      }

      void
      clear(void)
      {
        m_delta.clear();
      }

      Type
      update(Type value)
      {
        m_req_value = value;

        return update();
      }

      Type
      update(void)
      {
        double tstep = m_delta.getDelta();

        if (tstep <= 0.0)
          return (Type)0;

        float max_change = tstep * m_max_der;

        Type value;

        if (m_req_value > m_last_value)
          value = std::min((float)m_last_value + max_change, (float)m_req_value);
        else
          value = std::max((float)m_last_value - max_change, (float)m_req_value);

        m_last_value = value;

        return value;
      }

    private:
      //! Maximum admissible value for derivative
      float m_max_der;
      //! Time window between values
      DUNE::Time::Delta m_delta;
      //! Last output value from this object
      Type m_last_value;
      //! Current requested value
      Type m_req_value;
    };
  }
}

#endif
