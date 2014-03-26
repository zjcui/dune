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

      // Damping Matrix Terms
      static const float X_u = 2.4;
      static const float Y_v = 23;
      //static const float Y_r = 11.5;
      static const float Z_w = 23;
      static const float Z_q = 11.5;
      static const float K_p = 0.3;
      static const float M_q = 9.7;
      static const float M_w = 3.1;
      static const float N_r = 9.7;
      static const float N_v = 3.1;

      static const float X_uabsu = 2.4;
      static const float Y_vabsv = 80;
      static const float Y_rabsr = -0.3;
      static const float Z_wabsw = 80;
      static const float Z_qabsq = 0.3;
      static const float K_pabsp = 6e-4;
      static const float M_qabsq = 9.1;
      static const float M_wabsw = -1.5;
      static const float N_rabsr = 9.1;
      static const float N_vabsv = 1.5;

      struct Arguments
      {
        //Resolve Entity string
        std::string imu_entities;
        std::string ahrs_entities;
        double Mass;
        double a;
        double b;
        double c;
        double Volume;
        double zG;
      };

      struct Task: public DUNE::Tasks::Periodic
      {

        double x_parametros[2];
        double y_parametros[4];
        double z_parametros[4];
        double p_parametros[4];
        double q_parametros[4];
        double r_parametros[4];

        double velocity_filtered[6];

        double contador;
        double debug_delta1;
        double debug_delta;
        double identification_delta;
	double euler_angles[3];
 	double velocities[6];
        double velocities_ant[6];

        double CLS_P_delta_x;
        double CLS_theta_delta_x;
        double CLS_P_delta_z;
        double CLS_theta_delta_z;
        double PE_delta_z;
        double PE_delta_x;


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
        Math::Matrix vel;

        Math::Matrix M;
        Math::Matrix C;
        Math::Matrix D;
        Math::Matrix G;
        Math::Matrix L;
        Math::Matrix Tau;
        Math::Matrix Y;

        Math::Matrix A_x;
        Math::Matrix Y_x;
        Math::Matrix x_parameters;

        Math::Matrix A_y;
        Math::Matrix Y_y;
        Math::Matrix y_parameters;

        Math::Matrix A_z;
        Math::Matrix Y_z;
        Math::Matrix z_parameters;

        Math::Matrix A_p;
        Math::Matrix Y_p;
        Math::Matrix p_parameters;

        Math::Matrix A_q;
        Math::Matrix Y_q;
        Math::Matrix q_parameters;

        Math::Matrix A_r;
        Math::Matrix Y_r;
        Math::Matrix r_parameters;

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

Math::Matrix PE_z;
Math::Matrix PE_x;


        Math::Matrix aceleration_debug;
        Math::Matrix velocity_debug;
        Math::Matrix nu_dot_debug;
        Math::Matrix nu_debug;

        //! Time window between values.
        DUNE::Time::Delta delta_identification;
        DUNE::Time::Delta delta_debug;
        DUNE::Time::Delta delta_debug1;
        DUNE::Time::Delta delta_CLS_P_x;
        DUNE::Time::Delta delta_CLS_theta_x;
        DUNE::Time::Delta delta_CLS_P_z;
        DUNE::Time::Delta delta_CLS_theta_z;
        DUNE::Time::Delta delta_PE_z;
        DUNE::Time::Delta delta_PE_x;
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

          CLS_P_delta_x = 0;
          CLS_theta_delta_x = 0;
          CLS_P_delta_z = 0;
          CLS_theta_delta_z = 0;

          PE_delta_z = 0;
          PE_delta_x = 0;

          identification_delta = 0;
          debug_delta = 0;
          contador = 0;

          std::memset(&servo_pos, 0, sizeof(servo_pos));

          std::memset(&x_parametros,0,sizeof(x_parametros));
          std::memset(&y_parametros,0,sizeof(y_parametros));
          std::memset(&z_parametros,0,sizeof(z_parametros));
          std::memset(&p_parametros,0,sizeof(p_parametros));
          std::memset(&q_parametros,0,sizeof(q_parametros));
          std::memset(&r_parametros,0,sizeof(r_parametros));

          std::memset(&velocity_filtered,0,sizeof(velocity_filtered));

          // Identification Matrices
          acc_identification.resizeAndFill(6,1,0.0);
          vel_identification.resizeAndFill(6,1,0.0);
          vel.resizeAndFill(6,1,0.0);

          M.resizeAndFill(6,6,0.0);
          C.resizeAndFill(6,6,0.0);
          D.resizeAndFill(6,6,0.0);
          G.resizeAndFill(6,1,0.0);
          L.resizeAndFill(6,6,0.0);
          Tau.resizeAndFill(6,1,0.0);
          Y.resizeAndFill(6,1,0.0);

          A_x.resizeAndFill(2,2,0.0);
          Y_x.resizeAndFill(2,1,0.0);
          x_parameters.resizeAndFill(2,1,0.0);

          A_y.resizeAndFill(4,4,0.0);
          Y_y.resizeAndFill(4,1,0.0);
          y_parameters.resizeAndFill(4,1,0.0);

          A_z.resizeAndFill(4,4,0.0);
          Y_z.resizeAndFill(4,1,0.0);
          z_parameters.resizeAndFill(4,1,0.0);

          A_p.resizeAndFill(4,4,0.0);
          Y_p.resizeAndFill(4,1,0.0);
          p_parameters.resizeAndFill(4,1,0.0);

          A_q.resizeAndFill(4,4,0.0);
          Y_q.resizeAndFill(4,1,0.0);
          q_parameters.resizeAndFill(4,1,0.0);

          A_r.resizeAndFill(4,4,0.0);
          Y_r.resizeAndFill(4,1,0.0);
          r_parameters.resizeAndFill(4,1,0.0);


e_x.resizeAndFill(1,1,0.0);
dP_dt_x.resizeAndFill(2,2,0.0);
P_x.resizeAndFill(2,2,2);
dtheta_dt_x.resizeAndFill(2,1,0.0);
theta_x.resizeAndFill(2,1,2.4);
phi_x.resizeAndFill(2,1,0.0);

e_z.resizeAndFill(1,1,0.0);
dP_dt_z.resizeAndFill(4,4,0.0);
P_z.resizeAndFill(4,4,0);
P_z(0,0)=0.1;
P_z(1,1)=0.1;
P_z(2,2)=0.2;
P_z(3,3)=0.1;
dtheta_dt_z.resizeAndFill(4,1,0.0);
theta_z.resizeAndFill(4,1,0.0);
theta_z(0,0)=23;
theta_z(1,0)=11.5;
theta_z(2,0)=80;
theta_z(3,0)=0.3;
phi_z.resizeAndFill(4,1,0.0);

PE_z.resizeAndFill(4,4,0.0);
PE_x.resizeAndFill(2,2,0.0);

          aceleration_debug.resizeAndFill(6,1,0.0);
          velocity_debug.resizeAndFill(6,1,0.0);
          nu_dot_debug.resizeAndFill(6,1,0.0);
          nu_debug.resizeAndFill(6,1,0.0);


          //Register Consumers
          bind<IMC::EulerAngles>(this);
          bind<IMC::AngularVelocity>(this);
          bind<IMC::GroundVelocity>(this);
          bind<IMC::ServoPosition>(this);
          bind<IMC::SetThrusterActuation>(this);
          bind<IMC::EntityState>(this);
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

            L = Identification::compute_L(velocity_filtered);

            Tau = Identification::compute_Tau(thruster,servo_pos,velocity_filtered);

            vel(0)=velocities[0];
            vel(1)=velocities[1];
            vel(2)=velocities[2];
            vel(3)=velocities[3];
            vel(4)=velocities[4];
            vel(5)=velocities[5];

            Y = Tau - C  * vel_identification - M * acc_identification - G - L * vel_identification;


/*Continuous Least Squares*/

/*Longitudinal Linear Damping*/

try{

phi_x(0,0) = vel_identification(0);
phi_x(1,0) = std::abs(vel_identification(0)) * vel_identification(0);

PE_delta_x = delta_PE_x.getDelta();

PE_x = phi_x * transpose(phi_x) * PE_delta_x;

//std::cout<<PE_x<<std::endl;

e_x(0) = phi_x(0) * theta_x(0) + phi_x(1) * theta_x(1) - Y(0);

//std::cout<<e_x(0)<<std::endl;

dP_dt_x = - P_x * phi_x * transpose(phi_x) * P_x;

//std::cout<<dP_dt_x<<std::endl;

CLS_P_delta_x = delta_CLS_P_x.getDelta();

P_x = P_x + dP_dt_x * CLS_P_delta_x;

//std::cout<<P_x<<std::endl;

dtheta_dt_x = -P_x * phi_x * e_x;

CLS_theta_delta_x = delta_CLS_theta_x.getDelta();

theta_x = theta_x + dtheta_dt_x * CLS_theta_delta_x;

//std::cout<<theta_x<<std::endl;

}
catch(...){}
/*****************************/

/*Vertical Linear Damping*/
try{

phi_z(0,0) = vel_identification(2);
phi_z(1,0) = vel_identification(4);
phi_z(2,0) = std::abs(vel_identification(2)) * vel_identification(2);
phi_z(3,0) = std::abs(vel_identification(4)) * vel_identification(4);

PE_delta_z = delta_PE_z.getDelta();

PE_z = PE_z + phi_z * transpose(phi_z) * PE_delta_z * 1 / PE_delta_z;

//std::cout<<PE_z<<std::endl;

e_z(0) = phi_z(0) * theta_z(0) + phi_z(1) * theta_z(1) + phi_z(2) * theta_z(2) + phi_z(3) * theta_z(3) - Y(2);

dP_dt_z = - P_z * phi_z * transpose(phi_z) * P_z;

CLS_P_delta_z = delta_CLS_P_z.getDelta();

P_z = P_z + dP_dt_z * CLS_P_delta_z;

std::cout<<P_z<<std::endl;

dtheta_dt_z = -P_z * phi_z * e_z;

CLS_theta_delta_z = delta_CLS_theta_z.getDelta();

theta_z = theta_z + dtheta_dt_z * CLS_theta_delta_z;
inf("theta");
std::cout<<theta_z<<std::endl;
}
catch(...){}
/***********************/

/**************************/


/*Longitudinal linear damping parameters*/

            //A_x = Identification::compute_A(velocity_filtered[0],std::abs(velocity_filtered[0])*velocity_filtered[0],0,0, A_x);


          // Y_x = Identification::compute_Y(velocity_filtered[0],std::abs(velocity_filtered[0])*velocity_filtered[0], 0, 0, Y(0), Y_x);

/***************************************/

/*Lateral linear damping parameters*/

         //   A_y = Identification::compute_A(velocity_filtered[1],velocity_filtered[5], std::abs(velocity_filtered[1])*velocity_filtered[1], std::abs(velocity_filtered[5])*velocity_filtered[5], A_y);


          //  Y_y = Identification::compute_Y(velocity_filtered[1],velocity_filtered[5], std::abs(velocity_filtered[1])*velocity_filtered[1], std::abs(velocity_filtered[5])*velocity_filtered[5], Y(1), Y_y);

/***************************************/

/*Vertical linear damping parameters*/

           // A_z = Identification::compute_A(velocity_filtered[2],velocity_filtered[4], std::abs(velocity_filtered[2])*velocity_filtered[2], std::abs(velocity_filtered[4])*velocity_filtered[4], A_z);


           // Y_z = Identification::compute_Y(velocity_filtered[2],velocity_filtered[4], std::abs(velocity_filtered[2])*velocity_filtered[2], std::abs(velocity_filtered[4])*velocity_filtered[4], Y(2), Y_z);

/***********************************/

/*Longitudinal rotational damping parameters*/

          //  A_p = Identification::compute_A(velocity_filtered[3],std::abs(velocity_filtered[3])*velocity_filtered[3], (servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * pow(velocity_filtered[0], 2.0), Tau(0), A_p);


           // Y_p = Identification::compute_Y(velocity_filtered[3],std::abs(velocity_filtered[3])*velocity_filtered[3], (servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * pow(velocity_filtered[0], 2.0), Tau(0), Y(3), Y_p);


/********************************************/

/*Lateral rotational damping parameters*/

          //  A_q = Identification::compute_A(velocity_filtered[2],velocity_filtered[4], std::abs(velocity_filtered[2])*velocity_filtered[2], std::abs(velocity_filtered[4])*velocity_filtered[4], A_q);


           // Y_q = Identification::compute_Y(velocity_filtered[2],velocity_filtered[4], std::abs(velocity_filtered[2])*velocity_filtered[2], std::abs(velocity_filtered[4])*velocity_filtered[4], Y(4), Y_q);


/********************************************/

/*Lateral rotational damping parameters*/

           // A_r = Identification::compute_A(velocity_filtered[1],velocity_filtered[5], std::abs(velocity_filtered[1])*velocity_filtered[1], std::abs(velocity_filtered[5])*velocity_filtered[5], A_r);


           // Y_r = Identification::compute_Y(velocity_filtered[1],velocity_filtered[5], std::abs(velocity_filtered[1])*velocity_filtered[1], std::abs(velocity_filtered[5])*velocity_filtered[5], Y(5), Y_r);


/********************************************/
//inf("Contador");
//std::cout<<contador<<std::endl;

try{

/*x_parameters = inverse (A_x) * Y_x;
inf("X parameters");
std::cout<<x_parameters<<std::endl;*/

/*std::cout<<x_parameters(0)*vel_debug[0] + x_parameters(1) * std::abs(vel_debug[0])*vel_debug[0] - Y(0)<<std::endl;*/

//inf("Y parameters");
/*y_parameters = inverse (A_y) * Y_y;
std::cout<<y_parameters<<std::endl;*/

//inf("Z");
/*z_parameters = inverse (A_z) * Y_z;
std::cout<<z_parameters<<std::endl;*/


/*p_parameters = inverse(A_p) * Y_p;
inf("P parameters");
std::cout<<p_parameters<<std::endl;*/

//std::cout<<p_parameters(0) * vel_debug[3] + p_parameters(1) * vel_debug[3]*std::abs(vel_debug[3]) + (servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * pow(vel_debug[0],2.0) * p_parameters(2) + p_parameters(3)*Tau(0) - Y(3)<<std::endl;

//inf("Q");
/*q_parameters = inverse(A_q) * Y_q;
std::cout<<q_parameters<<std::endl;*/

//inf("R");
/*r_parameters = inverse(A_r) * Y_r;
std::cout<<r_parameters<<std::endl;*/

contador=contador+1;

}
catch(...){
//do nothing
}

/*
if(contador>200){
setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);

            m_uncertainty.x = tmp(0);
            m_uncertainty.y = tmp(1);
            m_uncertainty.z = tmp(2);
            m_uncertainty.phi = tmp(3);
}
contador=contador+1;
std::cout<<contador<<std::endl;
}
catch(...)
{
//setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_INIT);
}

            */m_uncertainty.x = velocity_debug(0);//acc_identification(0);
            m_uncertainty.y = velocity_debug(1);//acc_identification(1);
            m_uncertainty.z = velocity_debug(2);//acc_identification(2);
            m_uncertainty.phi = velocity_debug(3);//acc_identification(3);
            m_uncertainty.theta = velocity_debug(4);//acc_identification(4);
            m_uncertainty.psi = velocity_debug(5);//acc_identification(5);
            m_uncertainty.u = vel_identification(0);
            m_uncertainty.v = vel_identification(1);
            m_uncertainty.w = vel_identification(2);
            m_uncertainty.p = vel_identification(3);
            m_uncertainty.q = vel_identification(4);
            m_uncertainty.r = vel_identification(5);
            dispatch( m_uncertainty );


// Compute AUV Dynamic i Body-fixed Frame

if(contador<=-1000)
{
double velocidade[6] = {velocity_debug(0),velocity_debug(1),velocity_debug(2),velocity_debug(3),velocity_debug(4),velocity_debug(5)};

            Math::Matrix C1(6,6,0.0); C1 = Identification::compute_C(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.Volume,m_args.zG,velocidade);

double angulo_euler[3]={nu_debug(3),nu_debug(4),nu_debug(5)};

            Math::Matrix G1(6,1,0.0); G1 = Identification::compute_G(m_args.Mass,m_args.Volume,m_args.zG,angulo_euler);

            Math::Matrix L1(6,6,0.0); L1 = Identification::compute_L(velocidade);

            Math::Matrix tau1(6,1,0.0); tau1 = Identification::compute_Tau(thruster,servo_pos,velocidade);
tau1(3)=( servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * -p_parameters(2)/*-0.2481*/ * pow(velocity_debug(0),2.0) + -p_parameters(3)/*0.006161*/ * tau1(0,0);
/*tau1(0)=10;
tau1(3) = -0.06*tau1(0);*/
std::cout<<thruster<<std::endl;
std::cout<<tau1(0)<<std::endl;

/*[2014/03/21 12:04:54] - MSG [Identification.AUV] >> X parameters
2.30948 
1.61104 

-29.6366 
-69.183 
-36.0905 
294.49 

-21.2147 
79.2993 
-298.179 
-898.948 

[2014/03/21 12:04:54] - MSG [Identification.AUV] >> P parameters
-3.94936 
2.07296 
-0.162089 
-0.0254026 

19.6471 
4.82154 
-126.042 
-329.783 

-16.0215 
7.23577 
18.0579 
-98.7967 */

x_parametros[0]=x_parameters(0);//2.28;//-x_parameters(0);//-2.8;//x_parameters(0);
x_parametros[1]=x_parameters(1);//1.66;//-x_parameters(1);//-1.6;//x_parameters(1);

y_parametros[0]=y_parameters(0);
y_parametros[1]=y_parameters(1);
y_parametros[2]=y_parameters(2);
y_parametros[3]=y_parameters(3);

z_parametros[0]=Z_w;//z_parameters(0);
z_parametros[1]=Z_q;//z_parameters(1);
z_parametros[2]=Z_wabsw;//z_parameters(2);
z_parametros[3]=Z_qabsq;//z_parameters(3);

p_parametros[0]=-p_parameters(0);//1.399;//-0.82;//-p_parameters(0);
p_parametros[1]=-p_parameters(1);//-1.662;//-0.95;//-p_parameters(1);

q_parametros[0]=M_w;//q_parameters(0);
q_parametros[1]=M_q;//q_parameters(1);
q_parametros[2]=M_wabsw;//q_parameters(2);
q_parametros[3]=M_qabsq;//q_parameters(3);

r_parametros[0]=r_parameters(0);
r_parametros[1]=r_parameters(1);
r_parametros[2]=r_parameters(2);
r_parametros[3]=r_parameters(3);

M = Identification::compute_M(m_args.Mass,m_args.a,m_args.b,m_args.c,m_args.Volume,m_args.zG);

//Math::Matrix D1(6,6,0.0); D1 = Identification::compute_D(velocidade,x_parametros,y_parametros,z_parametros,p_parametros,q_parametros,r_parametros);

//Math::Matrix D1(6,6,0.0); D1 = Identification::compute_D(velocidade, /*X_u*/x_parametros[0], /*Y_v*/y_parametros[0], /*Y_r11.5*/y_parametros[1],/*Z_w*/z_parametros[0], /*Z_q*/z_parametros[1], /*K_p*/p_parametros[0], /*M_q*/q_parametros[1], /*M_w*/q_parametros[0], /*N_r*/r_parametros[1], /*N_v*/r_parametros[0] , /*X_uabsu*/x_parametros[1], /*Y_vabsv*/y_parametros[2], /*Y_rabsr*/y_parametros[3], /*Z_wabsw*/z_parametros[2], /*Z_qabsq*/z_parametros[3], /*K_pabsp*/p_parametros[1], /*M_qabsq*/q_parametros[3], /*M_wabsw*/q_parametros[2], /*N_rabsr*/r_parametros[3], /*N_vabsv*/r_parametros[2]);

Math::Matrix D1(6,6,0.0); D1 = Identification::compute_D1(velocidade, x_parametros[0], Y_v, /*Y_r*/-11.5,/*Z_w*/z_parametros[0], /*Z_q*/z_parametros[1], p_parametros[0], /*M_q*/q_parametros[1], /*M_w*/q_parametros[0], N_r, N_v , x_parametros[1], Y_vabsv, Y_rabsr, /*Z_wabsw*/z_parametros[2], /*Z_qabsq*/z_parametros[3], p_parametros[1], /*M_qabsq*/ q_parametros[3], /*M_wabsw*/q_parametros[2], N_rabsr, N_vabsv);


aceleration_debug = inverse(M) * (tau1 - C1 * velocity_debug - D1 * velocity_debug - G1 - L1 * velocity_debug );
/*aceleration_debug(2)=0;
aceleration_debug(5)=0;
aceleration_debug(1)=0;
aceleration_debug(4)=0;*/
debug_delta = delta_debug.getDelta();

velocity_debug = velocity_debug + aceleration_debug * debug_delta;

std::cout<<velocity_debug<<std::endl;

          Math::Matrix ea(3,1);
          ea(0) = Math::Angles::normalizeRadian(nu_debug(3));
          ea(1) = Math::Angles::normalizeRadian(nu_debug(4));
          ea(2) = Math::Angles::normalizeRadian(nu_debug(5));

          Math::Matrix J(6,6,0.0); J = ea.toDCMSMO();

nu_dot_debug = J * velocity_debug;

debug_delta1 = delta_debug1.getDelta();

nu_debug=nu_debug+nu_dot_debug * debug_delta1;

}
      }
    };
  }
}

DUNE_TASK
