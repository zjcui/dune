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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef SENSORS_KELLER_CONSTANTS_HPP_INCLUDED_
#define SENSORS_KELLER_CONSTANTS_HPP_INCLUDED_

namespace Sensors
{
  namespace Keller
  {
    //! Message indices.
    enum Indices
    {
      //! Device address index.
      IDX_DEV_ADDR  = 0,
      //! Function code index.
      IDX_FUNC_CODE = 1,
      //! First data byte
      IDX_DATA0     = 2
    };

    //! Function codes.
    enum Functions
    {
      //! Initialize and release.
      FUNC_INITIALIZE_AND_RELEASE = 48,
      //! Read serial number.
      FUNC_READ_SERIAL_NUMBER     = 69,
      //! Read value of a channel.
      FUNC_READ_CHANNEL           = 73,
      //! Set zero point.
      FUNC_SET_ZERO_POINT         = 95
    };

    //! Signal channels.
    enum Channels
    {
      //! Calculated channel.
      CHANNEL_CH0  = 0,
      //! Pressure from pressure sensor 1.
      CHANNEL_P1   = 1,
      //! Pressure from pressure sensor 2.
      CHANNEL_P2   = 2,
      //! Additional temperature sensor.
      CHANNEL_T    = 3,
      //! Temperature of pressure sensor 1.
      CHANNEL_TOB1 = 4,
      //! Temperature of pressure sensor 2.
      CHANNEL_TOB2 = 5
    };

    //! Zero point command action.
    enum ZeroPointActions
    {
      //! Set zero point of pressure sensor 1.
      ZPA_SET_ZERO_P1    = 0,
      //! Reset zero point of pressure sensor 1 to standard value.
      ZPA_RESET_ZERO_P1  = 1,
      //! Set zero point of pressure sensor 2.
      ZPA_SET_ZERO_P2    = 2,
      //! Reset zero point of pressure sensor 3 to standard value.
      ZPA_RESET_ZERO_P2  = 3,
      //! Update DAC scaling.
      ZPA_UPDATE_DAC     = 4,
      //! Set zero point of calculated channel.
      ZPA_SET_ZERO_CH0   = 6,
      //! Reset zero point of calculated channel to standard value.
      ZPA_RESET_ZERO_CH0 = 7
    };

    //! Size of message header.
    static const size_t c_header_size = 2;
    //! Size of message footer (i.e., CRC16).
    static const size_t c_footer_size = 2;
  }
}

#endif
