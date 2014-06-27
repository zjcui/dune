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

// DUNE headers.#include <DUNE/DUNE.hpp>
#include "Model.hpp"
#include "GainMatrices.hpp"
#include "Aux.hpp"

namespace Navigation
{
  namespace AUV
  {
    namespace SMO
    {
      using DUNE_NAMESPACES;

      //Damping Matrix Terms from Article
      /*static const float X_u = -7.1;
        static const float Y_v = 73.45;
        static const float Y_r = -65.62;
        static const float Z_w = 73.45;
        static const float Z_q = 65.62;
        static const float K_p = 0.75;
        static const float M_w = -4.8;
        static const float M_q = 55.35;
        static const float N_v = 4.8;
        static const float N_r = 55.35;

        static const float X_uabsu = 8.5;
        static const float Y_vabsv = 255;//80;
        static const float Y_rabsr = -1.71;//-0.3;
        static const float Z_wabsw = 255;
        static const float Z_qabsq = 1.71;
        static const float K_pabsp = 0.85;
        static const float M_wabsw = -4.79;
        static const float M_qabsq = 51.93;
        static const float N_vabsv = 4.79;//1.5;
        static const float N_rabsr = 51.93;//9.1;*/

      //Identified Damping Matrix Terms from Simulation
      /*static const float X_u = 2.2;
        static const float Y_v = 41.23;
        static const float Y_r = 1.22;
        static const float Z_w = 41.23;
        static const float Z_q = -1.22;
        static const float K_p = 0.75;
        static const float M_w = -29.8;
        static const float M_q = 19.14;
        static const float N_v = 29.8;
        static const float N_r = 19.14;

        static const float X_uabsu = 2.2;
        static const float Y_vabsv = 72.8;
        static const float Y_rabsr = 2.1;
        static const float Z_wabsw = 72.8;
        static const float Z_qabsq = -2.1;
        static const float K_pabsp = 0.85;
        static const float M_wabsw = 71.4;
        static const float M_qabsq = -27.8;
        static const float N_vabsv = -71.4;
        static const float N_rabsr = -27.8;*/

      //Identified Damping Matrix Terms from Replay
      /*static const float X_u = 2.2;
        static const float Y_v = 60;
        static const float Y_r = 25.18;
        static const float Z_w = 60;
        static const float Z_q = -25.18;
        static const float K_p = 0.75;
        static const float M_w = 11.8;
        static const float M_q = -5.2;
        static const float N_v = -11.8;
        static const float N_r = -5.2;

        static const float X_uabsu = 2.2;
        static const float Y_vabsv = 116;
        static const float Y_rabsr = 36;
        static const float Z_wabsw = 116;
        static const float Z_qabsq = -36;
        static const float K_pabsp = 0.85;
        static const float M_wabsw = 13.4;
        static const float M_qabsq = -5.7;
        static const float N_vabsv = -13.4;
        static const float N_rabsr = -5.7;*/

      //Calculated Damping Matrix Terms from geometry
      /*static const float X_u = 2.2;
      static const float Y_v = 14.4;
      static const float Y_r = -0.3645;
      static const float Z_w = 14.4;
      static const float Z_q = 0.3645;
      static const float K_p = 0.75;
      static const float M_w = -0.372;
      static const float M_q = 1.8;
      static const float N_v = 0.372;
      static const float N_r = 1.8;

      static const float X_uabsu = 2.2;
      static const float Y_vabsv = 120.3;
      static const float Y_rabsr = -2.43;
      static const float Z_wabsw = 120.3;
      static const float Z_qabsq = 2.43;
      static const float K_pabsp = 0.85;
      static const float M_wabsw = -3.1;
      static const float M_qabsq = 12.3;
      static const float N_vabsv = 3.1;
      static const float N_rabsr = 12.3;*/


      struct Arguments
      {

        //GPS variables
        double gps_absolute_treshold;
        double gps_average_treshold;

        //Timeout variables
        double timeout_altitude;
        double timeout_dvl;

        //Sliding Matrix Gains
        float k1[6];
        float k2[6];
        float alfa1[6];
        float alfa2[6];

        //Sliding boundary layers
        float vel_bound;
        float nu_bound;

        // Resolve Entity string
        std::string imu_entity_name;
        std::string ahrs_entity_name;
        std::string dvl_entity_name;
        std::string altitude_entity_name;

        //AUV caracteristic
        double Mass;
        double a;
        double b;
        double c;
        double Volume;
        double zG;
        double l;
        double d;
        double Density;
        double Sfin;

        //Linear Damping terms
        float X_u;
        float Y_v;
        float Y_r;
        float Z_w;
        float Z_q;
        float K_p;
        float M_w;
        float M_q;
        float N_v;
        float N_r;

        //Quadratic Damping terms
        float X_absuu;
        float Y_absvv;
        float Y_absrr;
        float Z_absww;
        float Z_absqq;
        float K_abspp;
        float M_absww;
        float M_absqq;
        float N_absvv;
        float N_absrr;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
        /*GPS variables*/
        double gps_initial_point[3];
        double gps_fix[3];
        double flag_initial_point;
        double flag_valid_pos;
        double depth;
        double range;
        double bearing;
        double orientation_delta;        
        double hacc_average;
        double hacc_sum;
        int counter;
        DUNE::Time::Delta delta_orientation;


        /*Orientation variables*/
        double euler_angles[3];
        double flag_initial_orientation;

        /*Velocities variables*/
        double velocities[6];
        double velocities_ant[6];
        Math::Matrix vel;

        /*Rotation Matrix*/
        Math::Matrix J;

        /*Filter Variables*/
        Math::Matrix acc_filter;
        Math::Matrix vel_filter;
        double filter_delta;
        double tmp_velocities[6];
        DUNE::Time::Delta delta_filter;

        /*Entity Variables*/
        int flag_imu_active;
        int flag_ahrs_active;
        int flag_dvl_active;
        int flag_altitude_active;
        int imu_entity_id;
        int ahrs_entity_id;
        int dvl_entity_id;
        int altitude_entity_id;

        /*Task management variables*/
        double task_management;

        /*Position Matrices*/
        Math::Matrix nu_dot;
        Math::Matrix nu;

        /*Position from velocity Delta*/
        double posfromvel_delta;
        DUNE::Time::Delta delta_posfromvel;

        /*Sliding Mode Observer*/
        Math::Matrix nu_error;
        Math::Matrix nu_est;
        Math::Matrix nu_dot_est;
        Math::Matrix vel_est;
        Math::Matrix acc_est;
        Math::Matrix J_ant;
        Math::Matrix J_diff;
        Math::Matrix k1;
        Math::Matrix k2;
        Math::Matrix alfa1;
        Math::Matrix alfa2;
        Math::Matrix tanghyper;
        double euler_angles_est[3];
        double velocities_est[6];
        double vel_est_delta;
        double nu_est_delta;
        double J_delta;
        int init_nu_est;
        DUNE::Time::Delta delta_vel_est;
        DUNE::Time::Delta delta_nu_est;
        DUNE::Time::Delta delta_J;

        /*vehicle Model*/
        Math::Matrix M;
        Math::Matrix C;
        Math::Matrix D;
        Math::Matrix G;
        Math::Matrix L;
        Math::Matrix Tau;
        Math::Matrix Mn;
        Math::Matrix Cn;
        Math::Matrix Dn;
        Math::Matrix Gn;
        Math::Matrix Ln;
        Math::Matrix Taun;
        double thruster;
        double servo_pos[4];

        /*Vehicle Model coefficients*/
        double Model_Coeff[26];
        int model_coef_init;

        /*Covariance Variables*/
        Math::Matrix Cov_nu;
        Math::Matrix Cov_vel;
        Math::Matrix vel_cov;
        double angular_vel[3];
        int num_amostras;
        float Cov_multiplier;

        /*RPM variables*/
        double rpms;

        /*Altitude variables*/
        double altitude;
        double altitude_filter[20];
        int altitude_filter_counter;
        int altitude_filter_ini;

        /*Timers variables*/
        int timers_init;
        //! Time without altitude readings deadline.
        Time::Counter<double> altitude_timeout;
        //! Time without altitude readings deadline.
        Time::Counter<double> dvl_timeout;

        //! Send message to Estimated State and Navigation Uncertainty
        IMC::EstimatedState m_est;
        IMC::NavigationUncertainty m_uncertainty;

        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Periodic(name, ctx)
        {

          /*GPS variables*/
          param("GPS absolute treshold", m_args.gps_absolute_treshold)
          .defaultValue("10")
          .description("GPSfix absolute hacc treshold");

          param("GPS average treshold", m_args.gps_average_treshold)
          .defaultValue("4")
          .description("GPSfix average hacc treshold");

          /*Sliding Mode Observer Boundary Layers*/
          param("Velocity Boundary Layer", m_args.vel_bound)
          .defaultValue("0.01")
          .description("Boundary Layer Size");

          param("Position Boundary Layer", m_args.nu_bound)
          .defaultValue("0.1")
          .description("Boundary Layer Size");

          /*Sliding Mode Observer Entities*/
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
          .defaultValue("DVL")
          .description("Label of the Altitude message");

          /*Vehicle physical properties*/
          param("Mass", m_args.Mass)
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

          param("Volume", m_args.Volume)
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

          param("Density", m_args.Density)
          .defaultValue("1030")
          .description("Vehicle CG");

          param("Sfin", m_args.Sfin)
          .defaultValue("0.0064")
          .description("Vehicle CG");

          /*Damping Matrix terms*/
          param("X_u", m_args.X_u)
          .defaultValue("2.4")
          .description("Longitudinal term");         

          param("Y_v", m_args.Y_v)
          .defaultValue("23")
          .description("Lateral term");
    
          param("Y_r", m_args.Y_r)
          .defaultValue("-11.5")
          .description("Lateral term");    

          param("Z_w", m_args.Z_w)
          .defaultValue("23")
          .description("Vertical term");    

          param("Z_q", m_args.Z_q)
          .defaultValue("11.5")
          .description("Vertical term");   

          param("K_p", m_args.K_p)
          .defaultValue("0")
          .description("Roll term");  

          param("M_w", m_args.M_w)
          .defaultValue("-3.1")
          .description("Rotational term");  

          param("M_q", m_args.M_q)
          .defaultValue("9.7")
          .description("Rotational term");

          param("N_v", m_args.N_v)
          .defaultValue("3.1")
          .description("Rotational term");  

          param("N_r", m_args.N_r)
          .defaultValue("9.7")
          .description("Longitudinal term");    

          param("X_absuu", m_args.X_absuu)
          .defaultValue("2.4")
          .description("Longitudinal term");         

          param("Y_absvv", m_args.Y_absvv)
          .defaultValue("80")
          .description("Lateral term");
    
          param("Y_absrr", m_args.Y_absrr)
          .defaultValue("-0.3")
          .description("Lateral term");    

          param("Z_absww", m_args.Z_absww)
          .defaultValue("80")
          .description("Vertical term");    

          param("Z_absqq", m_args.Z_absqq)
          .defaultValue("0.3")
          .description("Vertical term");   

          param("K_abspp", m_args.K_abspp)
          .defaultValue("0")
          .description("Roll term");  

          param("M_absww", m_args.M_absww)
          .defaultValue("-1.5")
          .description("Rotational term");  

          param("M_absqq", m_args.M_absqq)
          .defaultValue("9.1")
          .description("Rotational term");

          param("N_absvv", m_args.N_absvv)
          .defaultValue("1.5")
          .description("Rotational term");  

          param("N_absrr", m_args.N_absrr)
          .defaultValue("9.1")
          .description("Longitudinal term");             

          /*Sliding Mode Observer Gains*/
          param("k1 gain one", m_args.k1[0])
          .defaultValue("0.7")
          .description("Sliding Mode Observer gain");

          param("k1 gain two", m_args.k1[1])
          .defaultValue("0.1")
          .description("Sliding Mode Observer gain");

          param("k1 gain three", m_args.k1[2])
          .defaultValue("0.1")
          .description("Sliding Mode Observer gain");

          param("k1 gain four", m_args.k1[3])
          .defaultValue("1.7")
          .description("Sliding Mode Observer gain");

          param("k1 gain five", m_args.k1[4])
          .defaultValue("0.2")
          .description("Sliding Mode Observer gain");

          param("k1 gain six", m_args.k1[5])
          .defaultValue("0.2")
          .description("Sliding Mode Observer gain");

          param("k2 gain one", m_args.k2[0])
          .defaultValue("0.7")
          .description("Sliding Mode Observer gain");

          param("k2 gain two", m_args.k2[1])
          .defaultValue("0.1")
          .description("Sliding Mode Observer gain");

          param("k2 gain three", m_args.k2[2])
          .defaultValue("0.1")
          .description("Sliding Mode Observer gain");

          param("k2 gain four", m_args.k2[3])
          .defaultValue("1")
          .description("Sliding Mode Observer gain");

          param("k2 gain five", m_args.k2[4])
          .defaultValue("0.2")
          .description("Sliding Mode Observer gain");

          param("k2 gain six", m_args.k2[5])
          .defaultValue("0.2")
          .description("Sliding Mode Observer gain");

          param("alfa1 gain one", m_args.alfa1[0])
          .defaultValue("0.7")
          .description("Luenberger term");

          param("alfa1 gain two", m_args.alfa1[1])
          .defaultValue("0.1")
          .description("Luenberger term");

          param("alfa1 gain three", m_args.alfa1[2])
          .defaultValue("0.1")
          .description("Luenberger term");

          param("alfa1 gain four", m_args.alfa1[3])
          .defaultValue("2")
          .description("Luenberger term");

          param("alfa1 gain five", m_args.alfa1[4])
          .defaultValue("0.2")
          .description("Luenberger term");

          param("alfa1 gain six", m_args.alfa1[5])
          .defaultValue("0.2")
          .description("Luenberger term");

          param("alfa2 gain one", m_args.alfa2[0])
          .defaultValue("0.8")
          .description("Luenberger term");

          param("alfa2 gain two", m_args.alfa2[1])
          .defaultValue("0.7")
          .description("Luenberger term");

          param("alfa2 gain three", m_args.alfa2[2])
          .defaultValue("0.6")
          .description("Luenberger term");

          param("alfa2 gain four", m_args.alfa2[3])
          .defaultValue("1")
          .description("Luenberger term");

          param("alfa2 gain five", m_args.alfa2[4])
          .defaultValue("0.1")
          .description("Luenberger term");

          param("alfa2 gain six", m_args.alfa2[5])
          .defaultValue("0.2")
          .description("Luenberger term");

          /*Timeout Variables*/
          param("Timeout Altitude", m_args.timeout_altitude)
          .defaultValue("3")
          .description("Altitude timeout definition");

          param("Timeout DVL", m_args.timeout_dvl)
          .defaultValue("3")
          .description("DVL timeout definition");

          /*GPS variables*/
          memset (gps_initial_point,0,sizeof(gps_initial_point));
          memset (gps_fix,0,sizeof(gps_fix));
          flag_initial_point = 0;
          flag_valid_pos = 0;
          depth = 0;
          range = 0;
          bearing = 0;
          orientation_delta = 0;
          hacc_average = 0;
          hacc_sum = 0;
          counter = 0;

          /*Orientation variables*/
          memset(euler_angles,0,sizeof(euler_angles));
          flag_initial_orientation = 0;

          /*Velocities variables*/
          memset(velocities,0,sizeof(velocities));
          memset(velocities_ant,0,sizeof(velocities));
          vel.resizeAndFill(6,1,0.0);

          /*Rotation Matrix*/
          J.resizeAndFill(6,6,0.0);

          /*Filter Variables*/
          acc_filter.resizeAndFill(6,1,0.0);
          vel_filter.resizeAndFill(6,1,0.0);
          filter_delta = 0;
          memset(tmp_velocities,0,sizeof(tmp_velocities));

          /*Entity Variables*/
          flag_imu_active = 0;
          flag_ahrs_active = 0;
          flag_dvl_active = 0;
          flag_altitude_active = 0;
          imu_entity_id = 0;
          ahrs_entity_id = 0;
          dvl_entity_id = 0;
          altitude_entity_id = 0;

          /*Task Management Variables*/
          task_management = 0;

          /*Position Matrices*/
          nu_dot.resizeAndFill(6,1,0.0);
          nu.resizeAndFill(6,1,0.0);

          /*Position from velocity Delta*/
          posfromvel_delta = 0;

          /*Sliding Mode Observer*/
          nu_error.resizeAndFill(6,1,0.0);
          nu_est.resizeAndFill(6,1,0.0);
          nu_dot_est.resizeAndFill(6,1,0.0);
          vel_est.resizeAndFill(6,1,0.0);
          acc_est.resizeAndFill(6,1,0.0);
          J_ant.resizeAndFill(6,6,0.0);
          J_diff.resizeAndFill(6,6,0.0);
          k1.resizeAndFill(6,6,0.0);
          k2.resizeAndFill(6,6,0.0);
          alfa1.resizeAndFill(6,6,0.0);
          alfa2.resizeAndFill(6,6,0.0);
          tanghyper.resizeAndFill(6,6,0.0);
          memset(euler_angles_est,0,sizeof(euler_angles_est));
          memset(velocities_est,0,sizeof(velocities_est));
          vel_est_delta = 0;
          nu_est_delta = 0;
          J_delta = 0;
          init_nu_est = 0;

          /*Vehicle Model*/
          M.resizeAndFill(6,6,0.0);
          C.resizeAndFill(6,6,0.0);
          D.resizeAndFill(6,6,0.0);
          G.resizeAndFill(6,1,0.0);
          L.resizeAndFill(6,6,0.0);
          Tau.resizeAndFill(6,1,0.0);
          Mn.resizeAndFill(6,6,0.0);
          Cn.resizeAndFill(6,6,0.0);
          Dn.resizeAndFill(6,6,0.0);
          Gn.resizeAndFill(6,1,0.0);
          Ln.resizeAndFill(6,6,0.0);
          Taun.resizeAndFill(6,1,0.0);
          thruster = 0;
          memset(servo_pos,0,sizeof(servo_pos));

          /*Vehicle Model coefficients*/
          memset(Model_Coeff,0,sizeof(Model_Coeff));
          model_coef_init = 0;

          /*Covariance Variables*/
          Cov_nu.resizeAndFill(6,4,0.0);
          Cov_vel.resizeAndFill(6,4,0.0);
          vel_cov.resizeAndFill(6,1,0.0);
          memset(angular_vel,0,sizeof(angular_vel));
          num_amostras = 0;
          Cov_multiplier = 0;

          /*RPM variables*/
          rpms = 0;

          /*Altitude variables*/
          altitude = 0;
          memset(altitude_filter,0,sizeof(altitude_filter));
          altitude_filter_counter = 0;
          altitude_filter_ini = 0;

          /*Timers variables*/
          timers_init = 0;

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
        onEntityResolution(void)
        {
          try
          {
            imu_entity_id = resolveEntity(m_args.imu_entity_name);
          }
          catch (...)
          {
            imu_entity_id = -1;
            flag_imu_active = -1;
          }

          try
          {
            ahrs_entity_id = resolveEntity(m_args.ahrs_entity_name);
          }
          catch (...)
          {
            ahrs_entity_id = -1;
            flag_ahrs_active = -1;
          }

          try
          {
            dvl_entity_id = resolveEntity(m_args.dvl_entity_name);
          }
          catch (...)
          {
            dvl_entity_id = -1;
            flag_dvl_active = -1;
          }

          try
          {
            altitude_entity_id = resolveEntity(m_args.altitude_entity_name);
          }
          catch (...)
          {
            altitude_entity_id = -1;
            flag_altitude_active = -1;
          }
        }

        void
        consume(const IMC::EntityState* msg)
        {
          if (msg->getSourceEntity() == imu_entity_id)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL)
              flag_imu_active = 1;
            else
              flag_imu_active = 0;
          }

          if (msg->getSourceEntity() == ahrs_entity_id)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL)
              flag_ahrs_active = 1;
            else
              flag_ahrs_active = 0;
          }

          if (msg->getSourceEntity() == dvl_entity_id)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL && (msg->description == "active" || msg->description == "active but without bottom lock" || msg->description == "active (no medium data: need user input)") && dvl_timeout.overflow() == 0)
              flag_dvl_active = 1;
            else if(msg->state == IMC::EntityState::ESTA_NORMAL && (msg->description == "idle" || msg->description == "initializing" || msg->description == "communication error" || msg->description == "idle (no medium data: need user input)") && dvl_timeout.overflow() == 1)
              flag_dvl_active = 0;
            else
              flag_dvl_active = 0;
          }

          if (msg->getSourceEntity() == altitude_entity_id)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL && altitude_timeout.overflow() == 0)
              flag_altitude_active = 1;
            else
              flag_altitude_active = 0;
          }
        }

        void
        consume(const IMC::GpsFix* msg)
        {
          if (msg->validity & IMC::GpsFix::GFV_VALID_POS)
          {
            hacc_sum = hacc_sum + msg->hacc;
            counter++;
            hacc_average = hacc_sum / counter;

            if ( std::abs(hacc_average - msg->hacc) < m_args.gps_average_treshold && msg->hacc < m_args.gps_absolute_treshold  && (msg->lat > -1.571 && msg->lat < 1.571) && (msg->lon > -3.142 && msg->lon < 3.142))
            {  
              gps_fix[0] = msg->lat;
              gps_fix[1] = msg->lon;
              gps_fix[2] = msg->height;
              flag_valid_pos = 1;
            }

            if ( std::abs(hacc_average - msg->hacc) < m_args.gps_average_treshold && msg->hacc < m_args.gps_absolute_treshold && flag_initial_point == 0 && (msg->lat > -1.571 && msg->lat < 1.571) && (msg->lon > -3.142 && msg->lon < 3.142))
            {
              gps_initial_point[0] = msg->lat;
              gps_initial_point[1] = msg->lon;
              gps_initial_point[2] = msg->height;
              flag_initial_point = 1;
            }

            if ( std::abs(hacc_average - msg->hacc) > m_args.gps_average_treshold || msg->hacc > m_args.gps_absolute_treshold || (msg->lat < -1.571 || msg->lat > 1.571) || (msg->lon < -3.142 || msg->lon > 3.142))
              flag_valid_pos = 0;

          }     

          if ((msg->validity & IMC::GpsFix::GFV_VALID_POS)==0)
            flag_valid_pos = 0;      
        }

        void
        consume(const IMC::Depth* msg)
        {
          depth = msg->value;
        }

        void
        consume(const IMC::EulerAngles* msg)
        {
          euler_angles[0] = msg->phi;
          euler_angles[1] = msg->theta;
          euler_angles[2] = msg->psi;

          if (flag_initial_orientation == 0)
          {
            flag_initial_orientation = 1;
            nu(3,0) = msg->phi;
            nu(4,0) = msg->theta;
            nu(5,0) = msg->psi;
          }
        }


        void
        consume(const IMC::GroundVelocity* msg)
        {
          if (msg->validity & IMC::GroundVelocity::VAL_VEL_X)
          { 
            velocities[0] = msg->x;
            velocities_ant[0] = velocities[0];
          }
          if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_X))
            velocities[0] = velocities_ant[0];

          if (msg->validity & IMC::GroundVelocity::VAL_VEL_Y)
          {
            velocities[1] = msg->y;
            velocities_ant[1] = velocities[1];
          }
          if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_Y))
            velocities[1] = velocities_ant[1];

          if (msg->validity & IMC::GroundVelocity::VAL_VEL_Z)
          {
            velocities[2] = msg->z;
            velocities_ant[2] = velocities[2];
          }
          if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_Z))
            velocities[2] = velocities_ant[2];

          if((msg->validity & IMC::GroundVelocity::VAL_VEL_X) || (msg->validity & IMC::GroundVelocity::VAL_VEL_Y) || (msg->validity & IMC::GroundVelocity::VAL_VEL_Z))
             dvl_timeout.reset();
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (flag_imu_active == 1 && msg->getSourceEntity() == imu_entity_id)
          {
            velocities[3] = msg->x;
            velocities[4] = msg->y;
            velocities[5] = msg->z;
          }
          if (flag_ahrs_active == 1 && msg->getSourceEntity() == ahrs_entity_id)
          {
            angular_vel[0] = msg->x;
            angular_vel[1] = msg->y;
            angular_vel[2] = msg->z;
          }
        }

        void
        consume(const IMC::SetThrusterActuation* msg)
        {
          thruster = msg->value;
        }

        void
        consume(const IMC::ServoPosition* msg)
        {
          servo_pos[msg->id] = msg->value;
        }

        void
        consume(const IMC::Rpm* msg)
        {
          if(flag_dvl_active == 0 || flag_dvl_active == -1)
          {
            rpms = msg->value;
            velocities[0] = rpms * 1.6 / 1400;
          }
        }

        void
        consume(const IMC::Distance* msg)
        {
          if(flag_altitude_active == 1 && msg->getSourceEntity() == altitude_entity_id && msg->validity == IMC::Distance::DV_VALID)
          {            
            if(altitude_filter_counter == 20)
              altitude_filter_counter = 0;

            if(altitude_filter_counter < 20 && altitude_filter_ini == 0)
            {
              altitude_filter[altitude_filter_counter] = msg->value;
              altitude_filter_counter++;
            } 

            if(altitude_filter_counter == 20)
            {
              altitude_filter_ini = 1;
            }
   
            if(altitude_filter_ini == 1 && altitude_filter_counter < 20)
            {
              altitude_filter[altitude_filter_counter] = msg->value;
              altitude_filter_counter++;
            }

             altitude = Aux::compute_average_filter(altitude_filter_ini, NELEMS(altitude_filter), altitude_filter);

             altitude_timeout.reset();
          }

          if(flag_altitude_active == -1 || flag_altitude_active == 0)
          {
            altitude = -1; // Default value for invalid altitude measurement
          }
        }


        /***********************Task MANAGEMENT**********************/
        void
        state_management(void)
        {
          if(flag_initial_point == 0 || flag_initial_orientation == 0)
          {
            setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
            task_management = 0;
          }

          if(flag_initial_point == 1 && flag_initial_orientation == 1)
          {
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            task_management = 1;
          }

          return;
        }

        /************************************************************/


        void
        task(void)
        {

          /***********************Entity State Management**********************/

          state_management();

          /*******************************************************************/

          if(task_management == 1)
          {

            /************************Timers Init*******************************/

            if(timers_init == 0)
            {
              altitude_timeout.setTop(m_args.timeout_altitude);
              dvl_timeout.setTop(m_args.timeout_dvl);
              timers_init = 1;
            }

            /******************************************************************/

            /*********************Sensors Fault Detection**********************/

            if(altitude_timeout.overflow() == 1)
              altitude = -1;

            /******************************************************************/

            /**************Avoid Singularaties in Rotation Matrix***************/

            if(nu(4,0)>1.56 || nu(4,0)<1.58)
              nu(4,0) = 1.56;

            if(nu(4,0)<-1.56 || nu(4,0)>-1.58)
              nu(4,0) = -1.56;

            /*******************************************************************/

            /********************Rotation Matrix and Velocities*****************/

            J = Aux::compute_J(euler_angles);
            vel = Matrix(velocities,6,1);

            /*******************************************************************/

            /*******************GPS Signal Acquisition**************************/

            orientation_delta = delta_orientation.getDelta();
            if (flag_valid_pos == 1)
            {
              Coordinates::WGS84::getNEBearingAndRange(gps_initial_point[0], gps_initial_point[1], gps_fix[0], gps_fix[1], &bearing, &range);

              nu(0,0) = range * std::cos(bearing);
              nu(1,0) = range * std::sin(bearing);
              nu(2,0) = depth;

              if(flag_imu_active == 1)
              {
                if(orientation_delta == -1)
                  orientation_delta = 0.05;

                nu_dot = J * vel;
                nu(3,0) = nu(3,0) + nu_dot(3,0) * orientation_delta;
                nu(4,0) = nu(4,0) + nu_dot(4,0) * orientation_delta;
                nu(5,0) = nu(5,0) + nu_dot(5,0) * orientation_delta;
              }

              if(flag_imu_active == 0 || flag_imu_active == -1)
              {
                nu(3,0) = euler_angles[0];
                nu(4,0) = euler_angles[1];
                nu(5,0) = euler_angles[2];
              }

              if(init_nu_est == 0)
              {
                nu_est(0,0) = range * std::cos(bearing);
                nu_est(1,0) = range * std::sin(bearing);
                nu_est(2,0) = depth;
                nu_est(3,0) = euler_angles[0];
                nu_est(4,0) = euler_angles[1];
                nu_est(5,0) = euler_angles[2];
                init_nu_est = init_nu_est + 1;
              }

            }

            /********************************************************************/


            /*********************Position from measured Velocities**************/

            posfromvel_delta = delta_posfromvel.getDelta();

            if(flag_valid_pos == 0)
            {
              if(posfromvel_delta == -1)
                posfromvel_delta = 0.05;

              nu_dot = J * vel;
              nu = nu + nu_dot * posfromvel_delta;
              /*Depth Sensor is always available*/
              nu(2,0) = depth;

              if(flag_imu_active == 0 || flag_imu_active == -1)
              {
                nu(3,0) = euler_angles[0];
                nu(4,0) = euler_angles[1];
                nu(5,0) = euler_angles[2];
              }

            }

            /********************************************************************/

            /*********************Normalize Vehicle Orientation******************/

            nu(3,0) = Math::Angles::normalizeRadian( nu(3,0) );
            nu(4,0) = Math::Angles::normalizeRadian( nu(4,0) );
            nu(5,0) = Math::Angles::normalizeRadian( nu(5,0) );

            /********************************************************************/

            /**************************Sliding Mode Observer Error***************/


            if(init_nu_est == 1)
            {
              //Calculate error for Sliding Mode Observer
              nu_error = nu_est - nu;

              //Normalize orientation error
              nu_error = Aux::compute_standard_error(nu_error);

              //To minimize peaks by GPS Corrections - to be used after code tested at sea
              if(std::abs(nu_error(0,0)) >= 2)
              {
                nu_error(0,0) = 0.0;
                nu_est(0,0) = nu(0,0);
              }

              if(std::abs(nu_error(1,0)) >= 2)
              {
                nu_error(1,0) = 0.0;
                nu_est(1,0) = nu(1,0);
              }

              if(std::abs(nu_error(2,0)) >= 1)
              {
                nu_error(2,0) = 0.0;
                nu_est(2,0) = nu(2,0);
              }

              //Calculate Vehicle Model Coefficients and M Matrix one time
              if( model_coef_init == 0)
              {
                Model::compute_Model_Coeff(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.Volume,m_args.l,m_args.d,m_args.Density,m_args.Sfin,Model_Coeff);

                //Calculate Vehicle Model
                M = Model::compute_M(m_args.Mass,Model_Coeff,m_args.zG);

                model_coef_init = model_coef_init + 1;
              }

              C = Model::compute_C(m_args.Mass,Model_Coeff,m_args.zG,vel_est);

              D = Model::compute_D(vel_est, m_args.X_u, m_args.Y_v, m_args.Y_r, m_args.Z_w, m_args.Z_q, m_args.K_p, m_args.M_w,  m_args.M_q, m_args.N_v,  m_args.N_r,  m_args.X_absuu,  m_args.Y_absvv,  m_args.Y_absrr,  m_args.Z_absww,  m_args.Z_absqq,  m_args.K_abspp,  m_args.M_absww,  m_args.M_absqq, m_args.N_absvv,  m_args.N_absrr);

              G = Model::compute_G(Model_Coeff,m_args.zG,nu_est);

              L = Model::compute_L(vel_est,m_args.l,Model_Coeff);

              Tau = Model::compute_Tau(thruster,servo_pos,vel,Model_Coeff);

              J_delta = delta_J.getDelta();
              if(J_delta == -1)
                J_delta = 0.05;

              J_diff = (J - J_ant) / J_delta;
              J_ant = J;


              //Calculate Vehicle Mode in Earth-fixed Frame
              Mn = inverse (transpose(J) ) * ( M )  * inverse(J);

              Cn = inverse (transpose(J) ) * ( C - M * inverse (J) * J_diff ) * inverse (J);

              Dn = inverse (transpose(J) ) * D * inverse (J);

              Gn = inverse (transpose(J) ) * G;

              Ln = inverse (transpose(J) ) * L * inverse (J);

              Taun = inverse (transpose(J) ) * Tau;

              //Calculate Observer Gains
              k1 = GainMatrices::compute_k1(m_args.k1);

              k2 = GainMatrices::compute_k2(m_args.k2);

              alfa1 = GainMatrices::compute_alfa1(m_args.alfa1);

              alfa2 = GainMatrices::compute_alfa2(m_args.alfa2);

              tanghyper = GainMatrices::compute_tanh(nu_error,m_args.vel_bound);

              nu_dot_est = J * vel_est;

              //Estimation Caculation
              acc_est = inverse(J) * (-alfa2 * nu_error + inverse( Mn ) * ( Taun - Cn * nu_dot_est - Dn * nu_dot_est - Ln * nu_dot_est - Gn ) - J_diff * vel_est - k2 * tanghyper);

              vel_est_delta = delta_vel_est.getDelta();
              if(vel_est_delta == -1)
                vel_est_delta = 0.05;

              vel_est = vel_est + acc_est * vel_est_delta;

              // To avoid velocity jumps and diminish position error in dead-reckonning
              if(std::abs(vel_est(0) - vel(0)) > 0.3)
                vel_est(0) = vel(0);


              tanghyper = GainMatrices::compute_tanh(nu_error,m_args.nu_bound);

              nu_dot_est = -alfa1 * nu_error + J * vel_est - k1 * tanghyper;

              nu_est_delta = delta_nu_est.getDelta();

              if(nu_est_delta == -1)
                nu_est_delta = 0.05;

              nu_est = nu_est + nu_dot_est * nu_est_delta;

              //Grant that vehicle doesn't come out of the water
              if( nu_est(2,0) < 0)
                nu_est(2,0) = 0;

              nu_est(3,0) = Math::Angles::normalizeRadian( nu_est(3,0) );
              nu_est(4,0) = Math::Angles::normalizeRadian( nu_est(4,0) );
              nu_est(5,0) = Math::Angles::normalizeRadian( nu_est(5,0) );

            }
            /********************************************************************/

            //Filters velocities before send to estimated state
            /*filter_delta = delta_filter.getDelta();
            if(filter_delta == -1)
            {
              filter_delta = 0.05;
            }
            tmp_velocities[0]=vel_est(0);
            tmp_velocities[1]=vel_est(1);
            tmp_velocities[2]=vel_est(2);
            tmp_velocities[3]=vel_est(3);
            tmp_velocities[4]=vel_est(4);
            tmp_velocities[5]=vel_est(5);
            acc_filter = Aux::compute_acc(tmp_velocities,vel_filter, filter_delta);
            vel_filter = vel_filter + acc_filter * filter_delta;*/

            //std::cout<<vel_filter<<std::endl;

            m_est.x = nu_est(0,0);
            m_est.y = nu_est(1,0);
            m_est.z = gps_initial_point[2] + nu_est(2,0);
            m_est.phi = nu_est(3,0);
            m_est.theta = nu_est(4,0);
            m_est.psi = nu_est(5,0);
            m_est.u = vel_est(0,0);
            m_est.v = vel_est(1,0);
            m_est.w = vel_est(2,0);
            m_est.p = vel_est(3,0);
            m_est.q = vel_est(4,0);
            m_est.r = vel_est(5,0);
            // 1st Method - Velocity in the navigation frame.
            Coordinates::BodyFixedFrame::toInertialFrame(m_est.phi, m_est.theta, m_est.psi,
                                                         m_est.u,   m_est.v,     m_est.w,
                                                         &m_est.vx, &m_est.vy,   &m_est.vz);
            // 2nd Method
            /*m_est.vx=nu_dot_est(0,0);
            m_est.vy=nu_dot_est(1,0);
            m_est.vz=nu_dot_est(2,0);*/
            m_est.lat = gps_initial_point[0];
            m_est.lon = gps_initial_point[1];
            m_est.height = gps_initial_point[2];
            m_est.depth = nu_est(2,0);
            m_est.alt = altitude;
            dispatch( m_est );


            /*Covariance between measure and estimated*/
            num_amostras++;
            Cov_nu = Aux::compute_Cov(Cov_nu,nu_est,nu,num_amostras);

            /*Verify what angular velocities to use IMU/AHRS*/
            if(flag_imu_active == 1)
              vel_cov = vel;

            if((flag_imu_active == 0 || flag_imu_active == -1) && flag_ahrs_active == 1)
            {
              vel_cov(0) = vel(0);
              vel_cov(1) = vel(1);
              vel_cov(2) = vel(2);
              vel_cov(3) = angular_vel[0];
              vel_cov(4) = angular_vel[1];
              vel_cov(5) = angular_vel[2];
            }

            Cov_vel = Aux::compute_Cov(Cov_vel,vel_est,vel_cov,num_amostras);

            /*If no GPS and/or no DVL is available, Cov increases more for X and Y*/
            if(flag_valid_pos == 1)
            {
              Cov_multiplier = 0;
              Cov_nu.fill(0);
              Cov_vel.fill(0);
              num_amostras = 0;
            }

            if(flag_valid_pos == 0 && flag_dvl_active == 1)
              Cov_multiplier = 0.01;

            if(flag_valid_pos == 0 && (flag_dvl_active == 0 || flag_dvl_active == -1))
              Cov_multiplier = 0.1;


            m_uncertainty.x = Cov_nu(0,2) * Cov_multiplier;
            m_uncertainty.y = Cov_nu(1,2) * Cov_multiplier;
            m_uncertainty.z = Cov_nu(2,2) * Cov_multiplier;
            m_uncertainty.phi = Cov_nu(3,2);
            m_uncertainty.theta = Cov_nu(4,2);
            m_uncertainty.psi = Cov_nu(5,2);
            m_uncertainty.u = Cov_vel(0,2);
            m_uncertainty.v = Cov_vel(1,2);
            m_uncertainty.w = Cov_vel(2,2);
            m_uncertainty.p = Cov_vel(3,2);
            m_uncertainty.q = Cov_vel(4,2);
            m_uncertainty.r = Cov_vel(5,2);
            dispatch( m_uncertainty );

          }
        }
      };
    }
  }
}

DUNE_TASK
