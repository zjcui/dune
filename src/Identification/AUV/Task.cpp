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

    struct Arguments
    {
      // Resolve Entity string
      std::string imu_entity_name;
      std::string ahrs_entity_name;

      // AUV caracteristic
      double mass;
      double a;
      double b;
      double c;
      double volume;
      double zG;
      double l;
      double d;
      double density;
      double sfin;

      // Parameters for Identification algorithm
      double surge_ldi;
      double surge_qdi;
      double surge_cov1;
      double surge_cov2;
      double roll_mcoef;
      double roll_ffcoef;
      double roll_ldi;
      double roll_qdi;
      double roll_cov1;
      double roll_cov2;
      double roll_cov3;
      double roll_cov4;
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      // GPS variables
      double m_gps_initial_point[3];
      double m_gps_fix[3];
      double m_gps_treshold;
      double m_flag_initial_point;
      double m_flag_valid_pos;
      double m_depth;
      double m_range;
      double m_bearing;
      double m_orientation_delta;
      DUNE::Time::Delta m_delta_orientation;

      // Velocities variables
      double m_velocities[6];
      double m_velocities_ant[6];
      Math::Matrix m_vel;
      double m_angular_vel[3];

      // Rotation Matrix
      Math::Matrix m_rotation;

      // Filter Variables
      Math::Matrix m_acc_filter;
      Math::Matrix m_vel_filter;
      double m_filter_delta;
      DUNE::Time::Delta m_delta_filter;

      // Entity Variables
      int m_flag_imu_active;
      int m_flag_ahrs_active;
      int m_imu_entity_id;
      int m_ahrs_entity_id;

      // Position Matrices
      Math::Matrix m_nu_dot;
      Math::Matrix m_nu;

      // vehicle Model
      Math::Matrix m_inertia_added_mass;
      Math::Matrix m_coriolis;
      Math::Matrix m_damping;
      Math::Matrix m_restoring;
      Math::Matrix m_lift;
      Math::Matrix m_tau;
      double m_thruster;
      double m_servo_pos[4];

      // Vehicle Model coefficients
      double m_model_coeff[26];
      int m_model_coef_init;

      // Identification Matrices
      Math::Matrix m_y;
      Math::Matrix m_e_x;
      Math::Matrix m_dp_dt_x;
      Math::Matrix m_p_x;
      Math::Matrix m_dtheta_dt_x;
      Math::Matrix m_theta_x;
      Math::Matrix m_phi_x;
      double m_cls_p_delta_x;
      double m_cls_theta_delta_x;
      DUNE::Time::Delta m_delta_cls_p_x;
      DUNE::Time::Delta m_delta_cls_theta_x;

      Math::Matrix m_e_k;
      Math::Matrix m_dp_dt_k;
      Math::Matrix m_p_k;
      Math::Matrix m_dtheta_dt_k;
      Math::Matrix m_theta_k;
      Math::Matrix m_phi_k;
      double m_cls_p_delta_k;
      double m_cls_theta_delta_k;
      DUNE::Time::Delta m_delta_cls_p_k;
      DUNE::Time::Delta m_delta_cls_theta_k;

      bool m_matrices_ini;

      Arguments m_args;

      DUNE::Model::Dynamic m_dynamics;

      Task(const std::string& name, Tasks::Context& ctx):
        Periodic(name, ctx)
      {

        // Sensor Entities
        param("Entity Label IMU", m_args.imu_entity_name)
        .defaultValue("IMU")
        .description("Label of the IMU message");

        param("Entity Label AHRS", m_args.ahrs_entity_name)
        .defaultValue("AHRS")
        .description("Label of the AHRS message");

        // Vehicle physical properties
        param("Mass", m_args.mass)
        .defaultValue("18")
        .description("Vehicle Mass");

        param("a", m_args.a)
        .defaultValue("0.54")
        .description("Vehicle lenght");

        param("b", m_args.b)
        .defaultValue("0.075")
        .description("Vehicle height");

        param("c", m_args.c)
        .defaultValue("0.075")
        .description("Vehicle width");

        param("Volume", m_args.volume)
        .defaultValue("0.0181")
        .description("Vehicle Volume");

        param("zG", m_args.zG)
        .defaultValue("0.01")
        .description("Vehicle CG");

        param("l", m_args.l)
        .defaultValue("1.08")
        .description("Vehicle CG");

        param("d", m_args.d)
        .defaultValue("0.15")
        .description("Vehicle CG");

        param("Density", m_args.density)
        .defaultValue("1030")
        .description("Vehicle CG");

        param("Sfin", m_args.sfin)
        .defaultValue("0.0064")
        .description("Vehicle CG");

        // Identification Algorithm initial values
        param("Surge ld ini", m_args.surge_ldi)
        .defaultValue("3.52")
        .description("Surge linear damping initial value");

        param("Surge qd ini", m_args.surge_qdi)
        .defaultValue("1.76")
        .description("Surge quadratic damping initial value");

        param("Surge Cov one", m_args.surge_cov1)
        .defaultValue("5")
        .description("Surge covariance initial value");

        param("Surge Cov two", m_args.surge_cov2)
        .defaultValue("5")
        .description("Surge covariance initial value");

        param("Roll mcoef ini", m_args.roll_mcoef)
        .defaultValue("0.05")
        .description("Roll motor coefficient");

        param("Roll ffcoef ini", m_args.roll_ffcoef)
        .defaultValue("0.25")
        .description("Roll fins coefficient");

        param("Roll ld ini", m_args.roll_ldi)
        .defaultValue("0.7")
        .description("Roll linear damping initial value");

        param("Roll qd ini", m_args.roll_qdi)
        .defaultValue("0.81")
        .description("Roll quadratic damping initia value");

        param("Roll Cov one", m_args.roll_cov1)
        .defaultValue("0.5")
        .description("Roll covariance initial value");

        param("Roll Cov two", m_args.roll_cov2)
        .defaultValue("1")
        .description("Roll covariance initial value");

        param("Roll Cov three", m_args.roll_cov3)
        .defaultValue("0.7")
        .description("Roll covariance initial value");

        param("Roll Cov four", m_args.roll_cov4)
        .defaultValue("0.5")
        .description("Roll covariance initial value");

        // GPS variables
        memset (m_gps_initial_point, 0, sizeof(m_gps_initial_point));
        memset (m_gps_fix, 0, sizeof(m_gps_fix));
        m_gps_treshold = 0;
        m_flag_initial_point = 0;
        m_flag_valid_pos = 0;
        m_depth = 0;
        m_range = 0;
        m_bearing = 0;
        m_orientation_delta = 0;

        // Velocities variables
        memset(m_velocities,0,sizeof(m_velocities));
        memset(m_velocities_ant,0,sizeof(m_velocities));
        m_vel.resizeAndFill(6,1,0.0);
        memset(m_angular_vel,0,sizeof(m_angular_vel));

        // Rotation Matrix
        m_rotation.resizeAndFill(6,6,0.0);

        // Filter Variables
        m_acc_filter.resizeAndFill(6,1,0.0);
        m_vel_filter.resizeAndFill(6,1,0.0);
        m_filter_delta = 0;

        // Position Matrices
        m_nu_dot.resizeAndFill(6,1,0.0);
        m_nu.resizeAndFill(6,1,0.0);

        // Vehicle Model
        m_inertia_added_mass.resizeAndFill(6,6,0.0);
        m_coriolis.resizeAndFill(6,6,0.0);
        m_damping.resizeAndFill(6,6,0.0);
        m_restoring.resizeAndFill(6,1,0.0);
        m_lift.resizeAndFill(6,6,0.0);
        m_tau.resizeAndFill(6,1,0.0);
        m_thruster = 0;
        memset(m_servo_pos,0,sizeof(m_servo_pos));

        // Vehicle Model coefficients*/
        memset(m_model_coeff,0,sizeof(m_model_coeff));
        m_model_coef_init = 0;

        // Identification Matrices*/
        // Surge
        m_y.resizeAndFill(6,1,0.0);
        m_e_x.resizeAndFill(1,1,0.0);
        m_dp_dt_x.resizeAndFill(2,2,0.0);
        m_p_x.resizeAndFill(2,2,0);
        m_dtheta_dt_x.resizeAndFill(2,1,0.0);
        m_theta_x.resizeAndFill(2,1,0);
        m_phi_x.resizeAndFill(2,1,0.0);
        m_cls_p_delta_x = 0;
        m_cls_theta_delta_x = 0;

        // Roll
        m_e_k.resizeAndFill(1,1,0.0);
        m_dp_dt_k.resizeAndFill(4,4,0.0);
        m_p_k.resizeAndFill(4,4,0);
        m_dtheta_dt_k.resizeAndFill(4,1,0.0);
        m_theta_k.resizeAndFill(4,1,0.0);
        m_phi_k.resizeAndFill(4,1,0.0);
        m_cls_p_delta_k = 0;
        m_cls_theta_delta_k = 0;

        m_matrices_ini = false;

        // Register Consumers
        bind<IMC::EntityState>(this);
        bind<IMC::GpsFix>(this);
        bind<IMC::Depth>(this);
        bind<IMC::EulerAngles>(this);
        bind<IMC::GroundVelocity>(this);
        bind<IMC::AngularVelocity>(this);
        bind<IMC::SetThrusterActuation>(this);
        bind<IMC::ServoPosition>(this);
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
          m_flag_imu_active = -1;
        }

        try
        {
          m_ahrs_entity_id = resolveEntity(m_args.ahrs_entity_name);
        }
        catch (...)
        {
          m_ahrs_entity_id = -1;
          m_flag_ahrs_active = -1;
        }
      }

      void
      consume(const IMC::EntityState* msg)
      {
        if (msg->getSourceEntity() == m_imu_entity_id)
        {
          if (msg->state == IMC::EntityState::ESTA_NORMAL)
            m_flag_imu_active = 1;
          else
            m_flag_imu_active = 0;
        }

        if (msg->getSourceEntity() == m_ahrs_entity_id)
        {
          if (msg->state == IMC::EntityState::ESTA_NORMAL)
            m_flag_ahrs_active = 1;
          else
            m_flag_ahrs_active = 0;
        }
      }

      void
      consume(const IMC::GpsFix* msg)
      {
        if (m_flag_initial_point == 0 && m_gps_treshold < 50)
          m_gps_treshold = msg->hacc + 1;

        if (m_flag_initial_point != 0)
          m_gps_treshold = 10;

        if(msg->validity & IMC::GpsFix::GFV_VALID_POS)
        {
          if (msg->hacc < m_gps_treshold)
          {
            m_gps_fix[0] = msg->lat;
            m_gps_fix[1] = msg->lon;
            m_gps_fix[2] = msg->height;
            m_flag_valid_pos = 1;
          }

          if (m_flag_initial_point == 0)
          {
            m_gps_initial_point[0] = msg->lat;
            m_gps_initial_point[1] = msg->lon;
            m_gps_initial_point[2] = msg->height;
            m_flag_initial_point = 1;
          }
        }
        if (msg->hacc >= m_gps_treshold)
          m_flag_valid_pos = 0;

        if ((msg->validity & IMC::GpsFix::GFV_VALID_POS)==0)
          m_flag_valid_pos = 0;
      }

      void
      consume(const IMC::Depth* msg)
      {
        m_depth = msg->value;
      }

      void
      consume(const IMC::EulerAngles* msg)
      {
        m_nu(3,0) = msg->phi;
        m_nu(4,0) = msg->theta;
        m_nu(5,0) = msg->psi;
      }

      void
      consume(const IMC::GroundVelocity* msg)
      {
        if (msg->validity & IMC::GroundVelocity::VAL_VEL_X)
        {
          m_velocities[0] = msg->x;
          m_velocities_ant[0] = m_velocities[0];
        }
        if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_X))
          m_velocities[0] = m_velocities_ant[0];

        if (msg->validity & IMC::GroundVelocity::VAL_VEL_Y)
        {
          m_velocities[1] = msg->y;
          m_velocities_ant[1] = m_velocities[1];
        }
        if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_Y))
          m_velocities[1] = m_velocities_ant[1];

        if (msg->validity & IMC::GroundVelocity::VAL_VEL_Z)
        {
          m_velocities[2] = msg->z;
          m_velocities_ant[2] = m_velocities[2];
        }
        if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_Z))
          m_velocities[2] = m_velocities_ant[2];
      }

      void
      consume(const IMC::AngularVelocity* msg)
      {
        if (m_flag_imu_active == 1 && msg->getSourceEntity() == m_imu_entity_id)
        {
          m_velocities[3] = msg->x;
          m_velocities[4] = msg->y;
          m_velocities[5] = msg->z;
        }
        if (m_flag_ahrs_active == 1 && msg->getSourceEntity() == m_ahrs_entity_id)
        {
          m_velocities[3] = msg->x;
          m_velocities[4] = msg->y;
          m_velocities[5] = msg->z;
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
      initMatrices()
      {
        m_p_x(0,0) = m_args.surge_cov1;
        m_p_x(1,1) = m_args.surge_cov2;

        m_theta_x(0,0) = m_args.surge_ldi;
        m_theta_x(1,0) = m_args.surge_qdi;

        m_p_k(0,0) = m_args.roll_cov1;
        m_p_k(1,1) = m_args.roll_cov2;
        m_p_k(2,2) = m_args.roll_cov3;
        m_p_k(3,3) = m_args.roll_cov4;

        m_theta_k(0,0) = m_args.roll_mcoef;
        m_theta_k(1,0) = m_args.roll_ffcoef;
        m_theta_k(2,0) = m_args.roll_ldi;
        m_theta_k(3,0) = m_args.roll_qdi;
      }

      void
      task(void)
      {
        if (!m_matrices_ini)
          initMatrices();

        // Filters velocities
        m_filter_delta = m_delta_filter.getDelta();
        if (m_filter_delta == -1)
          m_filter_delta = 0.05;

        m_acc_filter = m_dynamics.computeAcceleration(m_velocities, m_vel_filter, m_filter_delta);
        m_vel_filter = m_vel_filter + m_acc_filter * m_filter_delta;

        // Calculate Vehicle Model Coefficients and M Matrix one time
        if (m_model_coef_init == 0)
        {
          m_dynamics.computeModelCoeff(m_args.mass, m_args.a, m_args.b, m_args.c, m_args.volume, m_args.l, m_args.d, m_args.density, m_args.sfin, m_model_coeff);

          // Calculate Vehicle Model
          m_inertia_added_mass = m_dynamics.computeM(m_args.mass, m_model_coeff, m_args.zG);

          m_model_coef_init = m_model_coef_init + 1;
        }

        m_coriolis = m_dynamics.computeC(m_args.mass, m_model_coeff, m_args.zG, m_vel_filter);

        m_restoring = m_dynamics.computeG(m_model_coeff, m_args.zG, m_nu);

        m_lift = m_dynamics.computeL(m_vel_filter, m_args.l, m_model_coeff);

        m_tau = m_dynamics.computeTau(m_thruster, m_servo_pos, m_vel_filter, m_model_coeff);

        m_y = -m_tau + m_coriolis  * m_vel_filter + m_inertia_added_mass * m_acc_filter + m_restoring + m_lift * m_vel_filter;

        // Continuous Least Squares

        // Longitudinal Linear Velocity Damping
        try{
          inf("theta_x");
          m_phi_x(0,0) = -m_vel_filter(0);
          m_phi_x(1,0) = -std::abs(m_vel_filter(0)) * m_vel_filter(0);

          m_e_x(0) = m_phi_x(0) * m_theta_x(0) + m_phi_x(1) * m_theta_x(1) - m_y(0);

          m_dp_dt_x = -m_p_x * m_phi_x * transpose(m_phi_x) * m_p_x;

          m_cls_p_delta_x = m_delta_cls_p_x.getDelta();

          if (m_cls_p_delta_x == -1)
            m_cls_p_delta_x = 0.05;

          m_p_x = m_p_x + m_dp_dt_x * m_cls_p_delta_x;

          m_dtheta_dt_x = -m_p_x * m_phi_x * m_e_x;

          m_cls_theta_delta_x = m_delta_cls_theta_x.getDelta();

          if (m_cls_theta_delta_x == -1)
            m_cls_theta_delta_x = 0.05;

          m_theta_x = m_theta_x + m_dtheta_dt_x * m_cls_theta_delta_x;

          std::cout<<m_theta_x<<std::endl;
        }
        catch(...){}

        // Roll Angular velocity Damping
        try{
          inf("theta_k");
          m_phi_k(0,0) = m_thruster * 10 / 0.84;
          m_phi_k(1,0) = (m_servo_pos[3] - m_servo_pos[0] + m_servo_pos[1] - m_servo_pos[2]) * pow(m_vel_filter(0), 2.0);
          m_phi_k(2,0) = -m_vel_filter(3);
          m_phi_k(3,0) = -std::abs(m_vel_filter(3)) * m_vel_filter(3);

          m_e_k(0) = m_phi_k(0) * m_theta_k(0) + m_phi_k(1) * m_theta_k(1) + m_phi_k(2) * m_theta_k(2) + m_phi_k(3) * m_theta_k(3) - m_y(3);

          m_dp_dt_k = -m_p_k * m_phi_k * transpose(m_phi_k) * m_p_k;

          m_cls_p_delta_k = m_delta_cls_p_k.getDelta();

          if (m_cls_p_delta_k == -1)
            m_cls_p_delta_k = 0.05;

          m_p_k = m_p_k + m_dp_dt_k * m_cls_p_delta_k;

          m_dtheta_dt_k = -m_p_k * m_phi_k * m_e_k;

          m_cls_theta_delta_k = m_delta_cls_theta_k.getDelta();

          if (m_cls_theta_delta_k == -1)
            m_cls_theta_delta_k = 0.05;

          m_theta_k = m_theta_k + m_dtheta_dt_k * m_cls_theta_delta_k;

          std::cout<<m_theta_k<<std::endl;
        }
        catch(...){}
      }
    };
  }
}

DUNE_TASK
