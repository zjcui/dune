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
    static const size_t c_dvl_size = 5;
    //! Number of returns.
    static const size_t c_gps_size = 5;
    //! Number of returns.
    static const size_t c_rpm_size = 5;

    //! DVL return data.
    struct DvlData
    {
      //! If speed is valud or not.
      bool valid;
      //! Speed in the x-axis.
      float x;
      //! Speed in the y-axis.
      float y;
      //! Measurement time.
      double time;
    };

    //! GPS return data.
    struct GpsData
    {
      //! If speed is valid or not.
      bool valid;
      //! Speed value.
      float speed;
      //! Measurement time.
      double time;
    };

    //! RPM return data.
    struct RpmData
    {
      //! Revolution per minute.
      int16_t rpm;
      //! Speed value.
      float speed;
      //! Measurement time.
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
        // Initialize distances.
        invalidate();
      }

      //! Destructor.
      ~SpeedAnalyzer(void)
      { }

      //! Received new GroundVelocity reading.
      //! @param[in] msg new GroundVelocity.
      //! @param[in] yaw current system heading.
      void
      consume(const IMC::GroundVelocity* msg, double yaw)
      {
        DvlData d;
        d.x = msg->x;
        d.y = msg->y - m_dist_dvl_cg * yaw;;
        d.time = msg->getTimeStamp();
        d.valid = (msg->validity == (IMC::GroundVelocity::VAL_VEL_X
                                     | IMC::GroundVelocity::VAL_VEL_Y
                                     | IMC::GroundVelocity::VAL_VEL_Z));

        if (d.valid)
          m_valid_gv = true;

        // Vector not full.
        if (m_dvl_gnd.size() >= c_dvl_size)
          m_dvl_gnd.erase(m_dvl_gnd.begin());

        m_dvl_gnd.push_back(d);
      }

      //! Received new WaterVelocity reading.
      //! @param[in] msg new WaterVelocity.
      //! @param[in] yaw current system heading.
      void
      consume(const IMC::WaterVelocity* msg, double yaw)
      {
        DvlData d;
        d.x = msg->x;
        d.y = msg->y - m_dist_dvl_cg * yaw;
        d.time = msg->getTimeStamp();
        d.valid = (msg->validity == (IMC::WaterVelocity::VAL_VEL_X
                                     | IMC::WaterVelocity::VAL_VEL_Y
                                     | IMC::WaterVelocity::VAL_VEL_Z));

        if (d.valid)
          m_valid_wv = true;

        // Vector not full.
        if (m_dvl_wtr.size() >= c_dvl_size)
          m_dvl_wtr.erase(m_dvl_wtr.begin());

        m_dvl_wtr.push_back(d);
      }

      //! Received new GPS fix.
      //! @param[in] msg new GpsFix.
      void
      consume(const IMC::GpsFix* msg)
      {
        GpsData g;
        g.valid = (msg->validity & IMC::GpsFix::GFV_VALID_SOG);
        g.speed = msg->sog;
        g.time = msg->getTimeStamp();

        if (g.valid)
          m_valid_gps = true;

        // Vector not full.
        if (m_gps.size() >= c_gps_size)
          m_gps.erase(m_gps.begin());

        m_gps.push_back(g);
      }

      //! Received new RPM reading.
      //! @param[in] msg new Rpm.
      //! @param[in] filter_speed speed estimated by the navigation filter.
      void
      consume(const IMC::Rpm* msg, double filter_speed)
      {
        RpmData r;
        r.rpm = msg->value;
        r.speed = filter_speed;
        r.time = msg->getTimeStamp();

        // Vector not full.
        if (m_rpm.size() >= c_rpm_size)
          m_rpm.erase(m_rpm.begin());

        m_rpm.push_back(r);
      }

      //! Get body-fixed reference frame speed estimates.
      //! @param[out] u forward speed (body-frame x-axis).
      //! @param[out] v transversal speed (body-frame y-axis).
      void
      get(double* u, double* v)
      {
        *u = 0.0;
        *v = 0.0;
      }

      //! Invalidate flags
      void
      invalidate(void)
      {
        m_valid_gv = false;
        m_valid_wv = false;
        m_valid_gps = false;
      }

    private:
      //! DVL ground-velocity values.
      std::vector<DvlData> m_dvl_gnd;
      //! DVL water-velocity values.
      std::vector<DvlData> m_dvl_wtr;
      //! GPS velocity values.
      std::vector<GpsData> m_gps;
      //! RPM values.
      std::vector<RpmData> m_rpm;
      //! DVL external validity flags.
      bool m_valid_gv;
      bool m_valid_wv;
      //! GPS external validity flag.
      bool m_valid_gps;
      //! Displacement between DVL and vehicle center of gravity.
      float m_dist_dvl_cg;
    };
  }
}

#endif
