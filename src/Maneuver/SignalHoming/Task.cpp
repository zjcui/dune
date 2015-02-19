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
// Author: Dave Oyler                                                       *
// Author: Ricardo Bencatel                                                 *
// Author: Zhengjie Cui                                                     *
//***************************************************************************

//***************************************************************************
// Original reference:
// "A Homing Guidance Law for Binary Range-Rate Measurements",
// by Oyler, D.W., Kabamba, P.T. ; Girard, A.R.,
// 2013 IEEE 52nd Annual Conference on Decision and Control (CDC), 2013
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Maneuver
{
  namespace SignalHoming
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      double xb_estimate;
      double yb_estimate;
      //! Controller parameters
      double lambda1;
      double lambda2;
      double yaw_rate_lim;
      double g_conv_spd;
      //! Observer parameters
      double g_obs_k1;
      double g_obs_k2;
      double eps;
      //! Control constraints
      double bank_lim;
      //! Signal source id name
      std::string src_id;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Task arguments.
      Arguments m_args;
      //! Vehicle state
      IMC::EstimatedState m_vehicle;
      double m_psi;
      bool m_es_valid;
      //! Vehicle speed
      double m_speed;
      //! Observer state
      IMC::EstimatedState m_beacon_es;
      double m_xb_estim;
      double m_yb_estim;
      double m_range_rate;
      double m_rssi_prev;
      //! Vehicle command limits
      double m_bank_lim;
      //! Last time debug information was shown
      double m_last_time_spew;
      double m_last_time_trace;
      double m_last_time_debug;
      //! Signal source id code
      uint16_t m_src_id;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx),
        m_psi( 0.0 ),
        m_es_valid( false ),
        m_speed( - 1.0 ),
        m_xb_estim( 0.0 ),
        m_yb_estim( 0.0 ),
        m_range_rate( 0.0 ),
        m_rssi_prev( 0.0 ),
        m_bank_lim( 0.0   ),
        m_last_time_spew( std::min( - 1.0, Clock::get() ) ),
        m_last_time_trace( std::min( - 1.0, Clock::get() ) ),
        m_last_time_debug( std::min( - 1.0, Clock::get() ) ),
        m_src_id(UINT16_MAX)
      {
        param("Initial Guess X", m_args.xb_estimate)
        .description("Initial guess of X position of Signal Source")
        .defaultValue("1000.0");

        param("Initial Guess Y", m_args.yb_estimate)
        .description("Initial guess of X position of Signal Source")
        .defaultValue("-200.0");

        param("Range Rate Gain", m_args.lambda1)
        .defaultValue("0.8")
        .units(Units::None)
        .description("Gain for desired convergence range rate.");

        param("Angular Gain", m_args.lambda2)
        .defaultValue("1.00")
        .units(Units::None)
        .description("Gain for desired convergence angle.");

        param("Maximum Yaw Rate", m_args.yaw_rate_lim)
        .defaultValue("9999")
        .units(Units::Percentage)
        .description("Maximum desired yaw rate.");

        param("Convergence Gain", m_args.g_conv_spd)
        .defaultValue("0.99")
        .units(Units::Percentage)
        .description("Desired convergence rate as a percentage of the speed.");

        param("Estimate Convergence", m_args.eps)
        .defaultValue("0.01")
        .units(Units::None)
        .description("Observer estimate convergence.");

        param("Observer Gain 1", m_args.g_obs_k1)
        .defaultValue("1.0")
        .units(Units::None)
        .description("Observer convergence gain 1.");

        param("Observer Gain 2", m_args.g_obs_k2)
        .defaultValue("10.0")
        .units(Units::None)
        .description("Observer convergence gain 2.");

        param("Convergence Gain", m_args.g_conv_spd)
        .defaultValue("0.99")
        .units(Units::Percentage)
        .description("Desired convergence rate as a percentage of the speed.");

        param("Bank Limit", m_args.bank_lim)
        .defaultValue("30.0")
        .units(Units::Degree)
        .description("Vehicle bank limit.");

        param("Source ID", m_args.src_id)
        .defaultValue("spot-01")
        .description("Signal source id name.");

        bind<IMC::RSSI>(this);
        bind<IMC::EstimatedState>(this);
        bind<IMC::IndicatedSpeed>(this);
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        // Vehicle maneuverability constraints
        if ( paramChanged( m_args.bank_lim ) )
          m_bank_lim = Angles::radians(m_args.bank_lim);

        if ( paramChanged( m_args.xb_estimate ) )
        {
          m_xb_estim = m_args.xb_estimate;
          m_yb_estim = m_args.yb_estimate;
        }

        if ( paramChanged( m_args.src_id ) )
          m_src_id = resolveSystemName( m_args.src_id );
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
      consume(const IMC::RSSI* msg)
      {
        // Adjust the target angle as a function of the RSSI signal variation

        // Determine if the signal is getting stronger or weaker
        double time_current = Clock::get();
        if ( msg->value < m_rssi_prev )
        {
          m_range_rate = 1;
          if ( time_current >= m_last_time_debug + 2.0 )
          {
            debug("Get Further");
            m_last_time_debug = time_current;
          }
        }
        else
        {
          m_range_rate = -1;
          if ( time_current >= m_last_time_debug + 2.0 )
          {
            debug("Get Closer");
            m_last_time_debug = time_current;
          }
        }
        m_rssi_prev = msg->value;

        // Update target position estimate
        Observer();

        // Adjust the vehicle direction to home-in on the signal source
        if ( m_speed > 0.0 )
        {
          double yaw_rate = Controller();
          // Bank command
          IMC::DesiredRoll cmd_roll;
          cmd_roll.value = Math::trimValue( std::atan( yaw_rate * m_speed / Math::c_gravity ),
              - m_bank_lim, m_bank_lim );
          dispatch(cmd_roll);
        }
      }

      void
      consume(const IMC::EstimatedState* msg)
      {
        // Save the vehicle estimated state

        m_es_valid = true;
        m_vehicle = *msg;
        m_psi = msg->psi;
        double global_lon = m_vehicle.lon;
        double global_lat = m_vehicle.lat;
        double global_height = m_vehicle.height;

        m_beacon_es.lat = msg->lat;
        m_beacon_es.lon = msg->lon;
        m_beacon_es.height = msg->height;

        DUNE::Coordinates::WGS84::displace(m_vehicle.x, m_vehicle.y, m_vehicle.z, &global_lon, &global_lat, &global_height);

        // Debug printouts
        double time_current = Clock::get();
        if (time_current >= m_last_time_spew + 1.0)
        {
          spew("--------------------------------------------------------------------------------------");
          spew("Current UAV position:x = %.10f, y = %.10f w.r.t longitude = %.10f, latitude = %.10f",
              m_vehicle.x, m_vehicle.y, m_vehicle.lon, m_vehicle.lat);
          spew("Current UAV Global position: longitude = %.10f, latitude = %.10f height = %.5f", global_lon, global_lat, global_height);
          m_last_time_spew = time_current;
        }
      }

      // Get the vehicle speed
      void
      consume(const IMC::IndicatedSpeed* msg)
      {
        m_speed = msg->value;
      }

      void
      Observer(void)
      {
        // Update of the target position estimate
        double alpha = m_xb_estim * cos(m_psi) + m_yb_estim * sin(m_psi);
        double range_rate_estimate = -alpha / sqrt(alpha * alpha + m_args.eps * m_args.eps); // * m_speed * m_speed);
        double range_rate_eps = m_range_rate - range_rate_estimate;
        double xb_dot = - m_speed * cos(m_psi) * (m_args.g_obs_k1 * m_range_rate + m_args.g_obs_k2 * range_rate_eps);
        double yb_dot = - m_speed * sin(m_psi) * (m_args.g_obs_k1 * m_range_rate + m_args.g_obs_k2 * range_rate_eps);
        m_xb_estim += xb_dot;
        m_yb_estim += yb_dot;

        // Debug printouts
        double time_current = Clock::get();
        if ( time_current >= m_last_time_trace + 1.2 )
        {
          trace( "Estimated beacon position: x = %.10f, y = %.10f", m_xb_estim, m_yb_estim );
          m_last_time_trace = time_current;
          if ( m_es_valid )
          {
            m_beacon_es.x = m_vehicle.x + m_xb_estim;
            m_beacon_es.y = m_vehicle.y + m_yb_estim;
            m_beacon_es.setSource( m_src_id );
            dispatch( m_beacon_es );
          }
        }
      }

      double
      Controller(void)
      {
        // Compute the desired turn rate to home-in on the target
        double r = std::sqrt( m_xb_estim * m_xb_estim + m_yb_estim * m_yb_estim );
        double theta = std::atan2( - m_yb_estim, - m_xb_estim );

        double r_dot = m_speed * std::cos(m_psi - theta);

        double r_des_dot = - m_args.g_conv_spd * m_speed;
        double r_des = (r_dot - r_des_dot) / m_args.lambda1 + r;
        double r_des_dbldot = 0;

        double a = m_psi - theta;

        double a_des = std::acos((- m_args.lambda1 * (r - r_des) + r_des_dot) / m_speed);

        if (a < 0)
          a_des = - a_des;

        double a_des_dot = ( - 1 / std::sqrt(1 - std::pow(((m_args.lambda1 * (r - r_des) - r_des_dot) / m_speed), 2))* (- m_args.lambda1 * (r_dot - r_des_dot) - r_des_dbldot) / m_speed);

        if (a < 0)
          a_des_dot = - a_des_dot;

        if (std::abs(a_des_dot) > m_args.yaw_rate_lim)
          a_des_dot = a_des_dot / std::abs( a_des_dot ) * m_args.yaw_rate_lim;

        return - m_args.lambda2 * (a - a_des) + m_speed / r * std::sin(a) + a_des_dot;
      }

      void
      task(void)
      {
        consumeMessages();
      }
    };
  }
}

DUNE_TASK
