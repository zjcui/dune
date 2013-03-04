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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef ACTUATORS_SCRTV4_CONSTANTS_HPP_INCLUDED_
#define ACTUATORS_SCRTV4_CONSTANTS_HPP_INCLUDED_

namespace Actuators
{
  namespace SCRTv4
  {
    //! Number of servos
    static const unsigned c_servo_count = 4;

    enum Commands
    {
      CMD_MEASURES             = 1,
      CMD_MEASURES_RATE        = 2,
      CMD_PARAMS_CON           = 3,
      CMD_PARAMS_FAC           = 4,
      CMD_PARAMS_EFF           = 5,
      CMD_PARAMS_CAL_FBK       = 6,
      CMD_PARAMS_CAL_FBK_START = 7,
      CMD_PARAMS_CAL_FBK_END   = 8,
      CMD_PARAMS_CAL_MID       = 9,
      CMD_SERVO_SET            = 10,
      CMD_SERVO_PWR            = 11,
      CMD_SELF_TEST            = 12,
      CMD_CHECK_FUSES          = 13
    };

    enum MeasuresRates
    {
      MEASURES_RATE_0HZ        = 0,
      MEASURES_RATE_1HZ        = 1,
      MEASURES_RATE_2HZ        = 2,
      MEASURES_RATE_5HZ        = 5,
      MEASURES_RATE_10HZ       = 10
    };

    enum SelfTestResult
    {
      SELF_TEST_OK             = 0xf0,
      SELF_TEST_ERROR          = 0xf1
    };
  }
}

#endif
