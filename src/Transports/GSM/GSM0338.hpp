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

#ifndef TRANSPORTS_GSM_GSM0338_HPP_INCLUDED_
#define TRANSPORTS_GSM_GSM0338_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <string>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace GSM
  {
    class GSM0338
    {
    public:
      //! Convert string in GSM 03.38 septet format to UTF-8.
      //! @param[in] gsm text in GSM 03.38 format.
      //! @return UTF-8 encoded text.
      std::string
      toUTF8(const std::string& gsm)
      {
        std::string utf;
        bool escape = false;
        uint16_t c = 0;

        for (size_t i = 0; i < gsm.size(); ++i)
        {
          if (gsm[i] < 0)
            throw std::runtime_error("invalid character value");

          if (escape)
          {
            escape = false;
            c = c_escape_inv;
            for (size_t i = 0; i < sizeof(c_gsm_to_utf8_ext) / sizeof(uint16_t); i += 2)
            {
              if (gsm[i] == (c_gsm_to_utf8_ext[i] & 0xff))
                c = c_gsm_to_utf8_ext[i + 1];
            }

            if (c == c_escape_inv)
              throw std::runtime_error("invalid escape sequence");
          }
          else
          {
            c_gsm_to_utf8[gsm[i]];

            // Escape.
            if (c == c_escape)
            {
              escape = true;
              continue;
            }
          }

          if (c & 0xff00)
            utf8.append((c >> 8) & 0xff);
          utf8.append((c >> 0) & 0xff);
        }
      }

    private:
      static const uint16_t c_escape = 0xFFFE;
      //! Invalid escape sequence.
      static const uint16_t c_escape_inv = 0xFFFF;

      //! Extended character set.
      static const uint16_t c_gsm2utf8_ext[] =
      {
        0x000A, 0x000C,
        0x0014, 0x005E,
        0x0028, 0x007B,
        0x0029, 0x007D,
        0x002F, 0x005C,
        0x003C, 0x005B,
        0x003D, 0x007E,
        0x003E, 0x005D,
        0x0040, 0x007C,
        0x0065, 0x20AC
      };




    };
  }
}

#endif
