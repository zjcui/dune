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

#ifndef TRANSPORTS_GSM_PDU_HPP_INCLUDED_
#define TRANSPORTS_GSM_PDU_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace GSM
  {
    using DUNE_NAMESPACES;

    class PDU
    {
    public:
      static void
      decodeSMS(const std::string& hex)
      {
        if ((hex.size() % 2) != 0)
          throw std::runtime_error("invalid size");

        unsigned offset = 0;

        std::vector<uint8_t> pdu;
        String::fromHex(hex, pdu);

        unsigned smsc_size = pdu[offset++];
        std::cerr << "smsc_size: " << smsc_size << std::endl;

        if (smsc_size > 0)
        {
          unsigned addr_type = pdu[offset++];
          std::cerr << "addr_type: " << addr_type << std::endl;
          if (addr_type != 145)
            throw std::runtime_error("unknown address type");

          unsigned smsc_number_size = smsc_size - 1;
          std::string smsc_number = decodeSemiOctets(&pdu[offset], smsc_size - 2, true);
          offset += smsc_size;
          std::cerr << "SMSC Number: " << smsc_number << std::endl;
        }

        unsigned sender_size = pdu[offset++];
        std::cerr << "Sender Size: " << sender_size << std::endl;
        unsigned sender_type = pdu[offset++];
        std::cerr << "Sender Type: " << sender_type << std::endl;
        unsigned sender_number_octs = sender_size / 2;
        unsigned sender_number_fill = sender_size % 2;


        std::string sender_number = decodeSemiOctets(&pdu[offset], sender_number_octs, sender_number_fill);
        std::cerr << "Sender Number: " << sender_number << std::endl;
        offset += sender_number_octs + sender_number_fill;

        unsigned proto_id = pdu[offset++];
        std::cerr << "Proto Id: " << proto_id << std::endl;

        unsigned data_enc = pdu[offset++];
        std::cerr << "Data Enc: " << data_enc << std::endl;

        std::string timestamp = decodeSemiOctets(&pdu[offset], 7, true);
        offset += 7;
        std::cerr << "Timestamp: " << timestamp << std::endl;

        unsigned sms_size = pdu[offset++];
        std::cerr << "SMS Size: " << sms_size << std::endl;

        for (unsigned i = 0; i < sms_size; ++i)
        {
          fprintf(stderr, "%02X ", pdu[offset + i]);
        }
        fprintf(stderr, "\n");
      }

      static std::string
      encodeSMS(const std::string& dst, const uint8_t* data, size_t data_size)
      {
        std::string msg;
        msg += "00" // SCA.
        "11" // PDU-type.
        "00" // Message Reference.
        ;

        // Destination address size.
        msg += String::str("%02X", dst.size());

        // Destination address type.
        msg += "91";

        // Destination address.
        std::string number(dst);
        if (number.size() % 2)
          number.push_back('f');

        for (unsigned i = 0; i < dst.size(); i += 2)
        {
          msg.push_back(dst[i + 1]);
          msg.push_back(dst[i]);
        }

        msg += "00" // PID.
        "F4" // Data Coding Scheme.
        "AA" // VP.
        ;

        // UDL.
        msg += String::str("%02X", data_size + (data_size / 8));

        // User data.
        for (unsigned i = 0; i < data_size; ++i)
          msg += String::str("%02X", data[i]);

        return msg;
      }

      static std::string
      encodeSMS(const std::string& dst, const std::vector<uint8_t>& data)
      {
        encodeSMS(dst, &data[0], data.size());
      }

    private:
      static std::string
      decodeSemiOctets(const uint8_t* data, unsigned noctets, bool fill)
      {
        std::string str;
        for (unsigned i = 0; i < noctets; ++i)
          str += String::str("%02x", ((data[i] & 0xf0) >> 4) | ((data[i] & 0x0f) << 4));

        if (fill)
          str += String::str("%x", data[noctets] & 0x0f);

        return str;
      }
    };
  }
}

#endif
