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

#ifndef TRANSPORTS_MICROMODEM_DRIVER_HPP_INCLUDED_
#define TRANSPORTS_MICROMODEM_DRIVER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <sstream>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace Micromodem
  {
    using DUNE_NAMESPACES;

    class Driver: public BasicModem
    {
    public:
      Driver(Tasks::Task* task, SerialPort* uart):
        BasicModem(task, uart)
      { }

      //! Destructor.
      ~Driver(void)
      { }

      //! Set duration of transmitted narrow band pulses.
      //! @param[in] msec duration in millisecond.
      void
      setTxPulseDuration(unsigned msec)
      {
        m_nbp_tx_pulse_dur = msec;
      }

      //! Set duration of received narrow band pulses.
      //! @param[in] msec duration in millisecond.
      void
      setRxPulseDuration(unsigned msec)
      {
        m_nbp_rx_pulse_dur = msec;
      }

      template <typename T>
      void
      setParameter(const std::string& name, const T& value)
      {
        setParameter(name, uncastLexical(value));
      }

      void
      setParameter(const std::string& name, const std::string& value)
      {
        std::string cmd = String::str("$CCCFG,%s,%s", name.c_str(), value.c_str());
        sendLine(cmd);
        expectReply(cmd);
      }

      void
      sendMiniPacket(unsigned src, unsigned dst, uint16_t data)
      {
        std::string cmd = String::str("$CCMUC,%u,%u,%04x", src, dst, data & 0x1FFF);
        sendLine(cmd);
        expectReply(cmd);
      }

      void
      pingMiniPacket(unsigned src, unsigned dst)
      {
        std::string cmd = String::str("$CCMPC,%u,%u", src, dst);
        sendLine(cmd);
        expectReply(cmd);
        setBusy(true);
      }

      void
      sendPacket(unsigned src, unsigned dst, const std::vector<char>& data, bool ack = false)
      {
        std::string cmd = String::str("$CCTXD,%u,%u,%u,%s", src, dst,
                                      ack ? 1 : 0,
                                      String::toHex(data).c_str());
        sendLine(cmd);

        cmd = String::str("$CCCYC,0,%u,%u,0,0,1", src, dst);
        sendLine(cmd);
        expectReply(cmd);
      }

      void
      pingNarrowBand(unsigned tx_hz, const std::vector<unsigned>& rx_hz, unsigned timeout)
      {
        std::string cmd = String::str("$CCPNT,%u,%u,%u,%u,%u,%u,%u,%u,1",
                                      tx_hz,
                                      m_tx_pulse_dur,
                                      m_rx_pulse_dur,
                                      timeout,
                                      );
      //   sendLine(cmd);
      //   expectReply(cmd);
      //   setBusy(true);
      // }

    private:
      void
      expectReply(const std::string& cmd)
      {
        std::string reply(cmd);
        reply[2] = 'A';
        uint8_t csum = Algorithms::XORChecksum::compute((uint8_t*)reply.c_str() + 1, reply.size());
        reply += String::str("*%02X", csum);
        expect(reply);
      }

      void
      sendLine(const std::string& line)
      {
        std::string s(line);
        s += "\r\n";
        send(s);
      }

      void
      handleMiniPacketPingReply(const std::string& str)
      {
        unsigned src = 0;
        unsigned dst = 0;
        double time = 0;

        getTask()->spew("handling mini packet ping reply");
        if (std::sscanf(str.c_str(), "$CAMPR,%u,%u,%lf", &src, &dst, &time) == 3)
        {
          getTask()->inf("got reply from %u", src);
        }
      }

      bool
      handleUnsolicited(const std::string& str)
      {
        if (String::startsWith(str, "$CAREV"))
        {
          getTask()->inf("unsolicited");
        }
        else if (String::startsWith(str, "$CAMPR"))
        {
          handleMiniPacketPingReply(str);
        }
        else
        {
          return false;
        }

        return true;
      }
    };
  }
}

#endif
