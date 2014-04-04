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

        //Identified Damping Matrix Terms
        static const float X_u = 2.1;
        static const float Y_v = 23;//33;
        static const float Y_r = -11.5;//-1.42;
        static const float Z_w = 23;//33;
        static const float Z_q = 11.5;//1.42;
        static const float K_p = 0.75;
        static const float M_w = -3.1;//-11.25;
        static const float M_q = 9.7;//-8;
        static const float N_v = 3.1;//11.25;
        static const float N_r = 9.7;//-8;

        static const float X_uabsu = 2.1;
        static const float Y_vabsv = 80;//90;
        static const float Y_rabsr = -0.3;//9.77;
        static const float Z_wabsw = 80;//90;
        static const float Z_qabsq = 0.3;//-9.77;
        static const float K_pabsp = 0.85;
        static const float M_wabsw = -1.5;//-2.2;
        static const float M_qabsq = 9.1;//5.6;
        static const float N_vabsv = 1.5;//2.2;
        static const float N_rabsr = 9.1;//5.6;


      struct Arguments
      {

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
         int gps_counter;
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

          //! Send message to Estimated State and Navigation Uncertainty
          IMC::EstimatedState m_est;
          IMC::NavigationUncertainty m_uncertainty;

         Arguments m_args;

        Task(const std::string& name, Tasks::Context& ctx):
          Periodic(name, ctx)
        {

          /*Sliding Mode Observer Boundary Layers*/
          param("Velocity Boundary Layer", m_args.vel_bound)
          .defaultValue("0.05")
          .description("Boundary Layer Size");

          param("Position Boundary Layer", m_args.nu_bound)
          .defaultValue("0.5")
          .description("Boundary Layer Size");

          /*Sliding Mode Observer Entities*/
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

         /*Rotation Matrix*/
         J.resizeAndFill(6,6,0.0);

         /*Filter Variables*/
         acc_filter.resizeAndFill(6,1,0.0);
         vel_filter.resizeAndFill(6,1,0.0);
         filter_delta = 0;

         /*Entity Variables*/
         flag_imu_active = 0;
         flag_ahrs_active = 0;
         imu_entity_id = 0;
         ahrs_entity_id = 0;

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
         gps_counter = 0;

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

          if (msg->validity & IMC::GpsFix::GFV_VALID_POS)
          {
            if (msg->hacc < gps_treshold)
            {
              gps_fix[0] = msg->lat;
              gps_fix[1] = msg->lon;
              gps_fix[2] = msg->height;
              flag_valid_pos = 1;

              if(init_nu_est == 0)
              gps_counter = gps_counter + 1;

            }

            if (flag_initial_point == 0)
            {
              gps_initial_point[0] = msg->lat;
              gps_initial_point[1] = msg->lon;
              gps_initial_point[2] = msg->height;
              flag_initial_point = 1;
            }

            if (msg->hacc >= gps_treshold || !(msg->validity & IMC::GpsFix::GFV_VALID_POS))
              flag_valid_pos = 0;
          }
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

            /********************************************************************/

            if(task_management == 1)
            {

            /**************Avoid Singularaties in Rotation Matrix***************/

            if(nu(4,0)>1.56 && nu(4,0)<1.58)
              nu(4,0) = 1.56;

            if(nu(4,0)<-1.56 && nu(4,0)>-1.58)
              nu(4,0) = -1.56;

            /********************************************************************/

            /*******************GPS Signal Acquisition**************************/

            if (flag_valid_pos == 1)
            {
            Coordinates::WGS84::getNEBearingAndRange(gps_initial_point[0], gps_initial_point[1], gps_fix[0], gps_fix[1], &bearing, &range);

            nu(0,0) = range * std::cos(bearing);
            nu(1,0) = range * std::sin(bearing);
            nu(2,0) = depth;

            if(flag_imu_active == 1)
            {
            J = Aux::compute_J(euler_angles);
            vel = Matrix(velocities,6,1);
            orientation_delta = delta_orientation.getDelta();
            if(orientation_delta == -1)
            {
            orientation_delta = 0.05;
            }
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

            if(init_nu_est == 0 && gps_counter == 2)
            {
            nu_est(0,0) = range * std::cos(bearing);
            nu_est(1,0) = range * std::sin(bearing);
            nu_est(2,0) = depth;
            init_nu_est = init_nu_est + 1;
            }

            }

            /********************************************************************/


            /*********************Position from measured Velocities**************/

            if(flag_valid_pos == 0)
            {

            J = Aux::compute_J(euler_angles);

            vel = Matrix(velocities,6,1);

            posfromvel_delta = delta_posfromvel.getDelta();
            if(posfromvel_delta == -1)
            {
            posfromvel_delta = 0.05;
            }
            nu_dot = J * vel;
            nu = nu + nu_dot * posfromvel_delta;

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

            //Calculate Vehicle Model
            M = Model::compute_M(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.zG);

            C = Model::compute_C(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.zG,velocities_est);

            D = Model::compute_D(velocities_est, X_u, Y_v, Y_r, Z_w, Z_q, K_p, M_w,  M_q, N_v,  N_r,  X_uabsu,  Y_vabsv,  Y_rabsr,  Z_wabsw,  Z_qabsq,  K_pabsp,  M_wabsw,  M_qabsq, N_vabsv,  N_rabsr);

            G = Model::compute_G(m_args.Mass,m_args.Volume,m_args.zG,euler_angles_est);

            L = Model::compute_L(velocities_est,m_args.l,m_args.d,m_args.Density,m_args.Sfin);

            Tau = Model::compute_Tau(thruster,servo_pos,velocities_est,m_args.l,m_args.Density,m_args.Sfin);

            J = Aux::compute_J(euler_angles);

            J_delta = delta_J.getDelta();
            if(J_delta == -1)
            J_delta=0.05;

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
            {
            vel_est_delta = 0.05;
            }

            vel_est = vel_est + acc_est * vel_est_delta;

           // inf("vel_est");std::cout<<vel_est<<std::endl;

            tanghyper = GainMatrices::compute_tanh(nu_error,m_args.nu_bound);

            nu_dot_est = -alfa1 * nu_error + J * vel_est - k1 * tanghyper;

//inf("nu_dot_est");std::cout<<nu_dot_est<<std::endl;
            nu_est_delta = delta_nu_est.getDelta();
            if(nu_est_delta == -1)
            {
            nu_est_delta = 0.05;
            }

           nu_est = nu_est + nu_dot_est * nu_est_delta;

            nu_est(3,0) = Math::Angles::normalizeRadian( nu_est(3,0) );
            nu_est(4,0) = Math::Angles::normalizeRadian( nu_est(4,0) );
            nu_est(5,0) = Math::Angles::normalizeRadian( nu_est(5,0) );

    //       inf("nu_est");std::cout<<nu_est<<std::endl;

           euler_angles_est[0]=nu_est(3);
           euler_angles_est[1]=nu_est(4);
           euler_angles_est[2]=nu_est(5);

           velocities_est[0] = vel_est(0);
           velocities_est[1] = vel_est(1);
           velocities_est[2] = vel_est(2);
           velocities_est[3] = vel_est(3);
           velocities_est[4] = vel_est(4);
           velocities_est[5] = vel_est(5);


            /********************************************************************/


            //Filters velocities before send to estimated state
            /*filter_delta = delta_filter.getDelta();
            if(filter_delta == -1)
            {
            filter_delta = 0.05;
            }
            acc_filter = Aux::compute_acc(velocities,vel_filter, filter_delta);
            vel_filter = vel_filter + acc_filter * filter_delta; */   

            //std::cout<<vel_filter<<std::endl;

            m_est.x = nu(0,0);
            m_est.y = nu(1,0);
            m_est.z = gps_initial_point[2] + nu(2,0);
            m_est.phi = nu(3,0);
            m_est.theta = nu(4,0);
            m_est.psi = nu(5,0);
            m_est.u = vel_est(0,0);
            m_est.v = vel_est(1,0);
            m_est.w = vel_est(2,0);
            m_est.p = vel_est(3,0);
            m_est.q = vel_est(4,0);
            m_est.r = vel_est(5,0);
            // 1st Method - Velocity in the navigation frame.
            /*Coordinates::BodyFixedFrame::toInertialFrame(m_est.phi, m_est.theta, m_est.psi,
                                                         m_est.u,   m_est.v,     m_est.w,
                                                         &m_est.vx, &m_est.vy,   &m_est.vz);*/
            // 2scd Method
            m_est.vx=nu_dot_est(0);
            m_est.vy=nu_dot_est(1);
            m_est.vz=nu_dot_est(2);
            m_est.lat = gps_initial_point[0];
            m_est.lon = gps_initial_point[1];
            m_est.height = gps_initial_point[2];
            m_est.depth = nu_est(2,0);
            dispatch( m_est );


           /* m_uncertainty.x = velocities[0];
            m_uncertainty.y = velocities[1];
            m_uncertainty.z = velocities[2];
            m_uncertainty.phi = velocities[3];
            m_uncertainty.theta = velocities[4];
            m_uncertainty.psi = velocities[5];
            m_uncertainty.u = vel_filter(0);
            m_uncertainty.v = vel_filter(1);
            m_uncertainty.w = vel_filter(2);
            m_uncertainty.p = vel_filter(3);
            m_uncertainty.q = vel_filter(4);
            m_uncertainty.r = vel_filter(5);
            dispatch( m_uncertainty );*/
            }

         }
        }
      };
    }
  }
}

DUNE_TASK
