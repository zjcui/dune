//***************************************************************************
// Copyright 2007-2014 University of Michigan                               *
// Aerospace, Robotics, and Controls laboratory (ARC Lab)                   *
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
// Author: Ricardo Bencatel                                                 *
// Author: Zhengjie Cui                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace RSSI
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      //! Signal source position
      double sgn_src_lat;
      double sgn_src_lon;
      double sgn_src_hei;
      double sgn_src_x;
      double sgn_src_y;
      double sgn_src_z;
      //! Signal gain
      double sgn_gain;
      //! Homing vehicle name
      std::string vehicle_name;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Parameters
      IMC::EstimatedState m_src_es;
      IMC::RSSI m_rssi;
      //! Last time debug information was shown
      double m_last_time_spew;
      double m_last_time_trace;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
		m_last_time_spew(std::min(-1.0, Clock::get())),
		m_last_time_trace(std::min(-1.0, Clock::get()))
      {
        param("Signal Gain", m_args.sgn_gain)
        .description("Gain of signal strength")
        .defaultValue("10.0");

        param("Source Longitude", m_args.sgn_src_lon)
        .description("Reference longitude of signal source")
        .defaultValue("12.0");

        param("Source Latitude", m_args.sgn_src_lat)
        .description("Reference latitude of signal source")
        .defaultValue("12.0");

        param("Source Height", m_args.sgn_src_hei)
        .description("Reference height of signal source")
        .defaultValue("0.0");

        param("Source X", m_args.sgn_src_x)
        .description("Reference x position of signal source")
        .defaultValue("0.0");

        param("Source Y", m_args.sgn_src_y)
        .description("Reference y position of signal source")
        .defaultValue("0.0");

        param("Source Z", m_args.sgn_src_z)
        .description("Reference z position of signal source")
        .defaultValue("0.0");

        param("Target System", m_args.vehicle_name)
        .description("Target system name.")
        .defaultValue("x8-03");

        bind<IMC::EstimatedState>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (paramChanged(m_args.sgn_src_lat))
        {
          m_src_es.lat = Math::Angles::radians(m_args.sgn_src_lat);
          m_src_es.lon = Math::Angles::radians(m_args.sgn_src_lon);
          m_src_es.height = m_args.sgn_src_hei;
          m_src_es.x = m_args.sgn_src_x;
          m_src_es.y = m_args.sgn_src_y;
          m_src_es.z = m_args.sgn_src_z;
        }
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        if (m_args.vehicle_name == resolveSystemId(msg->getSource()))
        {
          IMC::EstimatedState vehicle_es = *msg;

          // Signal strength computation
          Coordinates::WGS84::displace(vehicle_es.x, vehicle_es.y, vehicle_es.z,
              &vehicle_es.lon, &vehicle_es.lat, &vehicle_es.height);
          double distance = Coordinates::WGS84::distance(m_src_es.lon, m_src_es.lat, m_src_es.height,
              vehicle_es.lon, vehicle_es.lat, vehicle_es.height);
          m_rssi.value = m_args.sgn_gain/distance;
          dispatch(m_rssi);

          // Debug printouts
          double time_current  = Clock::get();
          if (time_current >= m_last_time_trace + 1.5)
          {
            trace("Current RSSI = %.10f, w.r.t %s", m_rssi.value,
                  resolveEntity(msg->getSourceEntity()).c_str());
            m_last_time_trace = time_current;
          }
          if (time_current >= m_last_time_spew + 0.5)
          {
            spew("Signal source position: longitude = %.10f, latitude = %.10f",
                 Math::Angles::degrees(m_src_es.lon), Math::Angles::degrees(m_src_es.lat));
            spew("Vehicle position:       longitude = %.10f, latitude = %.10f",
                Math::Angles::degrees(vehicle_es.lon), Math::Angles::degrees(vehicle_es.lat));
            spew("Distance to source: %.10f", distance);
            m_last_time_spew = time_current;
          }
        }
      }

      //! Main loop.
      void
      task(void)
      {
        consumeMessages();
      }
    };
  }
}

DUNE_TASK
