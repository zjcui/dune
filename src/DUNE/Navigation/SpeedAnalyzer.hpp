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
// Author: José Braga                                                       *
//***************************************************************************

#ifndef DUNE_NAVIGATION_SPEED_ANALYZER_HPP_INCLUDED_
#define DUNE_NAVIGATION_SPEED_ANALYZER_HPP_INCLUDED_

namespace DUNE
{
  namespace Navigation
  {
    //! Number of returns.
    static const uint8_t c_dvl_stack = 5;
    //! Number of returns.
    static const uint8_t c_gps_stack = 5;
    //! Number of returns.
    static const uint8_t c_rpm_stack = 5;

    //! DVL return echo.
    struct DvlReturn
    {
      // Speed in the x-axis.
      float x;
      // Speed in the y-axis.
      float y;
      // Measurement time.
      double time;
    };

    //! DVL return data.
    struct DvlData
    {
      DvlReturn* gnd_speed[c_dvl_stack];
      DvlReturn* wtr_speed[c_dvl_stack];
    };

    //! GPS return data.
    struct GpsData
    {
      bool valid;
      float speed;
      double time;
    };

    //! RPM return data.
    struct RpmData
    {
      int16_t rpm;
      float speed;
      double time;
    };

    //! %SpeedAnalyzer is responder to gather all system speed
    //! information and use appropriate filters to estimate it.
    //!
    //! @author José Braga.
    class SpeedAnalyzer
    {
    public:
      //! Constructor.
      SpeedAnalyzer(void)
      {
        for (uint8_t i = 0; i < c_dvl_stack; ++i)
        {
          m_dvl.gnd_speed[i] = NULL;
          m_dvl.wtr_speed[i] = NULL;
        }

        for (uint8_t i = 0; i < c_gps_stack; ++i)
          m_gps[i] = NULL;

        for (uint8_t i = 0; i < c_rpm_stack; ++i)
          m_rpm[i] = NULL;
      }

      //! Destructor.
      ~SpeedAnalyzer(void)
      {
        for (uint8_t i = 0; i < c_dvl_stack; ++i)
        {
          Memory::clear(m_dvl.gnd_speed[i]);
          Memory::clear(m_dvl.wtr_speed[i]);
        }

        for (uint8_t i = 0; i < c_gps_stack; ++i)
          Memory::clear(m_gps[i]);

        for (uint8_t i = 0; i < c_rpm_stack; ++i)
          Memory::clear(m_rpm[i]);
      }

      DvlData m_dvl;
      GpsData* m_gps[c_gps_stack];
      RpmData* m_rpm[c_rpm_stack];
    };
  }
}

#endif
