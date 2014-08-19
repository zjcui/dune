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

#ifndef SENSORS_KELLER_PARSER_HPP_INCLUDED_
#define SENSORS_KELLER_PARSER_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Constants.hpp"

namespace Sensors
{
  namespace Keller
  {
    using DUNE_NAMESPACES;

    //! Parser for Keller protocol.
    class Parser
    {
    public:
      //! Constructor.
      Parser(void):
        m_address(0),
        m_state(STATE_DEV_ADDR),
        m_crc_fault_count(0)
      { }

      //! Set device address.
      //! @param[in] address device address.
      void
      setAddress(uint8_t address)
      {
        m_address = address;
      }

      //! Parse one byte of data.
      //! @param[in] byte data byte.
      //! @return true if a command was parsed, false otherwise.
      bool
      parse(uint8_t byte)
      {
        switch (m_state)
        {
          case STATE_DEV_ADDR:
            if (byte == m_address)
            {
              m_frame.clear();
              m_frame.push_back(byte);
              m_state = STATE_FUNCTION_CODE;
            }
            break;

          case STATE_FUNCTION_CODE:
            m_frame.push_back(byte);
            if (getResponseDataSize(byte, m_frame_size))
            {
              m_frame_size += c_header_size;
              m_state = STATE_DATA;
            }
            else
            {
              m_state = STATE_DEV_ADDR;
            }
            break;

          case STATE_DATA:
            m_frame.push_back(byte);
            if (m_frame.size() == m_frame_size)
              m_state = STATE_CRC16_H;
            break;

          case STATE_CRC16_H:
            m_frame_crc16 = byte << 8;
            m_state = STATE_CRC16_L;
            break;

          case STATE_CRC16_L:
            m_state = STATE_DEV_ADDR;
            m_frame_crc16 |= byte;
            if (CRC16::compute(&m_frame[0], m_frame.size(), 0xFFFF) == m_frame_crc16)
              return true;
            else
              ++m_crc_fault_count;
            break;
        }

        return false;
      }

      const std::vector<uint8_t>&
      getFrame(void) const
      {
        return m_frame;
      }

      size_t
      getChecksumFaultCount(void) const
      {
        return m_crc_fault_count;
      }

      void
      clearChecksumFaultCount(void)
      {
        m_crc_fault_count = 0;
      }

    private:
      //! Finite state machine states.
      enum States
      {
        //! Device address.
        STATE_DEV_ADDR,
        //! Function code.
        STATE_FUNCTION_CODE,
        //! Data bytes.
        STATE_DATA,
        //! CRC16 most significant byte.
        STATE_CRC16_H,
        //! CRC16 least significant byte.
        STATE_CRC16_L
      };

      //! Device address.
      uint8_t m_address;
      //! Current finite state machine state.
      States m_state;
      //! Current parsed frame.
      std::vector<uint8_t> m_frame;
      //! CRC16 of current frame.
      uint16_t m_frame_crc16;
      //! Frame size of current frame without CRC16.
      size_t m_frame_size;
      //! Number of CRC16 faults.
      size_t m_crc_fault_count;

      //! Retrieve the data size of a given function code.
      //! @param[in] code function code.
      //! @return size of data portion.
      static bool
      getResponseDataSize(unsigned code, size_t& size)
      {
        switch (code)
        {
          case FUNC_READ_CHANNEL:           size = 5; return true;
          case FUNC_INITIALIZE_AND_RELEASE: size = 6; return true;
          case FUNC_READ_SERIAL_NUMBER:     size = 4; return true;
          case FUNC_SET_ZERO_POINT:         size = 1; return true;
          default: break;
        }

        return false;
      }
    };
  }
}

#endif
