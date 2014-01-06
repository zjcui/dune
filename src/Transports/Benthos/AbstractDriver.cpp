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
// Author: Eduardo Marques                                                  *
//***************************************************************************

// Local headers.
#include "AbstractDriver.hpp"

namespace Transports
{
  namespace Benthos
  {
    using namespace DUNE::Time;

    // Sound speed constant.
    const double AbstractDriver::c_sound_speed = 1500.0;

    // Modem setup time before send (1750 ms).
    const double AbstractDriver::c_modem_setup_time = 1.750;

    double
    AbstractDriver::totalOverhead(double d, uint16_t bytes) const
    {
      return tripOverhead(d) + txOverhead(bytes);
    }

    double
    AbstractDriver::constantOverhead(void) const
    {
      return c_modem_setup_time
      + 0.001 * (m_conf.forwarding_delay / 50);
    }

    double
    AbstractDriver::tripOverhead(double d) const
    {
      return d / c_sound_speed;
    }

    double
    AbstractDriver::dataOverhead(uint16_t bytes) const
    {
      return 8.0 * bytes / (double)m_conf.acoustic_baud_rate;
    }

    double
    AbstractDriver::txOverhead(uint16_t bytes) const
    {
      return constantOverhead() + dataOverhead(bytes);
    }
  }
}