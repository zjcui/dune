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
#include "Aux.hpp"
#include "Model.hpp"

namespace Identification
{
  namespace AUV
  {
    using DUNE_NAMESPACES;

      struct Arguments
      {
          // Resolve Entity string
          std::string imu_entity_name;
          std::string ahrs_entity_name;

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
      };

      struct Task: public DUNE::Tasks::Periodic
      {
         /*GPS variables*/
         double gps_initial_point[3];
         double gps_fix[3];
         double gps_treshold;
         double flag_initial_point;
         double flag_valid_pos;
         double depth;
         double range;
         double bearing;
         double orientation_delta;
         DUNE::Time::Delta delta_orientation;

         /*Orientation variables*/
         double euler_angles[3];
         double flag_initial_orientation;

         /*Velocities variables*/
         double velocities[6];
         double velocities_ant[6];
         Math::Matrix vel;
         double angular_vel[3];

         /*Rotation Matrix*/
         Math::Matrix J;

         /*Filter Variables*/
         Math::Matrix acc_filter;
         Math::Matrix vel_filter;
         double filter_delta;
         DUNE::Time::Delta delta_filter;

         /*Entity Variables*/
         int flag_imu_active;
         int flag_ahrs_active;
         int imu_entity_id;
         int ahrs_entity_id;

         /*Position Matrices*/
         Math::Matrix nu_dot;
         Math::Matrix nu;

         /*vehicle Model*/
         Math::Matrix M;
         Math::Matrix C;
         Math::Matrix D;
         Math::Matrix G;
         Math::Matrix L;
         Math::Matrix Tau;
         double thruster;
         double servo_pos[4];

         /*Vehicle Model coefficients*/
         double Model_Coeff[26];
         int model_coef_init;

         /*Identification Matrices*/
         Math::Matrix Y;  
         Math::Matrix e_x;
         Math::Matrix dP_dt_x;
         Math::Matrix P_x;
         Math::Matrix dtheta_dt_x;
         Math::Matrix theta_x;
         Math::Matrix phi_x;  
         double CLS_P_delta_x;
         double CLS_theta_delta_x;   
         DUNE::Time::Delta delta_CLS_P_x;
         DUNE::Time::Delta delta_CLS_theta_x;
         Math::Matrix e_k;
         Math::Matrix dP_dt_k;
         Math::Matrix P_k;
         Math::Matrix dtheta_dt_k;
         Math::Matrix theta_k;
         Math::Matrix phi_k;
         double CLS_P_delta_k;
         double CLS_theta_delta_k;
         DUNE::Time::Delta delta_CLS_P_k;
         DUNE::Time::Delta delta_CLS_theta_k;

         Math::Matrix e_y;
         Math::Matrix dP_dt_y;
         Math::Matrix P_y;
         Math::Matrix dtheta_dt_y;
         Math::Matrix theta_y;
         Math::Matrix phi_y;
         double CLS_P_delta_y;
         double CLS_theta_delta_y;
         DUNE::Time::Delta delta_CLS_P_y;
         DUNE::Time::Delta delta_CLS_theta_y;

         Math::Matrix e_r;
         Math::Matrix dP_dt_r;
         Math::Matrix P_r;
         Math::Matrix dtheta_dt_r;
         Math::Matrix theta_r;
         Math::Matrix phi_r;
         double CLS_P_delta_r;
         double CLS_theta_delta_r;
         DUNE::Time::Delta delta_CLS_P_r;
         DUNE::Time::Delta delta_CLS_theta_r;


         Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Periodic(name, ctx)
        {

          /*Sensor Entities*/
          param("Entity Label IMU", m_args.imu_entity_name)
          .defaultValue("IMU")
          .description("Label of the IMU message");

          param("Entity Label AHRS", m_args.ahrs_entity_name)
         .defaultValue("AHRS")
         .description("Label of the AHRS message");

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


         /*GPS variables*/
         memset (gps_initial_point,0,sizeof(gps_initial_point));
         memset (gps_fix,0,sizeof(gps_fix));
         gps_treshold = 0;
         flag_initial_point = 0;
         flag_valid_pos = 0;
         depth = 0;
         range = 0;
         bearing = 0;
         orientation_delta = 0;

         /*Orientation variables*/
         memset(euler_angles,0,sizeof(euler_angles));
         flag_initial_orientation = 0;

         /*Velocities variables*/
         memset(velocities,0,sizeof(velocities));
         memset(velocities_ant,0,sizeof(velocities)); 
         vel.resizeAndFill(6,1,0.0);
         memset(angular_vel,0,sizeof(angular_vel));

         /*Rotation Matrix*/
         J.resizeAndFill(6,6,0.0);

         /*Filter Variables*/
         acc_filter.resizeAndFill(6,1,0.0);
         vel_filter.resizeAndFill(6,1,0.0);
         filter_delta = 0;

         /*Position Matrices*/
         nu_dot.resizeAndFill(6,1,0.0);
         nu.resizeAndFill(6,1,0.0);

         /*Vehicle Model*/
         M.resizeAndFill(6,6,0.0);
         C.resizeAndFill(6,6,0.0);
         D.resizeAndFill(6,6,0.0);
         G.resizeAndFill(6,1,0.0);
         L.resizeAndFill(6,6,0.0);
         Tau.resizeAndFill(6,1,0.0);
         thruster = 0;
         memset(servo_pos,0,sizeof(servo_pos));

         /*Vehicle Model coefficients*/
         memset(Model_Coeff,0,sizeof(Model_Coeff));
         model_coef_init = 0;

         /*Identification Matrices*/
         Y.resizeAndFill(6,1,0.0); 
         e_x.resizeAndFill(1,1,0.0);
         dP_dt_x.resizeAndFill(2,2,0.0);
         P_x.resizeAndFill(2,2,5e3);
         /*P_x(0,0) = 5;
         P_x(1,1) = 5;*/
         dtheta_dt_x.resizeAndFill(2,1,0.0);
         theta_x.resizeAndFill(2,1,0);
         theta_x(0,0) = 2;
         theta_x(1,0) = 2;
         phi_x.resizeAndFill(2,1,0.0);   
         CLS_P_delta_x = 0;
         CLS_theta_delta_x = 0;
         e_k.resizeAndFill(1,1,0.0);
         dP_dt_k.resizeAndFill(4,4,0.0);
         P_k.resizeAndFill(4,4,0.5);
         P_k(0,0) = 0.5;
         /*P_k(1,1) = 5;
         P_k(2,2) = 5;
         P_k(3,3) = 5;*/
         dtheta_dt_k.resizeAndFill(4,1,0.0);
         theta_k.resizeAndFill(4,1,0.0);
         theta_k(0,0) = 0.06;
         theta_k(1,0) = -0.4;
         theta_k(2,0) = 0.8;
         theta_k(3,0) = 0.9; 
         phi_k.resizeAndFill(4,1,0.0);
         CLS_P_delta_k = 0;
         CLS_theta_delta_k = 0;

         e_y.resizeAndFill(1,1,0.0);
         dP_dt_y.resizeAndFill(4,4,0.0);
         P_y.resizeAndFill(4,4,5e3);
         /*P_y(0,0) = 5;
         P_y(1,1) = 5;
         P_y(2,2) = 5;
         P_y(3,3) = 5;*/
         dtheta_dt_y.resizeAndFill(4,1,0.0);
         theta_y.resizeAndFill(4,1,0.0);
         theta_y(0,0) = 23;
         theta_y(1,0) = -11.5;
         theta_y(2,0) = 80;
         theta_y(3,0) = -0.3; 
         phi_y.resizeAndFill(4,1,0.0);
         CLS_P_delta_y = 0;
         CLS_theta_delta_y = 0;

         e_r.resizeAndFill(1,1,0.0);
         dP_dt_r.resizeAndFill(4,4,0.0);
         P_r.resizeAndFill(4,4,5e3);
         /*P_r(0,0) = 5;
         P_r(1,1) = 5;
         P_r(2,2) = 5;
         P_r(3,3) = 5;*/
         dtheta_dt_r.resizeAndFill(4,1,0.0);
         theta_r.resizeAndFill(4,1,0.0);
         theta_r(0,0) = 3.1;
         theta_r(1,0) = 9.7;
         theta_r(2,0) = 1.5;
         theta_r(3,0) = 9.1; 
         phi_r.resizeAndFill(4,1,0.0);
         CLS_P_delta_r = 0;
         CLS_theta_delta_r = 0;


         //Register Consumers
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
          }

        void
        consume(const IMC::GpsFix* msg)
        {
          if (flag_initial_point == 0 && gps_treshold < 50)
            gps_treshold = msg->hacc + 1;

          if (flag_initial_point != 0)
            gps_treshold = 10;

          if(msg->validity & IMC::GpsFix::GFV_VALID_POS)
          {
            if (msg->hacc < gps_treshold)
            {
              gps_fix[0] = msg->lat;
              gps_fix[1] = msg->lon;
              gps_fix[2] = msg->height;
              flag_valid_pos = 1;
            }

            if (flag_initial_point == 0)
            {
              gps_initial_point[0] = msg->lat;
              gps_initial_point[1] = msg->lon;
              gps_initial_point[2] = msg->height;
              flag_initial_point = 1;
            }
          }
            if (msg->hacc >= gps_treshold) 
              flag_valid_pos = 0;

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
            velocities[3] = msg->x;
            velocities[4] = msg->y;
            velocities[5] = msg->z;
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
      task(void)
      {

            //Filters velocities and position before send to estimated state
            filter_delta = delta_filter.getDelta();
            if(filter_delta == -1)
            {
            filter_delta = 0.05;
            }
            acc_filter = Aux::compute_acc(velocities,vel_filter, filter_delta);
            vel_filter = vel_filter + acc_filter * filter_delta; 

            //Calculate Vehicle Model Coefficients and M Matrix one time
            if( model_coef_init == 0)
            {
            Model::compute_Model_Coeff(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.Volume,m_args.l,m_args.d,m_args.Density,m_args.Sfin,Model_Coeff);

            //Calculate Vehicle Model
            M = Model::compute_M(m_args.Mass,Model_Coeff,m_args.zG);

            model_coef_init = model_coef_init + 1;
            }
       
            C = Model::compute_C(m_args.Mass,Model_Coeff,m_args.zG,vel_filter);

            G = Model::compute_G(Model_Coeff,m_args.zG,euler_angles);

            L = Model::compute_L(vel_filter,m_args.l,Model_Coeff);

            Tau = Model::compute_Tau(thruster,servo_pos,vel_filter,Model_Coeff);

            Y = -Tau + C  * vel_filter + M * acc_filter + G + L * vel_filter;

            /*Continuous Least Squares*/

            /*Longitudinal Linear Velocity Damping*/

            try{

            phi_x(0,0) = -vel_filter(0);
            phi_x(1,0) = -std::abs(vel_filter(0)) * vel_filter(0);

            e_x(0) = phi_x(0) * theta_x(0) + phi_x(1) * theta_x(1) - Y(0);

            //std::cout<<e_x(0)<<std::endl;

            dP_dt_x = - P_x * phi_x * transpose(phi_x) * P_x;

            std::cout<<dP_dt_x<<std::endl;

            CLS_P_delta_x = delta_CLS_P_x.getDelta();

            if(CLS_P_delta_x == -1)
            {
            CLS_P_delta_x = 0.05;
            }

            P_x = P_x + dP_dt_x * CLS_P_delta_x;

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
            phi_k(1,0) = ( servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * pow(vel_filter(0),2.0);
            phi_k(2,0) = -vel_filter(3);
            phi_k(3,0) = -std::abs(vel_filter(3)) * vel_filter(3);

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

            }
            catch(...){}
            /***********************/


            /*Lateral linear velocity Damping*/
            try{

            phi_y(0,0) = vel_filter(1);
            phi_y(1,0) = vel_filter(5);
            phi_y(2,0) = std::abs(vel_filter(1)) * vel_filter(1);
            phi_y(3,0) = std::abs(vel_filter(5)) * vel_filter(5);

            e_y(0) = phi_y(0) * theta_y(0) + phi_y(1) * theta_y(1) + phi_y(2) * theta_y(2) + phi_y(3) * theta_y(3) - Y(1);

            dP_dt_y = - P_y * phi_y * transpose(phi_y) * P_y;

            CLS_P_delta_y = delta_CLS_P_y.getDelta();

            if(CLS_P_delta_y == -1)
            {
            CLS_P_delta_y = 0.05;
            }

            P_y = P_y + dP_dt_y * CLS_P_delta_y;

            std::cout<<P_y<<std::endl;

            dtheta_dt_y = -P_y * phi_y * e_y;

            CLS_theta_delta_y = delta_CLS_theta_y.getDelta();

            if(CLS_theta_delta_y == -1)
            {
            CLS_theta_delta_y = 0.05;
            }

            theta_y = theta_y + dtheta_dt_y * CLS_theta_delta_y;
            inf("theta_y");
            std::cout<<theta_y<<std::endl;

            }
            catch(...){}
            /***********************/

            /*Vertical angular velocity Damping*/
            try{

            phi_r(0,0) = vel_filter(1);
            phi_r(1,0) = vel_filter(5);
            phi_r(2,0) = std::abs(vel_filter(1)) * vel_filter(1);
            phi_r(3,0) = std::abs(vel_filter(5)) * vel_filter(5);

            e_r(0) = phi_r(0) * theta_r(0) + phi_r(1) * theta_r(1) + phi_r(2) * theta_r(2) + phi_r(3) * theta_r(3) - Y(5);

            dP_dt_r = - P_r * phi_r * transpose(phi_r) * P_r;

            CLS_P_delta_r = delta_CLS_P_r.getDelta();

            if(CLS_P_delta_r == -1)
            {
            CLS_P_delta_r = 0.05;
            }

            P_r = P_r + dP_dt_r * CLS_P_delta_r;

            std::cout<<P_r<<std::endl;

            dtheta_dt_r = -P_r * phi_r * e_r;

            CLS_theta_delta_r = delta_CLS_theta_r.getDelta();

            if(CLS_theta_delta_r == -1)
            {
            CLS_theta_delta_r = 0.05;
            }

            theta_r = theta_r + dtheta_dt_r * CLS_theta_delta_y;
            inf("theta_r");
            std::cout<<theta_r<<std::endl;

            }
            catch(...){}
            /***********************/


std::cout<<vel_filter<<std::endl;


      }
    };
  }
}

DUNE_TASK
