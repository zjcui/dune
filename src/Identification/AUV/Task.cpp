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
#include "Identification.hpp"
//#include "Model.hpp"

namespace Identification
{
  namespace AUV
  {
    using DUNE_NAMESPACES;

      //AUV Parameters for Ideal Behavior

      // Damping Matrix Terms
      static const float X_u = -2.1;
      static const float Y_v = -23;
      static const float Y_r = 11.5;
      static const float Z_w = -23;
      static const float Z_q = -11.5;
      static const float K_p = -0.75;//-0.82;//-0.3;
      static const float M_q = -9.7;
      static const float M_w = 3.1;
      static const float N_r = -9.7;
      static const float N_v = -3.1;

      static const float X_uabsu = -2.1;
      static const float Y_vabsv = -80;
      static const float Y_rabsr = 0.3;
      static const float Z_wabsw = -80;
      static const float Z_qabsq = -0.3;
      static const float K_pabsp = -0.85;//-6e-4;
      static const float M_qabsq = -9.1;
      static const float M_wabsw = 1.5;
      static const float N_rabsr = -9.1;
      static const float N_vabsv = -1.5;

      struct Arguments
      {
        //Resolve Entity string
        std::string imu_entities;
        std::string ahrs_entities;
        std::string rpm_entities;
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
      };

      struct Task: public DUNE::Tasks::Periodic
      {

        double argument;

        double velocity_filtered[6];

        double contador;
        double identification_delta;
	double euler_angles[3];
 	double velocities[6];
        double velocities_ant[6];
        float rpms;

        double CLS_P_delta_x;
        double CLS_theta_delta_x;
        double CLS_P_delta_z;
        double CLS_theta_delta_z;
        double CLS_P_delta_k;
        double CLS_theta_delta_k;
        double CLS_P_delta_m;
        double CLS_theta_delta_m;
        double PE_delta_z;
        double PE_delta_x;

        double ideal_delta;
        double ideal_delta1;

        // Entity ID
        int imu_entity;
        int ahrs_entity;
        int dvl_entity;
        int rpm_entity;
        int flag_imu_active;
        int flag_ahrs_active;
        int flag_rpm_active;
        int flag_dvl_active;
        double thruster;
        double depth;
        double servo_pos[4];

        //! Send message to Estimated State and Navigation Uncertainty
        IMC::NavigationUncertainty m_uncertainty;

        // Identification Matrices
        Math::Matrix acc_identification;
        Math::Matrix vel_identification;

        Math::Matrix acc_ideal;
        Math::Matrix vel_ideal;
        Math::Matrix nu_dot_ideal;
        Math::Matrix nu_ideal;

        Math::Matrix M;
        Math::Matrix C;
        Math::Matrix D;
        Math::Matrix G;
        Math::Matrix L;
        Math::Matrix Tau;
        Math::Matrix Y;

        Math::Matrix e_x;
        Math::Matrix dP_dt_x;
        Math::Matrix P_x;
        Math::Matrix dtheta_dt_x;
        Math::Matrix theta_x;
        Math::Matrix phi_x;

        Math::Matrix e_z;
        Math::Matrix dP_dt_z;
        Math::Matrix P_z;
        Math::Matrix dtheta_dt_z;
        Math::Matrix theta_z;
        Math::Matrix phi_z;

        Math::Matrix e_k;
        Math::Matrix dP_dt_k;
        Math::Matrix P_k;
        Math::Matrix dtheta_dt_k;
        Math::Matrix theta_k;
        Math::Matrix phi_k;

        Math::Matrix e_m;
        Math::Matrix dP_dt_m;
        Math::Matrix P_m;
        Math::Matrix dtheta_dt_m;
        Math::Matrix theta_m;
        Math::Matrix phi_m;

        Math::Matrix PE_x; 
        Math::Matrix PE_k;

        //! Time window between values.
        DUNE::Time::Delta delta_identification;
        DUNE::Time::Delta delta_CLS_P_x;
        DUNE::Time::Delta delta_CLS_theta_x;
        DUNE::Time::Delta delta_CLS_P_z;
        DUNE::Time::Delta delta_CLS_theta_z;
        DUNE::Time::Delta delta_CLS_P_k;
        DUNE::Time::Delta delta_CLS_theta_k;
        DUNE::Time::Delta delta_CLS_P_m;
        DUNE::Time::Delta delta_CLS_theta_m;
        DUNE::Time::Delta delta_PE_k;
        DUNE::Time::Delta delta_PE_x;
        DUNE::Time::Delta delta_ideal;
        DUNE::Time::Delta delta_ideal1;
        Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Periodic(name, ctx)
        {

          param("Entity Label IMU", m_args.imu_entities)
          .defaultValue("IMU")
          .description("Label of the IMU message");

          param("Entity Label AHRS", m_args.ahrs_entities)
          .defaultValue("AHRS")
          .description("Label of the AHRS message");

          param("Entity Label MOTOR", m_args.rpm_entities)
          .defaultValue("Motor")
          .description("Label of the RPM message");

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

          CLS_P_delta_x = 0;
          CLS_theta_delta_x = 0;
          CLS_P_delta_z = 0;
          CLS_theta_delta_z = 0;
          CLS_P_delta_k = 0;
          CLS_theta_delta_k = 0;

          PE_delta_z = 0;
          PE_delta_x = 0;

          argument = 0;

          identification_delta = 0;
          contador = 0;
          rpms = 0;

          std::memset(&servo_pos, 0, sizeof(servo_pos));


          std::memset(&velocity_filtered,0,sizeof(velocity_filtered));

          // Identification Matrices
          acc_identification.resizeAndFill(6,1,0.0);
          vel_identification.resizeAndFill(6,1,0.0);

          acc_ideal.resizeAndFill(6,1,0.0);
          vel_ideal.resizeAndFill(6,1,0.0);
          nu_dot_ideal.resizeAndFill(6,1,0.0);
          nu_ideal.resizeAndFill(6,1,0.0);


          M.resizeAndFill(6,6,0.0);
          C.resizeAndFill(6,6,0.0);
          D.resizeAndFill(6,6,0.0);
          G.resizeAndFill(6,1,0.0);
          L.resizeAndFill(6,6,0.0);
          Tau.resizeAndFill(6,1,0.0);
          Y.resizeAndFill(6,1,0.0);


          e_x.resizeAndFill(1,1,0.0);
          dP_dt_x.resizeAndFill(2,2,0.0);
          P_x.resizeAndFill(2,2,5e3);
          dtheta_dt_x.resizeAndFill(2,1,0.0);
          theta_x.resizeAndFill(2,1,0);
          theta_x(0,0)=2;
          theta_x(1,0)=2;
          phi_x.resizeAndFill(2,1,0.0);

          e_k.resizeAndFill(1,1,0.0);
          dP_dt_k.resizeAndFill(4,4,0.0);
          P_k.resizeAndFill(4,4,0.5);
          dtheta_dt_k.resizeAndFill(4,1,0.0);
          theta_k.resizeAndFill(4,1,0.0);
          theta_k(0,0)=0.06;
          theta_k(1,0)=-0.4;
          theta_k(2,0)=0.8;
          theta_k(3,0)=0.9; 
          phi_k.resizeAndFill(4,1,0.0);


          e_z.resizeAndFill(1,1,0.0);
          dP_dt_z.resizeAndFill(4,4,0.0);
          P_z.resizeAndFill(4,4,100);
          /*P_z(0,0) = 1;
          P_z(1,1) = 1;
          P_z(2,2) = 1;
          P_z(3,3) = 1;*/
          dtheta_dt_z.resizeAndFill(4,1,0.0);
          theta_z.resizeAndFill(4,1,0.0); 
          theta_z(0,0)=23;
          theta_z(1,0)=-11.5;
          theta_z(2,0)=80;
          theta_z(3,0)=-0.3; 
          phi_z.resizeAndFill(4,1,0.0);

          e_m.resizeAndFill(1,1,0.0);
          dP_dt_m.resizeAndFill(4,4,0.0);
          P_m.resizeAndFill(4,4,0);
          P_m(0,0) = 1;
          P_m(1,1) = 1;
          P_m(2,2) = 1;
          P_m(3,3) = 1;
          dtheta_dt_m.resizeAndFill(4,1,0.0);
          theta_m.resizeAndFill(4,1,0.0);
          theta_m(0,0)=3.1;
          theta_m(1,0)=9.7;
          theta_m(2,0)=1.5;
          theta_m(3,0)=9.1;
          phi_m.resizeAndFill(4,1,0.0);

          PE_x.resizeAndFill(4,4,0.0);
          PE_k.resizeAndFill(4,4,0.0);


          //Register Consumers
          bind<IMC::EulerAngles>(this);
          bind<IMC::AngularVelocity>(this);
          bind<IMC::GroundVelocity>(this);
          bind<IMC::ServoPosition>(this);
          bind<IMC::SetThrusterActuation>(this);
          bind<IMC::EntityState>(this);
          bind<IMC::Rpm>(this);
        }

        void
        onEntityResolution(void)
        {
          try
          {
            imu_entity = resolveEntity(m_args.imu_entities);
          }
          catch (...)
          {
            imu_entity = -1;
            flag_imu_active = -1;
          }

          try
          {
            ahrs_entity = resolveEntity(m_args.ahrs_entities);
          }
          catch (...)
          {
            ahrs_entity = -1;
            flag_ahrs_active = -1;
          }

          try
          {
            rpm_entity = resolveEntity(m_args.rpm_entities);
          }
          catch (...)
          {
            rpm_entity = -1;
            flag_rpm_active = -1;
          }
        }


        void
        consume(const IMC::EulerAngles* msg)
        {
          euler_angles[0] = msg->phi;
          euler_angles[1] = msg->theta;
          euler_angles[2] = msg->psi;
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
        }

        void
        consume(const IMC::AngularVelocity* msg)
        {
          if (flag_imu_active == 1 && msg->getSourceEntity() == imu_entity)
          {
            velocities[3] = msg->x;
            velocities[4] = msg->y;
            velocities[5] = msg->z;
          }

          if (flag_ahrs_active == 1 &&  ( flag_imu_active == 0 || flag_imu_active == -1) && msg->getSourceEntity() == ahrs_entity)
          {
            velocities[3] = msg->x;
            velocities[4] = msg->y;
            velocities[5] = msg->z;
          }
        }

        void
        consume(const IMC::ServoPosition* msg)
        {
          servo_pos[msg->id] = msg->value;
        }

        void
        consume(const IMC::SetThrusterActuation* msg)
        {
          thruster = msg->value;
        }

        void
        consume(const IMC::EntityState* msg)
        {
          if (msg->getSourceEntity() == imu_entity)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL)
              flag_imu_active = 1;
            else
              flag_imu_active = 0;
          }

          if (msg->getSourceEntity() == ahrs_entity)
          {
            if (msg->state == IMC::EntityState::ESTA_NORMAL)
              flag_ahrs_active = 1;
            else
              flag_ahrs_active = 0;
          }
        }

        void
        consume(const IMC::Rpm* msg)
        {
          rpms = msg->value;
        }


        void
        task(void)
        {
            // Identification

            // First Order Filter to Obtain vehicle acceleration
            identification_delta = delta_identification.getDelta();
            acc_identification = Identification::compute_acc(velocities,vel_identification, identification_delta);
            vel_identification = vel_identification + acc_identification * identification_delta;           

            std::fill_n ( velocity_filtered, 1, vel_identification(0,0));
            std::fill_n ( velocity_filtered+1, 1, vel_identification(1,0));
            std::fill_n ( velocity_filtered+2, 1, vel_identification(2,0));
            std::fill_n ( velocity_filtered+3, 1, vel_identification(3,0));
            std::fill_n ( velocity_filtered+4, 1, vel_identification(4,0));
            std::fill_n ( velocity_filtered+5, 1, vel_identification(5,0));

            //Calculate Matrix M, C, G and Tau

            M = Identification::compute_M(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.Volume,m_args.zG);

            C = Identification::compute_C(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.Volume,m_args.zG,velocity_filtered);

            G = Identification::compute_G(m_args.Mass,m_args.Volume,m_args.zG,euler_angles);

            L = Identification::compute_L(velocity_filtered,m_args.l,m_args.d,m_args.Density,m_args.Sfin);

            Tau = Identification::compute_Tau(thruster,servo_pos,velocity_filtered,m_args.l,m_args.d,m_args.Density,m_args.Sfin);


            Y = -Tau + C  * vel_identification + M * acc_identification + G + L * vel_identification;


            /*Continuous Least Squares*/

            /*Longitudinal Linear Velocity Damping*/

            try{

            phi_x(0,0) = -vel_identification(0);
            phi_x(1,0) = -std::abs(vel_identification(0)) * vel_identification(0);

            PE_delta_x = delta_PE_x.getDelta();

            PE_x = phi_x * transpose(phi_x) * PE_delta_x;
            //inf("PE_x");
            //std::cout<<PE_x<<std::endl;

            e_x(0) = phi_x(0) * theta_x(0) + phi_x(1) * theta_x(1) - Y(0);

            //std::cout<<e_x(0)<<std::endl;

            dP_dt_x = - P_x * phi_x * transpose(phi_x) * P_x;

            //std::cout<<dP_dt_x<<std::endl;

            CLS_P_delta_x = delta_CLS_P_x.getDelta();

            if(CLS_P_delta_x == -1)
            {
            CLS_P_delta_x = 0.05;
            }

            P_x = P_x + dP_dt_x * CLS_P_delta_x;

            std::cout<<P_x<<std::endl;

            dtheta_dt_x = -P_x * phi_x * e_x;

            CLS_theta_delta_x = delta_CLS_theta_x.getDelta();

            if(CLS_theta_delta_x == -1)
            {
            CLS_theta_delta_x = 0.05;
            }

            theta_x = theta_x + dtheta_dt_x * CLS_theta_delta_x;
            inf("theta_x");
            std::cout<<theta_x<<std::endl;

            }
            catch(...){}
            /*****************************/


            /*Roll Angular velocity Damping*/
            try{

            phi_k(0,0) = thruster * 10/0.84;
            phi_k(1,0) = ( servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * pow(vel_identification(0),2.0);
            phi_k(2,0) = -vel_identification(3);
            phi_k(3,0) = -std::abs(vel_identification(3)) * vel_identification(3);
            //std::cout<<phi_k<<std::endl;
            //std::cout<<phi_k* transpose(phi_k)<<std::endl;

            e_k(0) = phi_k(0) * theta_k(0) + phi_k(1) * theta_k(1) + phi_k(2) * theta_k(2) + phi_k(3) * theta_k(3) - Y(3);

            dP_dt_k = - P_k * phi_k * transpose(phi_k) * P_k;

            CLS_P_delta_k = delta_CLS_P_k.getDelta();

            if(CLS_P_delta_k == -1)
            {
            CLS_P_delta_k = 0.05;
            }

            P_k = P_k + dP_dt_k * CLS_P_delta_k;

            std::cout<<P_k<<std::endl;

            dtheta_dt_k = -P_k * phi_k * e_k;

            CLS_theta_delta_k = delta_CLS_theta_k.getDelta();

            if(CLS_theta_delta_k == -1)
            {
            CLS_theta_delta_k = 0.05;
            }

            theta_k = theta_k + dtheta_dt_k * CLS_theta_delta_k;
            inf("theta_k");
            std::cout<<theta_k<<std::endl;

            PE_k = PE_k + phi_k * transpose(phi_k);// * PE_delta_z * 1 / PE_delta_z;  
            //inf("PE_k");
            //std::cout<<PE_k<<std::endl;
            }
            catch(...){}
            /***********************/


            /**************************/

            /*Continuous Least Squares for ideal vertical and lateral behavior*/


            if(contador>0)
            {

            double v_estimado[6]={vel_ideal(0),vel_ideal(1),vel_ideal(2),vel_ideal(3),vel_ideal(4),vel_ideal(5)};
            double pos_estimado[6]={nu_ideal(0),nu_ideal(1),nu_ideal(2),nu_ideal(3),nu_ideal(4),nu_ideal(5)};

            // Compute AUV Dynamic in Body-fixed Frame

            M = Identification::compute_M(18,0.54,0.075,0.075,0.0181,0.01);

            C = Identification::compute_C(18,0.54,0.075,0.075,0.0181,0.01,v_estimado);

            D = Identification::compute_D(v_estimado, X_u, Y_v, Y_r, Z_w, Z_q, K_p, M_q, M_w, N_r, N_v, X_uabsu, Y_vabsv, Y_rabsr, Z_wabsw, Z_qabsq, K_pabsp, M_qabsq, M_wabsw, N_rabsr, N_vabsv);

            double angulos_euler[6]={nu_ideal(3),nu_ideal(4),nu_ideal(5)};

            G = Identification::compute_G(18,0.0181,0.01,angulos_euler);

            L = Identification::compute_L(v_estimado,1.08,0.15,1000,0.0064);

            Math::Matrix tau1(6,1,0.0); 
            tau1(0) = 10; 
            tau1(3) = 10 * -0.06; 
            tau1(1) = 0.35 *std::cos(argument) * 19.7; 
            tau1(5) = 0.35 *std::cos(argument) *-7.7;

            argument=argument+0.01;

            acc_ideal = inverse(M) * (tau1 - C * vel_ideal - D * vel_ideal - G - L * vel_ideal);

            ideal_delta=delta_ideal.getDelta();

            if(ideal_delta == -1)
            {
            ideal_delta = 0.05;
            }

            vel_ideal = vel_ideal + acc_ideal * ideal_delta;

            Math::Matrix ea(3,1);
            ea(0) = Math::Angles::normalizeRadian(nu_ideal(3));
            ea(1) = Math::Angles::normalizeRadian(nu_ideal(4));
            ea(2) = Math::Angles::normalizeRadian(nu_ideal(5));

            Math::Matrix J(6,6,0.0); J = ea.toDCMSMO();

            nu_dot_ideal = J * vel_ideal;

            ideal_delta1=delta_ideal1.getDelta();

            if(ideal_delta1 == -1)
            {
            ideal_delta1 = 0.05;
            }
            nu_ideal=nu_ideal+nu_dot_ideal * ideal_delta1;

           /******************************************************************/

           /*Least Squares for horizontal movement*/

            M = Identification::compute_M(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.Volume,m_args.zG);

            C = Identification::compute_C(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.Volume,m_args.zG,v_estimado);

            G = Identification::compute_G(m_args.Mass,m_args.Volume,m_args.zG,angulos_euler);

            L = Identification::compute_L(v_estimado,m_args.l,m_args.d,m_args.Density,m_args.Sfin);

            Tau = tau1;//Identification::compute_Tau(tau1(0),servo_pos,velocity_filtered,m_args.l,m_args.d,m_args.Density,m_args.Sfin);


            Y = Tau - C  * vel_ideal - M * acc_ideal - G - L * vel_ideal;

            try{

            phi_z(0,0) = vel_ideal(1);
            phi_z(1,0) = vel_ideal(5);
            phi_z(2,0) = std::abs(vel_ideal(1)) * vel_ideal(1);
            phi_z(3,0) = std::abs(vel_ideal(5)) * vel_ideal(5);

            e_z(0) = phi_z(0) * theta_z(0) + phi_z(1) * theta_z(1) + phi_z(2) * theta_z(2) + phi_z(3) * theta_z(3) - Y(1);

            std::cout<<e_z<<std::endl;

            dP_dt_z = - P_z * phi_z * transpose(phi_z) * P_z;

            //std::cout<<dP_dt_z<<std::endl;

            CLS_P_delta_z = delta_CLS_P_z.getDelta();

            P_z = P_z + dP_dt_z * CLS_P_delta_z;

            std::cout<<P_z<<std::endl;

            dtheta_dt_z = -P_z * phi_z * e_z;

            CLS_theta_delta_z = delta_CLS_theta_z.getDelta();

            theta_z = theta_z + dtheta_dt_z * CLS_theta_delta_z;
            inf("theta_z");
            std::cout<<theta_z<<std::endl;

            }
            catch(...){}
            
            
            
            try{

            phi_m(0,0) = vel_ideal(1);
            phi_m(1,0) = vel_ideal(5);
            phi_m(2,0) = std::abs(vel_ideal(1)) * vel_ideal(1);
            phi_m(3,0) = std::abs(vel_ideal(5)) * vel_ideal(5);

            e_m(0) = phi_m(0) * theta_m(0) + phi_m(1) * theta_m(1) + phi_m(2) * theta_m(2) + phi_m(3) * theta_m(3) - Y(5);

            std::cout<<e_m<<std::endl;


            dP_dt_m = - P_m * phi_m * transpose(phi_m) * P_m;

            //std::cout<<dP_dt_z<<std::endl;

            CLS_P_delta_m = delta_CLS_P_m.getDelta();

            P_m = P_m + dP_dt_m * CLS_P_delta_m;

            std::cout<<P_m<<std::endl;

            dtheta_dt_m = -P_m * phi_m * e_m;

            CLS_theta_delta_m = delta_CLS_theta_m.getDelta();

            theta_m = theta_m + dtheta_dt_m * CLS_theta_delta_m;
            inf("theta_m");
            std::cout<<theta_m<<std::endl;

            }
            catch(...){}


         /***************************************/
         }
         contador++;


            m_uncertainty.x = nu_ideal(0);
            m_uncertainty.y = nu_ideal(1);
            m_uncertainty.z = nu_ideal(2);
            m_uncertainty.phi = nu_ideal(3);
            m_uncertainty.theta = nu_ideal(4);
            m_uncertainty.psi = nu_ideal(5);
            m_uncertainty.u = vel_ideal(0);
            m_uncertainty.v = vel_ideal(1);
            m_uncertainty.w = vel_ideal(2);
            m_uncertainty.p = vel_ideal(3);
            m_uncertainty.q = vel_ideal(4);
            m_uncertainty.r = vel_ideal(5);
            dispatch( m_uncertainty );
      }
    };
  }
}

DUNE_TASK
