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
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Aux.hpp"

namespace Navigation
{
  namespace AUV
  {
    namespace SMO
    {
      using DUNE_NAMESPACES;

      //! Constant velocity for rpm to velocity transformation
      static const float c_rpm_to_vel_velocity = 1.8f;
      //! Constant rpm for rpm to velocity transformation
      static const float c_rpm_to_vel_rpm = 1500.0f;

      enum GPSVariables
      {
        GPSV_LAT = 0,
        GPSV_LON = 1,
        GPSV_HEIGHT = 2
      };

      struct Arguments
      {
        //! GPS variables
        double gps_absolute_treshold;
        double gps_average_treshold;

        //! Timeout variables
        double timeout_altitude;
        double timeout_dvl;
        double timeout_imu;
        double timeout_ahrs;

        //! Resolve Entity string
        std::string imu_entity_name;
        std::string ahrs_entity_name;
        std::string dvl_entity_name;
        std::string altitude_entity_name;

        //! Sliding Mode Observer structure
        DUNE::Navigation::SlidingModeObserver::Parameters m_sliding_parameters;

        //! AUV Model structure
        Model::Dynamic::Parameters m_auv_chars;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        //! GPS variables
        double m_gps_initial_point[VI_GPS_DATA];
        double m_gps_fix[VI_GPS_DATA];
        bool m_flag_initial_point;
        bool m_flag_valid_pos;
        double m_depth;
        double m_range;
        double m_bearing;
        double m_orientation_delta;
        double m_pos_from_dvl_delta;
        MovingAverage<double>* m_avg_hacc;
        double m_hacc_average;
        DUNE::Time::Delta m_delta_orientation;
        DUNE::Time::Delta m_delta_pos_from_dvl;

        //! Orientation variables
        double m_euler_angles[VI_EULER_ANGLE];
        bool m_flag_initial_orientation;

        //! Velocities variables
        double m_velocities[MS_ROWS];
        Math::Matrix m_vel;

        //! Rotation Matrix
        Math::Matrix m_rotation_matrix;
        Math::Matrix m_rotation_matrix_diff;
        DUNE::Math::MatrixDerivative* m_matrix_derivative;

        //! Entity Variables
        bool m_flag_imu_active;
        bool m_flag_ahrs_active;
        bool m_flag_dvl_active;
        bool m_flag_altitude_active;
        int m_imu_entity_id;
        int m_ahrs_entity_id;
        int m_dvl_entity_id;
        int m_altitude_entity_id;

        //! Task management variable
        bool m_task_management;

        //! Position Matrices
        Math::Matrix m_nu_dot;
        Math::Matrix m_nu;

        //! Sliding Mode Observer
        Math::Matrix m_nu_error;
        Math::Matrix m_nu_est;
        Math::Matrix m_nu_dot_est;
        Math::Matrix m_nu_dot_dot_est;
        Math::Matrix m_vel_est;
        Math::Matrix m_acc_est;
        bool m_init_nu_est;

        //! vehicle Model
        Math::Matrix m_auv_dynamic_model;
        double m_thruster;
        double m_servo_pos[SI_TOTAL];

        //! Vehicle Model coefficients
        bool m_observer_init;

        //! Covariance Variables
        Math::Matrix m_cov_nu;
        Math::Matrix m_cov_vel;
        Math::Matrix m_vel_cov;
        int m_num_amostras;
        float m_cov_multiplier;

        //! RPM variables
        double m_rpms;

        //! Moving average for altitude vector.
        MovingAverage<double>* m_avg_alt;
        double m_altitude;

        //! Timers variables initializer
        bool m_timers_init;
        //! Time without imu readings deadline.
        Time::Counter<double> m_imu_timeout;
        //! Time without ahrs readings deadline.
        Time::Counter<double> m_ahrs_timeout;
        //! Time without m_altitude readings deadline.
        Time::Counter<double> m_altitude_timeout;
        //! Time without dvl readings deadline.
        Time::Counter<double> m_dvl_timeout;

        //! Integrators
        DUNE::Math::MatrixIntegrator* m_vel_est_integrator;
        DUNE::Math::MatrixIntegrator* m_nu_est_integrator;

        //! Send Estimated State message to bus
        IMC::EstimatedState m_est;
        //! Send Navigation Uncertainty message to bus
        IMC::NavigationUncertainty m_uncertainty;

        //! Struct arguments
        Arguments m_args;

        //! Pointer to class with auv dynamic
        DUNE::Model::Dynamic* m_dynamics;
        //! Pointer to class with observer algorithm
        DUNE::Navigation::SlidingModeObserver* m_smo;

        Task(const std::string& name, Tasks::Context& ctx):
          Periodic(name, ctx),
          m_avg_hacc(NULL),
          m_matrix_derivative(NULL),
          m_avg_alt(NULL),
          m_vel_est_integrator(NULL),
          m_nu_est_integrator(NULL),
          m_dynamics(NULL),
          m_smo(NULL)
        {
          // GPS variables
          param("GPS absolute treshold", m_args.gps_absolute_treshold)
          .defaultValue("10")
          .description("GPSfix absolute hacc treshold");

          param("GPS average treshold", m_args.gps_average_treshold)
          .defaultValue("4")
          .description("GPSfix average hacc treshold");

          // Sliding Mode Observer Boundary Layers
          param("Velocity Boundary Layer", m_args.m_sliding_parameters.second_bound)
          .defaultValue("0.01")
          .description("Boundary Layer Size");

          param("Position Boundary Layer", m_args.m_sliding_parameters.first_bound)
          .defaultValue("0.1")
          .description("Boundary Layer Size");

          // Sliding Mode Observer Entities
          param("Entity Label IMU", m_args.imu_entity_name)
          .defaultValue("IMU")
          .description("Label of the IMU message");

          param("Entity Label AHRS", m_args.ahrs_entity_name)
          .defaultValue("AHRS")
          .description("Label of the AHRS message");

          param("Entity Label DVL", m_args.dvl_entity_name)
          .defaultValue("DVL")
          .description("Label of the DVL message");

          param("Entity Label Altitude", m_args.altitude_entity_name)
          .defaultValue("Altimeter")
          .description("Label of the m_altitude message");

          // Vehicle physical properties
          param("Vehicle Mass", m_args.m_auv_chars.mass)
          .defaultValue("18")
          .description("Vehicle Mass");

          param("Vehicle Half Lenght", m_args.m_auv_chars.a)
          .defaultValue("0.54")
          .description("Vehicle lenght");

          param("Vehicle Width", m_args.m_auv_chars.b)
          .defaultValue("0.075")
          .description("Vehicle height");

          param("Vehicle Height", m_args.m_auv_chars.c)
          .defaultValue("0.075")
          .description("Vehicle width");

          param("Vehicle Volume", m_args.m_auv_chars.volume)
          .defaultValue("0.0181")
          .description("Vehicle Volume");

          param("Vehicle zG", m_args.m_auv_chars.zG)
          .defaultValue("0.01")
          .description("Vehicle CG");

          param("Vehicle Lenght", m_args.m_auv_chars.l)
          .defaultValue("1.08")
          .description("Vehicle CG");

          param("Vehicle Diameter", m_args.m_auv_chars.d)
          .defaultValue("0.15")
          .description("Vehicle CG");

          param("Density", m_args.m_auv_chars.density)
          .defaultValue("1030")
          .description("Vehicle CG");

          param("Sfin", m_args.m_auv_chars.sfin)
          .defaultValue("0.0064")
          .description("Vehicle CG");

          param("Thruster Force", m_args.m_auv_chars.thruster_force)
          .defaultValue("26.5")
          .description("Vehicle thruster force in Newtons");

          // Damping Matrix terms
          param("Damping terms", m_args.m_auv_chars.damping)
          .description("Matrix damping terms");

          // Sliding Mode Observer Gains
          param("k1 gains", m_args.m_sliding_parameters.k1)
          .description("Sliding Mode Observer k1 gain");

          param("k2 gains", m_args.m_sliding_parameters.k2)
          .description("Sliding Mode Observer k2 gain");

          param("alfa1 gains", m_args.m_sliding_parameters.alfa1)
          .description("Sliding Mode Observer alfa1 gain");

          param("alfa2 gains", m_args.m_sliding_parameters.alfa2)
          .description("Sliding Mode Observer alfa2 gain");

          // Timeout Variables
          param("Timeout Altitude", m_args.timeout_altitude)
          .defaultValue("3")
          .description("m_altitude timeout definition");

          param("Timeout DVL", m_args.timeout_dvl)
          .defaultValue("3")
          .description("DVL timeout definition");

          param("Timeout IMU", m_args.timeout_imu)
          .defaultValue("3")
          .description("IMU timeout definition");

          param("Timeout AHRS", m_args.timeout_ahrs)
          .defaultValue("3")
          .description("AHRS timeout definition");

          // GPS variables
          memset(m_gps_initial_point, 0, sizeof(m_gps_initial_point));
          memset(m_gps_fix, 0, sizeof(m_gps_fix));
          m_flag_initial_point = false;
          m_flag_valid_pos = false;
          m_depth = 0;
          m_range = 0;
          m_bearing = 0;
          m_orientation_delta = 0;
          m_hacc_average = 0;

          // Orientation variables
          memset(m_euler_angles, 0, sizeof(m_euler_angles));
          m_flag_initial_orientation = false;

          // Velocities variables
          memset(m_velocities, 0, sizeof(m_velocities));
          m_vel.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);

          // Rotation Matrix
          m_rotation_matrix.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);
          m_rotation_matrix_diff.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);

          // Entity Variables
          m_flag_imu_active = false;
          m_flag_ahrs_active = false;
          m_flag_dvl_active = false;
          m_flag_altitude_active = false;
          m_imu_entity_id = 0;
          m_ahrs_entity_id = 0;
          m_dvl_entity_id = 0;
          m_altitude_entity_id = 0;

          // Task Management Variable
          m_task_management = false;

          // Position Matrices
          m_nu_dot.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
          m_nu.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);

          // Sliding Mode Observer
          m_nu_error.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
          m_nu_est.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
          m_nu_dot_est.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
          m_nu_dot_dot_est.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
          m_vel_est.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
          m_acc_est.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
          m_init_nu_est = false;

          // Vehicle Model
          m_auv_dynamic_model.resizeAndFill(MS_ROWS, 6, 0.0);
          m_thruster = 0;
          memset(m_servo_pos, 0, sizeof(m_servo_pos));

          // Vehicle Model coefficients
          m_observer_init = false;

          // Covariance Variables
          m_cov_nu.resizeAndFill(MS_ROWS, VI_COV_COLUMNS, 0.0);
          m_cov_vel.resizeAndFill(MS_ROWS, VI_COV_COLUMNS, 0.0);
          m_vel_cov.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
          m_num_amostras = 0;
          m_cov_multiplier = 0;

          // RPM variables
          m_rpms = 0;

          // m_altitude variables
          m_altitude = 0;

          // Timers variables
          m_timers_init = false;

          //Register Consumers
          bind<IMC::EntityState>(this);
          bind<IMC::GpsFix>(this);
          bind<IMC::Depth>(this);
          bind<IMC::EulerAngles>(this);
          bind<IMC::GroundVelocity>(this);
          bind<IMC::AngularVelocity>(this);
          bind<IMC::SetThrusterActuation>(this);
          bind<IMC::ServoPosition>(this);
          bind<IMC::Rpm>(this);
          bind<IMC::Distance>(this);
        }

        void
        onResourceInitialization(void)
        {
          m_avg_hacc = new MovingAverage<double>(VI_AVG_WINDOW);
          m_matrix_derivative = new MatrixDerivative(MS_ROWS, MS_MAX_COLUMNS);
          m_avg_alt = new MovingAverage<double>(VI_AVG_WINDOW);
          m_vel_est_integrator = new DUNE::Math::MatrixIntegrator(MS_ROWS, MS_MIN_COLUMNS);
          m_nu_est_integrator = new DUNE::Math::MatrixIntegrator(MS_ROWS, MS_MIN_COLUMNS);
          m_dynamics = new DUNE::Model::Dynamic();
          m_smo = new DUNE::Navigation::SlidingModeObserver();
        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_avg_alt);
          Memory::clear(m_matrix_derivative);
          Memory::clear(m_avg_hacc);
          Memory::clear(m_vel_est_integrator);
          Memory::clear(m_nu_est_integrator);
          Memory::clear(m_dynamics);
          Memory::clear(m_smo);
        }

        void
        onEntityResolution(void)
        {
          try
          {
            m_imu_entity_id = resolveEntity(m_args.imu_entity_name);
          }
          catch (...)
          {
            m_imu_entity_id = -1;
            m_flag_imu_active = false;
          }

          try
          {
            m_ahrs_entity_id = resolveEntity(m_args.ahrs_entity_name);
          }
          catch (...)
          {
            m_ahrs_entity_id = -1;
            m_flag_ahrs_active = false;
          }

          try
          {
            m_dvl_entity_id = resolveEntity(m_args.dvl_entity_name);
          }
          catch (...)
          {
            m_dvl_entity_id = -1;
            m_flag_dvl_active = false;
          }

          try
          {
            m_altitude_entity_id = resolveEntity(m_args.altitude_entity_name);
          }
          catch (...)
          {
            m_altitude_entity_id = -1;
            m_flag_altitude_active = false;
          }
        }

        void
        consume(const IMC::EntityState* msg)
        {
          if (msg->getSourceEntity() == m_imu_entity_id)
            m_flag_imu_active = (msg->state == IMC::EntityState::ESTA_NORMAL &&
                                 m_imu_timeout.overflow() == 0);

          if (msg->getSourceEntity() == m_ahrs_entity_id)
            m_flag_ahrs_active = (msg->state == IMC::EntityState::ESTA_NORMAL &&
                                  m_ahrs_timeout.overflow() == 0);

          if (msg->getSourceEntity() == m_dvl_entity_id)
          {
            m_flag_dvl_active = (msg->state == IMC::EntityState::ESTA_NORMAL &&
                                 m_dvl_timeout.overflow() == 0);

            m_flag_altitude_active =  (msg->state == IMC::EntityState::ESTA_NORMAL &&
                                       m_altitude_timeout.overflow() == 0);
          }
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          if (msg->validity & IMC::GpsFix::GFV_VALID_POS)
          {
            m_avg_hacc->update(msg->hacc);
            m_hacc_average = m_avg_hacc->mean();

            if (std::abs(m_hacc_average - msg->hacc) < m_args.gps_average_treshold &&
                msg->hacc < m_args.gps_absolute_treshold &&
                std::abs(msg->lat) < DUNE::Math::c_pi &&
                std::abs(msg->lon) < DUNE::Math::c_half_pi)
            {
              m_gps_fix[GPSV_LAT] = msg->lat;
              m_gps_fix[GPSV_LON] = msg->lon;
              m_gps_fix[GPSV_HEIGHT] = msg->height;
              m_flag_valid_pos = true;

              if (!m_flag_initial_point)
              {
                m_gps_initial_point[GPSV_LAT] = msg->lat;
                m_gps_initial_point[GPSV_LON] = msg->lon;
                m_gps_initial_point[GPSV_HEIGHT] = msg->height;
                m_flag_initial_point = true;
              }
            }

            if (std::abs(m_hacc_average - msg->hacc) > m_args.gps_average_treshold ||
                msg->hacc > m_args.gps_absolute_treshold ||
                std::abs(msg->lat) > DUNE::Math::c_pi ||
                std::abs(msg->lon) > DUNE::Math::c_half_pi)
              m_flag_valid_pos = false;
          }

          if (!(msg->validity & IMC::GpsFix::GFV_VALID_POS))
            m_flag_valid_pos = false;
        }

        void
        consume(const IMC::Depth* msg)
        {
          m_depth = msg->value;
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          m_euler_angles[0] = msg->phi;
          m_euler_angles[1] = msg->theta;
          m_euler_angles[2] = msg->psi;

          if (!m_flag_initial_orientation)
          {
            m_flag_initial_orientation = true;
            m_nu(DOF_ROLL) = msg->phi;
            m_nu(DOF_PITCH) = msg->theta;
            m_nu(DOF_YAW) = msg->psi;
          }
        }

        void
        consume(const IMC::GroundVelocity* msg)
        {
          if (msg->validity & IMC::GroundVelocity::VAL_VEL_X)
            m_velocities[DOF_SURGE] = msg->x;

          if (msg->validity & IMC::GroundVelocity::VAL_VEL_Y)
            m_velocities[DOF_SWAY] = msg->y;

          if (msg->validity & IMC::GroundVelocity::VAL_VEL_Z)
            m_velocities[DOF_HEAVE] = msg->z;

          if ((msg->validity & IMC::GroundVelocity::VAL_VEL_X) ||
              (msg->validity & IMC::GroundVelocity::VAL_VEL_Y) ||
              (msg->validity & IMC::GroundVelocity::VAL_VEL_Z))
            m_dvl_timeout.reset();
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (m_flag_imu_active && msg->getSourceEntity() == m_imu_entity_id)
          {
            m_velocities[DOF_ROLL] = msg->x;
            m_velocities[DOF_PITCH] = msg->y;
            m_velocities[DOF_YAW] = msg->z;
          }

          if (m_flag_ahrs_active && msg->getSourceEntity() == m_ahrs_entity_id && !m_flag_imu_active)
          {
            m_velocities[DOF_ROLL] = msg->x;
            m_velocities[DOF_PITCH] = msg->y;
            m_velocities[DOF_YAW] = msg->z;
          }
          if (msg->getSourceEntity() == m_imu_entity_id)
            m_imu_timeout.reset();
          if (msg->getSourceEntity() == m_ahrs_entity_id)
            m_ahrs_timeout.reset();
        }

        void
        consume(const IMC::SetThrusterActuation* msg)
        {
          m_thruster = msg->value;
        }

        void
        consume(const IMC::ServoPosition* msg)
        {
          m_servo_pos[msg->id] = msg->value;
        }

        void
        consume(const IMC::Rpm* msg)
        {
          if(!m_flag_dvl_active)
          {
            m_rpms = msg->value;
            m_velocities[DOF_SURGE] = m_rpms * c_rpm_to_vel_velocity / c_rpm_to_vel_rpm;
          }
        }

        void
        consume(const IMC::Distance* msg)
        {
          if (m_flag_altitude_active && msg->getSourceEntity() == m_altitude_entity_id && msg->validity == IMC::Distance::DV_VALID)
          {
            m_avg_alt->update(msg->value);
            m_altitude = m_avg_alt->mean();
            m_altitude_timeout.reset();
          }

          if (!m_flag_altitude_active)
            m_altitude = -1; // Default value for invalid m_altitude measurement
        }

        void
        initObserver(void)
        {
          m_smo->load(m_args.m_sliding_parameters);
          m_dynamics->load(m_args.m_auv_chars);
          m_observer_init = true;
        }

        void
        posFromGps(void)
        {
          Coordinates::WGS84::getNEBearingAndRange(m_gps_initial_point[GPSV_LAT], m_gps_initial_point[GPSV_LON],
                                                   m_gps_fix[GPSV_LAT], m_gps_fix[GPSV_LON], &m_bearing, &m_range);

          m_nu = Aux::posFromBearingAndRange(m_nu, m_range, m_bearing, m_depth);

          if (m_flag_imu_active)
          {
            if (m_orientation_delta < 0)
              m_orientation_delta = 0;

            m_nu_dot = m_rotation_matrix * m_vel;
            for (int k = DOF_ROLL; k <= DOF_YAW; k++)
              m_nu(k) = m_nu(k) + m_nu_dot(k) * m_orientation_delta;

          }

          if (!m_flag_imu_active)
            m_nu = Aux::orientationFromEulerAngles(m_nu, m_euler_angles);

          if (!m_init_nu_est)
          {
            m_nu = Aux::posFromBearingAndRange(m_nu, m_range, m_bearing, m_depth);
            m_nu = Aux::orientationFromEulerAngles(m_nu, m_euler_angles);
            m_init_nu_est = true;
          }
        }

        void
        posFromDvl(void)
        {
          if (m_pos_from_dvl_delta < 0)
            m_pos_from_dvl_delta = 0;
          m_nu_dot = m_rotation_matrix * m_vel;
          m_nu = m_nu + m_nu_dot * m_pos_from_dvl_delta;
          // Depth Sensor is always available
          m_nu(DOF_HEAVE) = m_depth;

          if (!m_flag_imu_active)
            m_nu = Aux::orientationFromEulerAngles(m_nu, m_euler_angles);
        }

        void
        fillAndDispatchEstimatedState(void)
        {
          m_est.x = m_nu_est(DOF_SURGE);
          m_est.y = m_nu_est(DOF_SWAY);
          m_est.z = m_nu_est(DOF_HEAVE);
          m_est.phi = m_nu_est(DOF_ROLL);
          m_est.theta = m_nu_est(DOF_PITCH);
          m_est.psi = m_nu_est(DOF_YAW);
          m_est.u = m_vel_est(DOF_SURGE);
          m_est.v = m_vel_est(DOF_SWAY);
          m_est.w = m_vel_est(DOF_HEAVE);
          m_est.p = m_vel_est(DOF_ROLL);
          m_est.q = m_vel_est(DOF_PITCH);
          m_est.r = m_vel_est(DOF_PITCH);
          Coordinates::BodyFixedFrame::toInertialFrame(m_est.phi, m_est.theta, m_est.psi,
                                                       m_est.u,   m_est.v,     m_est.w,
                                                       &m_est.vx, &m_est.vy,   &m_est.vz);
          m_est.lat = m_gps_initial_point[GPSV_LAT];
          m_est.lon = m_gps_initial_point[GPSV_LON];
          m_est.height = m_gps_initial_point[GPSV_HEIGHT];
          m_est.depth = m_nu_est(DOF_HEAVE);
          m_est.alt = m_altitude;
          dispatch(m_est);
        }

        void
        fillAndDispatchNavigationUncertainty(void)
        {
          // Covariance between measure and estimated
          m_num_amostras++;
          m_cov_nu = Aux::computeCov(m_cov_nu, m_nu_est, m_nu, m_num_amostras);

          m_vel_cov = m_vel;
          m_cov_vel = Aux::computeCov(m_cov_vel, m_vel_est, m_vel_cov, m_num_amostras);

          // If no GPS and/or no DVL is available, Cov increases more for X and Y
          if (m_flag_valid_pos)
          {
            m_cov_multiplier = 0;
            m_cov_nu.fill(0);
            m_cov_vel.fill(0);
            m_num_amostras = 0;
          }

          if (!m_flag_valid_pos && m_flag_dvl_active)
            m_cov_multiplier = 0.01;

          if (!m_flag_valid_pos && !m_flag_dvl_active)
            m_cov_multiplier = 0.1;

          m_uncertainty.x = m_cov_nu(0, 2) * m_cov_multiplier;
          m_uncertainty.y = m_cov_nu(1, 2) * m_cov_multiplier;
          m_uncertainty.z = m_cov_nu(2, 2) * m_cov_multiplier;
          m_uncertainty.phi = m_cov_nu(3, 2);
          m_uncertainty.theta = m_cov_nu(4, 2);
          m_uncertainty.psi = m_cov_nu(5, 2);
          m_uncertainty.u = m_cov_vel(0, 2);
          m_uncertainty.v = m_cov_vel(1, 2);
          m_uncertainty.w = m_cov_vel(2, 2);
          m_uncertainty.p = m_cov_vel(3, 2);
          m_uncertainty.q = m_cov_vel(4, 2);
          m_uncertainty.r = m_cov_vel(5, 2);
          dispatch(m_uncertainty);
        }

        // Task Management
        void
        stateManagement(void)
        {
          if (!m_flag_initial_point || !m_flag_initial_orientation)
          {
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
            m_task_management = false;
          }

          if (m_flag_initial_point && m_flag_initial_orientation)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            m_task_management = true;
          }
        }

        void
        task(void)
        {
          // Entity State Management
          stateManagement();

          if (m_task_management)
          {
            // Timers Init
            if (!m_timers_init)
            {
              m_altitude_timeout.setTop(m_args.timeout_altitude);
              m_dvl_timeout.setTop(m_args.timeout_dvl);
              m_imu_timeout.setTop(m_args.timeout_imu);
              m_ahrs_timeout.setTop(m_args.timeout_ahrs);
              m_timers_init = true;
            }

            // Sensors Fault Detection
            if (m_altitude_timeout.overflow() == 1)
              m_altitude = -1;

            // Rotation Matrix and Velocities
            m_rotation_matrix = m_dynamics->computeRotationMatrix(m_euler_angles);
            m_vel = Matrix(m_velocities, 6, 1);

            // Position from Gps
            m_orientation_delta = m_delta_orientation.getDelta();
            if (m_flag_valid_pos)
              posFromGps();

            // Position from Dvl
            m_pos_from_dvl_delta = m_delta_pos_from_dvl.getDelta();
            if (!m_flag_valid_pos)
              posFromDvl();

            // Normalize Vehicle Orientation
            m_nu_est = Aux::normalizeOrientation(m_nu_est);

            // Sliding Mode Observer Error
            if (m_init_nu_est)
            {
              m_nu_est = m_smo->updateError(m_nu_est, m_nu);

              // Calculate Vehicle Model Coefficients and M Matrix one time
              if (!m_observer_init)
                initObserver();

              m_rotation_matrix_diff = m_matrix_derivative->update(m_rotation_matrix);
              // SMO
              // Second Order Equation
              m_auv_dynamic_model =  m_dynamics->getInEarthFrame(m_rotation_matrix, m_rotation_matrix_diff, m_vel_est, m_nu_est, m_thruster, m_servo_pos, m_vel);
              m_nu_dot_dot_est = m_smo->updateSecondOrderEquation(m_auv_dynamic_model);

              m_acc_est =  inverse(m_rotation_matrix) * (m_nu_dot_dot_est - m_rotation_matrix_diff * m_vel_est);
              m_vel_est = m_vel_est_integrator->update(m_acc_est);

              // First Order Equation
              m_nu_dot_est = m_smo->updateFirstOrderEquation(m_rotation_matrix * m_vel_est);
              m_nu_est = m_nu_est_integrator->update(m_nu_dot_est);
              m_nu_est = Aux::normalizePosition(m_nu_est);
              m_nu_est = Aux::normalizeOrientation(m_nu_est);
            }
            fillAndDispatchEstimatedState();
            fillAndDispatchNavigationUncertainty();
          }
        }
      };
    }
  }
}

DUNE_TASK
