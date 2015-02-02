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
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
// ofstream constructor.
#include <fstream>

namespace Identification
{
  namespace AUV
  {
    //! AUV Identification algorithm
    //! This algorithm runs offline
    //! with smo-replay script, and
    //! Identification task enabled.
    //!
    //! This algorithm performs Iden-
    //! tification for surge and roll
    //! motions.
    //! It should be provided a log
    //! with an acceleration ramp.
    //!
    //! @author Tiago Rodrigues
    using DUNE_NAMESPACES;

    //! Variables Index
    enum IdentificationMatricesSize
    {
      IMS_SURGE = 2,
      IMS_ROLL = 4
    };

    enum SurgeIdentificationIndexes
    {
      SII_LINEAR_DAMPING = 0,
      SII_QUADRATIC_DAMPING = 1
    };

    enum RollIdentificationIndexes
    {
      RII_LINEAR_DAMPING = 0,
      RII_QUADRATIC_DAMPING = 1,
      RII_FIN_COEFFICIENT = 2,
      RII_MOTOR_COEFFICIENT = 3
    };

    enum DegreesOfFreedom
    {
      DOF_SURGE = 0,
      DOF_SWAY = 1,
      DOF_HEAVE = 2,
      DOF_ROLL = 3,
      DOF_PITCH = 4,
      DOF_YAW = 5
    };

    struct Arguments
    {
      //! GPS variables
      double gps_absolute_treshold;
      double gps_average_treshold;

      //! Resolve Entity string
      std::string imu_entity_name;
      std::string ahrs_entity_name;
      std::string dvl_entity_name;

      //! Model structures
      Model::Dynamic::Parameters m_auv_chars;

      //! Parameters for Identification algorithm
      std::vector<float> surge_coeff;
      std::vector<float> roll_coeff;
      std::vector<float> surge_cov;
      std::vector<float> roll_cov;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      // Current log directory.
      Path m_dir;

      //! Depth
      double m_depth;

      //! Velocities variables
      double m_velocities[MS_ROWS];
      Math::Matrix m_vel;

      //! Rotation Matrix
      Math::Matrix m_rotation;

      //! Filter Variables
      Math::Matrix m_acc_filter;
      Math::Matrix m_vel_filter;
      double m_filter_delta;
      DUNE::Time::Delta m_delta_filter;

      //! Entity Variables
      bool m_flag_imu_active;
      bool m_flag_ahrs_active;
      int m_imu_entity_id;
      int m_ahrs_entity_id;

      //! Position Matrices
      Math::Matrix m_nu_dot;
      Math::Matrix m_nu;

      //! vehicle Model
      double m_thruster;
      double m_servo_pos[SI_TOTAL];

      //! Identification Matrices
      // Reference
      Math::Matrix m_y;
      // Surge Matrices
      Math::Matrix m_e_x;
      Math::Matrix m_dp_dt_x;
      Math::Matrix m_p_x;
      Math::Matrix m_dtheta_dt_x;
      Math::Matrix m_theta_x;
      Math::Matrix m_phi_x;
      DUNE::Math::MatrixIntegrator* m_cls_p_x_integrator;
      DUNE::Math::MatrixIntegrator* m_cls_theta_x_integrator;
      // Roll Matrices
      Math::Matrix m_e_k;
      Math::Matrix m_dp_dt_k;
      Math::Matrix m_p_k;
      Math::Matrix m_dtheta_dt_k;
      Math::Matrix m_theta_k;
      Math::Matrix m_phi_k;
      DUNE::Math::MatrixIntegrator* m_cls_p_k_integrator;
      DUNE::Math::MatrixIntegrator* m_cls_theta_k_integrator;

      //! Task initialize variable
      bool m_identification_ini;

      //! File stream variable
      std::ofstream outfile;

      Arguments m_args;

      //! Pointer to class with auv dynamic
      DUNE::Model::Dynamic* m_dynamics;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx),
        m_cls_p_x_integrator(NULL),
        m_cls_theta_x_integrator(NULL),
        m_cls_p_k_integrator(NULL),
        m_cls_theta_k_integrator(NULL),
        m_dynamics(NULL)
      {
        // Sensor Entities
        param("Entity Label IMU", m_args.imu_entity_name)
        .defaultValue("IMU")
        .description("Label of the IMU message");

        param("Entity Label AHRS", m_args.ahrs_entity_name)
        .defaultValue("AHRS")
        .description("Label of the AHRS message");

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

        // Identification Algorithm initial values
        param("Surge Coefficients", m_args.surge_coeff)
        .description("Surge coefficients initial value");

        param("Roll Coefficients", m_args.roll_coeff)
        .description("Roll coefficients initial value");

        param("Surge Covariance", m_args.surge_cov)
        .description("Surge covariance initial value");

        param("Roll Covariance", m_args.roll_cov)
        .description("Roll covariance initial value");

        // Depth
        m_depth = 0;

        // Velocities variables
        memset(m_velocities,0,sizeof(m_velocities));
        m_vel.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);

        // Rotation Matrix
        m_rotation.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);

        // Filter Variables
        m_acc_filter.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
        m_vel_filter.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
        m_filter_delta = 0;

        // Position Matrices
        m_nu_dot.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
        m_nu.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);

        // Vehicle Model
        m_thruster = 0;
        memset(m_servo_pos,0,sizeof(m_servo_pos));

        // Identification Matrices
        m_y.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
        // Surge
        m_e_x.resizeAndFill(MS_MIN_COLUMNS, MS_MIN_COLUMNS, 0.0);
        m_dp_dt_x.resizeAndFill(IMS_SURGE, IMS_SURGE, 0.0);
        m_p_x.resizeAndFill(IMS_SURGE, IMS_SURGE, 0);
        m_dtheta_dt_x.resizeAndFill(IMS_SURGE, MS_MIN_COLUMNS, 0.0);
        m_theta_x.resizeAndFill(IMS_SURGE, MS_MIN_COLUMNS, 0);
        m_phi_x.resizeAndFill(IMS_SURGE, MS_MIN_COLUMNS, 0.0);

        // Roll
        m_e_k.resizeAndFill(MS_MIN_COLUMNS, MS_MIN_COLUMNS, 0.0);
        m_dp_dt_k.resizeAndFill(IMS_ROLL, IMS_ROLL, 0.0);
        m_p_k.resizeAndFill(IMS_ROLL, IMS_ROLL, 0);
        m_dtheta_dt_k.resizeAndFill(IMS_ROLL, MS_MIN_COLUMNS, 0.0);
        m_theta_k.resizeAndFill(IMS_ROLL, MS_MIN_COLUMNS, 0.0);
        m_phi_k.resizeAndFill(IMS_ROLL, MS_MIN_COLUMNS, 0.0);

        m_identification_ini = false;

        // Register Consumers
        bind<IMC::EntityState>(this);
        bind<IMC::Depth>(this);
        bind<IMC::EulerAngles>(this);
        bind<IMC::GroundVelocity>(this);
        bind<IMC::AngularVelocity>(this);
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::ServoPosition>(this);
      }

      void
      onResourceInitialization(void)
      {
        m_cls_p_x_integrator = new DUNE::Math::MatrixIntegrator(IMS_SURGE, IMS_SURGE);
        m_cls_theta_x_integrator = new DUNE::Math::MatrixIntegrator(IMS_SURGE, IMS_SURGE);
        m_cls_p_k_integrator = new DUNE::Math::MatrixIntegrator(IMS_ROLL, IMS_ROLL);
        m_cls_theta_k_integrator = new DUNE::Math::MatrixIntegrator(IMS_ROLL, IMS_ROLL);
        m_dynamics = new DUNE::Model::Dynamic();
      }

      void
      onResourceRelease(void)
      {
        Memory::clear(m_cls_p_x_integrator);
        Memory::clear(m_cls_theta_x_integrator);
        Memory::clear(m_cls_p_k_integrator);
        Memory::clear(m_cls_theta_k_integrator);
        Memory::clear(m_dynamics);
        outfile.close();
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
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->getSourceEntity() == m_imu_entity_id)
        {
          if (msg->state == IMC::EntityState::ESTA_NORMAL)
            m_flag_imu_active = true;
          else
            m_flag_imu_active = false;
        }

        if (msg->getSourceEntity() == m_ahrs_entity_id)
        {
          if (msg->state == IMC::EntityState::ESTA_NORMAL)
            m_flag_ahrs_active = true;
          else
            m_flag_ahrs_active = false;
        }
      }

      void
      consume(const IMC::Depth* msg)
      {
        m_depth = msg->value;
      }

      void
      consume(const IMC::EulerAngles* msg)
      {
        m_nu(DOF_ROLL) = msg->phi;
        m_nu(DOF_PITCH) = msg->theta;
        m_nu(DOF_YAW) = msg->psi;
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
      initIdentification()
      {
        // Initialize surge matrices
        m_p_x(SII_LINEAR_DAMPING, SII_LINEAR_DAMPING) = m_args.surge_cov[SII_LINEAR_DAMPING];
        m_p_x(SII_QUADRATIC_DAMPING, SII_QUADRATIC_DAMPING) = m_args.surge_cov[SII_QUADRATIC_DAMPING];

        m_theta_x(SII_LINEAR_DAMPING) = m_args.surge_coeff[SII_LINEAR_DAMPING];
        m_theta_x(SII_QUADRATIC_DAMPING) = m_args.surge_coeff[SII_QUADRATIC_DAMPING];

        m_cls_p_x_integrator->setInitialCondition(m_p_x);
        m_cls_theta_x_integrator->setInitialCondition(m_theta_x);

        // Initialize roll matrices
        m_p_k(RII_LINEAR_DAMPING, RII_LINEAR_DAMPING) = m_args.roll_cov[RII_LINEAR_DAMPING];
        m_p_k(RII_QUADRATIC_DAMPING, RII_QUADRATIC_DAMPING) = m_args.roll_cov[RII_QUADRATIC_DAMPING];
        m_p_k(RII_FIN_COEFFICIENT, RII_FIN_COEFFICIENT) = m_args.roll_cov[RII_FIN_COEFFICIENT];
        m_p_k(RII_MOTOR_COEFFICIENT, RII_MOTOR_COEFFICIENT) = m_args.roll_cov[RII_MOTOR_COEFFICIENT];

        m_theta_k(RII_LINEAR_DAMPING) = m_args.roll_coeff[RII_LINEAR_DAMPING];
        m_theta_k(RII_QUADRATIC_DAMPING) = m_args.roll_coeff[RII_QUADRATIC_DAMPING];
        m_theta_k(RII_FIN_COEFFICIENT) = m_args.roll_coeff[RII_FIN_COEFFICIENT];
        m_theta_k(RII_MOTOR_COEFFICIENT) = m_args.roll_coeff[RII_MOTOR_COEFFICIENT];

        m_cls_p_k_integrator->setInitialCondition(m_p_k);
        m_cls_theta_k_integrator->setInitialCondition(m_theta_k);

        // Initialize file to output data
        m_dir = m_ctx.dir_log;
        Path out_path = m_dir / "identification.txt";
        outfile.open(out_path.c_str(), std::ofstream::app);
        outfile << "Date - " + DUNE::Time::Format::getTimeDate() + "\n";

        // Initialize AUV dynamic
        m_dynamics->load(m_args.m_auv_chars);

        m_identification_ini = true;
      }

      void
      task(void)
      {
        if (!m_identification_ini)
          initIdentification();

        m_filter_delta = m_delta_filter.getDelta();
        if (m_filter_delta <= 0.0)
          m_filter_delta = 0;

        // Velocity low pass filter
        m_acc_filter = m_dynamics->getAcceleration(m_velocities, m_vel_filter, m_filter_delta);
        m_vel_filter = m_vel_filter + m_acc_filter * m_filter_delta;

        m_y = m_dynamics->getIdentification(m_thruster, m_servo_pos, m_vel_filter, m_acc_filter, m_nu);

        // Continuous Least Squares
        // Longitudinal Linear Velocity Damping
        try{
          outfile << "theta x\n";

          m_phi_x(SII_LINEAR_DAMPING) = -m_vel_filter(DOF_SURGE);
          m_phi_x(SII_QUADRATIC_DAMPING) = -std::abs(m_vel_filter(DOF_SURGE)) * m_vel_filter(DOF_SURGE);

          m_e_x(0) = m_phi_x(SII_LINEAR_DAMPING) * m_theta_x(SII_LINEAR_DAMPING) +
                     m_phi_x(SII_QUADRATIC_DAMPING) * m_theta_x(SII_QUADRATIC_DAMPING) -
                     m_y(DOF_SURGE);

          m_dp_dt_x = -m_p_x * m_phi_x * transpose(m_phi_x) * m_p_x;

          m_p_x = m_cls_p_x_integrator->update(m_dp_dt_x);

          m_dtheta_dt_x = -m_p_x * m_phi_x * m_e_x;

          m_theta_x = m_cls_theta_x_integrator->update(m_dtheta_dt_x);

          outfile << m_theta_x;
        }
        catch(...){}

        // Roll Angular velocity Damping
        try{
          outfile << "theta k\n";

          m_phi_k(RII_LINEAR_DAMPING) = m_thruster * m_args.m_auv_chars.thruster_force;
          m_phi_k(RII_QUADRATIC_DAMPING) = (m_servo_pos[SI_FOUR] - m_servo_pos[SI_ONE] + m_servo_pos[SI_TWO] - m_servo_pos[SI_THREE]) * pow(m_vel_filter(DOF_SURGE), 2.0);
          m_phi_k(RII_FIN_COEFFICIENT) = -m_vel_filter(DOF_ROLL);
          m_phi_k(RII_MOTOR_COEFFICIENT) = -std::abs(m_vel_filter(DOF_ROLL)) * m_vel_filter(DOF_ROLL);

          m_e_k(0) = m_phi_k(0) * m_theta_k(RII_LINEAR_DAMPING) +
                     m_phi_k(1) * m_theta_k(RII_QUADRATIC_DAMPING) +
                     m_phi_k(2) * m_theta_k(RII_FIN_COEFFICIENT) +
                     m_phi_k(3) * m_theta_k(RII_MOTOR_COEFFICIENT) -
                     m_y(DOF_ROLL);

          m_dp_dt_k = -m_p_k * m_phi_k * transpose(m_phi_k) * m_p_k;

          m_p_k = m_cls_p_k_integrator->update(m_dp_dt_k);

          m_dtheta_dt_k = -m_p_k * m_phi_k * m_e_k;

          m_theta_k = m_cls_theta_k_integrator->update(m_dtheta_dt_k);

          outfile << m_theta_k;
        }
        catch(...){}
      }
    };
  }
}

DUNE_TASK
