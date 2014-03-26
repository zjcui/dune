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

#ifndef NAVIGATION_AUV_SMO_IDENTIFICATION_H
#define NAVIGATION_AUV_SMO_IDENTIFICATION_H

#include <DUNE/DUNE.hpp>

namespace Identification
{
  namespace AUV
  {
      using DUNE_NAMESPACES;

      class Identification
      {
      public:

        /*Compute Vehicle Model*/
        
        static Matrix
        compute_acc(double velocities[6], Matrix v_bar, double delta_t)
        {

          Matrix T = Matrix(6,6, 0.0);
          T(0,0) = 1*delta_t;
          T(1,1) = 1*delta_t;
          T(2,2) = 1*delta_t;
          T(3,3) = 1*delta_t;
          T(4,4) = 1*delta_t;
          T(5,5) = 1*delta_t;

          Matrix v = Matrix(6,1, 0.0);
          v(0, 0) = velocities[0];
          v(1, 0) = velocities[1];
          v(2, 0) = velocities[2];
          v(3, 0) = velocities[3];
          v(4, 0) = velocities[4];
          v(5, 0) = velocities[5];

          Matrix acc = Matrix(6,1, 0.0);
          acc = inverse(T) * 0.05 * ( v - v_bar);

          return acc;
        }

        static Matrix
        compute_M(double Mass, double a, double b, double c, double Volume, double zG)
        {
	  double Ixx = Mass / 5 * ( pow(b, 2.0) + pow(c, 2.0) );

          double l_r = 0;

          if(b>=c)
            l_r=b;
          if(c>b)
            l_r=c;

          double Iyy = Mass * ( pow(a*2, 2.0)/20 + pow(l_r, 2.0)/5 );

          double Izz = Mass * ( pow(a*2, 2.0)/20 + pow(l_r, 2.0)/5 );

          double e = 1 - pow(b / a, 2.0);

          double alpha_0 = ( 2 * ( 1 - pow(e, 2.0) ) / pow(e, 3.0) ) * ( (1.0 / 2.0) * std::log( ( 1 + e ) / ( 1 - e ) ) - e );

          double betha_0 = 1.0 / pow(e, 2.0) - ( 1 - pow(e, 2.0 ) )/ ( 2 * pow(e, 3.0)  ) * std::log( ( 1 + e ) / ( 1 - e ) );

          double X_dudt = - alpha_0 / (2 - alpha_0) * Mass;

          double Y_dvdt = - betha_0 / (2 - betha_0) * Mass;

          double Z_dwdt = Y_dvdt;

          double K_dpdt = 0;

          double N_drdt = - (1.0/5) * ( pow( ( pow(b, 2.0) - pow(a, 2.0) ), 2.0) * (alpha_0 - betha_0) ) / ( 2 * ( pow(b, 2.0) - pow(a, 2.0) ) + ( pow(b, 2.0) + pow(a, 2.0) ) * ( betha_0 - alpha_0 ) ) * Mass;

          double M_dqdt = N_drdt;

          Math::Matrix M_tmp(6,6);
          M_tmp.resizeAndFill(6,6,0.0);
          M_tmp(0,0) = Mass - X_dudt;
          M_tmp(1,1) = Mass - Y_dvdt;
          M_tmp(2,2) = Mass - Z_dwdt;
          M_tmp(3,3) = Ixx - K_dpdt;
          M_tmp(4,4) = Iyy - M_dqdt;
          M_tmp(5,5) = Izz - N_drdt;
          M_tmp(0,4) = Mass * zG;
          M_tmp(1,3) = - Mass * zG;
          M_tmp(3,1) = - Mass * zG;
          M_tmp(4,0) = Mass * zG;

	  return M_tmp;

        }

        static Matrix
        compute_C(double Mass, double a, double b, double c, double Volume, double zG, double velocities[6])
        {
	  double Ixx = Mass / 5 * ( pow(b, 2.0) + pow(c, 2.0) );

          double l_r = 0;

          if(b>=c)
            l_r=b;
          if(c>b)
            l_r=c;

          double Iyy = Mass * ( pow(a*2, 2.0)/20 + pow(l_r, 2.0)/5 );

          double Izz = Mass * ( pow(a*2, 2.0)/20 + pow(l_r, 2.0)/5 );

          double e = 1 - pow(b / a, 2.0);

          double alpha_0 = ( 2 * ( 1 - pow(e, 2.0) ) / pow(e, 3.0) ) * ( (1.0 / 2.0) * std::log( ( 1 + e ) / ( 1 - e ) ) - e );

          double betha_0 = 1.0 / pow(e, 2.0) - ( 1 - pow(e, 2.0 ) )/ ( 2 * pow(e, 3.0)  ) * std::log( ( 1 + e ) / ( 1 - e ) );

          double X_dudt = - alpha_0 / (2 - alpha_0) * Mass;

          double Y_dvdt = - betha_0 / (2 - betha_0) * Mass;

          double Z_dwdt = Y_dvdt;

          double K_dpdt = 0;

          double N_drdt = - (1.0/5) * ( pow( ( pow(b, 2.0) - pow(a, 2.0) ), 2.0) * (alpha_0 - betha_0) ) / ( 2 * ( pow(b, 2.0) - pow(a, 2.0) ) + ( pow(b, 2.0) + pow(a, 2.0) ) * ( betha_0 - alpha_0 ) ) * Mass;

          double M_dqdt = N_drdt;

          double u = velocities[0];
          double v = velocities[1];
          double w = velocities[2];
          double p = velocities[3];
          double q = velocities[4];
          double r = velocities[5];

          Math::Matrix C_tmp(6,6);
          C_tmp.resizeAndFill(6,6,0.0);
          C_tmp(0,3) = Mass * zG * r;
          C_tmp(0,4) = (Mass - Z_dwdt) * w;
          C_tmp(0,5) = - (Mass - Y_dvdt) * v;
          C_tmp(1,3) = - (Mass - Z_dwdt) * w;
          C_tmp(1,4) = Mass * zG * r;
          C_tmp(1,5) = (Mass - X_dudt) * u;
          C_tmp(2,3) = - Mass * zG * p + (Mass - Y_dvdt) * v;
          C_tmp(2,4) = - Mass * zG * q - (Mass - X_dudt) * u;
          C_tmp(3,0) = - Mass * zG * r;
          C_tmp(3,1) = (Mass - Z_dwdt) * w;
          C_tmp(3,2) = Mass * zG * p - (Mass - Y_dvdt) * v;
          C_tmp(3,4) = (Izz - N_drdt) * r;
          C_tmp(3,5) = -(Iyy - M_dqdt) * q;
          C_tmp(4,0) = - ( Mass - Z_dwdt) * w;
          C_tmp(4,1) = - Mass * zG * r;
          C_tmp(4,2) = Mass * zG *q + (Mass - X_dudt) * u;
          C_tmp(4,3) = - (Izz - N_drdt) * r;
          C_tmp(4,5) = (Ixx - K_dpdt) * p;
          C_tmp(5,0) = (Mass - Y_dvdt) * v;
          C_tmp(5,1) = -(Mass - X_dudt) * u;
          C_tmp(5,3) = (Iyy - M_dqdt) * q;
          C_tmp(5,4) = - (Ixx - K_dpdt) * p;

          return C_tmp;

         }


        static Matrix
        compute_G(double Mass, double Volume, double zG, double euler_angles[3])
        {

          double phi = euler_angles[0];
          double theta = euler_angles[1];
          double psi = euler_angles[2];

          double W = 255;//Mass * 9.8;
          double B = 256;//Volume * 9.8 * 1000;

          Math::Matrix G_tmp(6,1);
          G_tmp.resizeAndFill(6,1,0.0);
          G_tmp(0,0) = (W - B) * std::sin(theta);
          G_tmp(1,0) = -(W - B) * std::cos(theta) * std::sin(phi);
          G_tmp(2,0) = -(W - B) * std::cos(theta) * std::cos(phi);
          G_tmp(3,0) = zG * W * std::cos(theta) * std::sin(phi);
          G_tmp(4,0) = zG * W * std::sin(theta);

          return G_tmp;
        
        }


        static Matrix
        compute_L(double velocities[6])
        {
          Math::Matrix L_tmp(6,6);
          L_tmp.resizeAndFill(6,6,0.0);
          L_tmp(1,1) = -30 * velocities[0];
          L_tmp(1,5) = 7.7 * velocities[0];
          L_tmp(2,2) = -30 * velocities[0];
          L_tmp(2,4) = -7.7 * velocities[0];
          L_tmp(4,4) = -3.1 * velocities[0];
          L_tmp(4,2) = -9.9 * velocities[0];
          L_tmp(5,5) = -3.1 * velocities[0];
          L_tmp(5,1) = 9.9 * velocities[0];

          return -L_tmp;
        }

        static Matrix
        compute_Tau(double thruster,double servo_pos[3],double velocities[6])
        {

          Matrix tau_tmp(6, 1, 0.0);
          /*tau_tmp(0,0) = acc_identification[0]*26;//thruster * 10;
          tau_tmp(1,0) = acc_identification[1]*26;//( servo_pos[1] * 9.6 + servo_pos[2] * 9.6 )  * pow(velocities[0],2.0);
          tau_tmp(2,0) = acc_identification[2]*26;//( servo_pos[0] * -9.6 + servo_pos[3] * -9.6 )  * pow(velocities[0],2.0);
          tau_tmp(3,0) = 0;//( servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * tmp(2)  * pow(velocities[0],2.0) + tmp(3) * tau_tmp(0,0);
          tau_tmp(4,0) = acc_identification[4]*26;//( servo_pos[0] * -/*3.85*//*6.72 + servo_pos[3] * -/*3.85*//*6.72 )  * pow(velocities[0],2.0);
          /*tau_tmp(5,0) = acc_identification[5]*26;//( servo_pos[1] * -/*3.85*//*6.72 + servo_pos[2] * -/*3.85*//*6.72 )  * pow(velocities[0],2.0);*/

          tau_tmp(0,0) = thruster * 10/0.84;//thruster * 10;
          tau_tmp(1,0) = ( servo_pos[1] * 9.6 + servo_pos[2] * 9.6 )  * pow(velocities[0],2.0);
          tau_tmp(2,0) = ( servo_pos[0] * -9.6 + servo_pos[3] * -9.6 )  * pow(velocities[0],2.0);
          tau_tmp(3,0) = ( servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * 1.82  * pow(velocities[0],2.0) + 0.06 * tau_tmp(0,0);
          tau_tmp(4,0) = ( servo_pos[0] * -3.85 + servo_pos[3] * -3.85 )  * pow(velocities[0],2.0);
          tau_tmp(5,0) = ( servo_pos[1] * -3.85 + servo_pos[2] * -3.85 )  * pow(velocities[0],2.0);



          return tau_tmp;
        } 


        static Matrix
        compute_D(double velocities[6], double x_parametros[2], double y_parametros[4], double z_parametros[4], double p_parametros[4], double q_parametros[4], double r_parametros[4])
        {

          double u = velocities[0];
          double v = velocities[1];
          double w = velocities[2];
          double p = velocities[3];
          double q = velocities[4];
          double r = velocities[5];


double D1_vector[36]={x_parametros[0], 0,   0,    0,   0,   0,
                      0,   y_parametros[0], 0,    0,   0,   y_parametros[1],
                      0,   0,   z_parametros[0],  0,   z_parametros[1], 0,
                      0,   0,   0,    p_parametros[0], 0,   0,
                      0,   0,   q_parametros[0],  0,   q_parametros[1], 0,
                      0,   r_parametros[0], 0,    0,   0,   r_parametros[1]};

double D2_vector[36]={x_parametros[1]*std::abs(u), 0,                    0,                    0,                    0,                    0,
                      0,                     y_parametros[2]*std::abs(v), 0,                    0,                    0,                    y_parametros[3]*std::abs(r),
                      0,                     0,                    z_parametros[2]*std::abs(w), 0,                    z_parametros[3]*std::abs(q), 0,
                      0,                     0,                    0,                    p_parametros[1]*std::abs(p), 0,                    0,
                      0,                     0,                    q_parametros[2]*std::abs(w), 0,                    q_parametros[3]*std::abs(q), 0,
                      0,                     r_parametros[2]*std::abs(v), 0,                    0,                    0,                    r_parametros[3]*std::abs(r)};

          return ( Matrix(D1_vector, 6, 6) + Matrix(D2_vector, 6, 6) );

        }


        static Matrix
        compute_D1(double v_estimado[6], float X_u, float Y_v, float Y_r, float Z_w, float Z_q, float K_p, float M_q, float M_w, float N_r, float N_v, float X_uabsu, float Y_vabsv, float Y_rabsr, float Z_wabsw, float Z_qabsq, float K_pabsp, float M_qabsq, float M_wabsw, float N_rabsr, float N_vabsv)
        {
          // Damping Matrix

          double ur = v_estimado[0];
          double vr = v_estimado[1];
          double wr = v_estimado[2];
          double pr = v_estimado[3];
          double qr = v_estimado[4];
          double rr = v_estimado[5];

          double D1_vector[36]={X_u, 0,   0,    0,   0,   0,
                                0,   Y_v, 0,    0,   0,   Y_r,
                                0,   0,   Z_w,  0,   Z_q, 0,
                                0,   0,   0,    K_p, 0,   0,
                                0,   0,   M_w,  0,   M_q, 0,
                                0,   N_v, 0,    0,   0,   N_r};

          double D2_vector[36]={X_uabsu *std::abs(ur), 0,                    0,                    0,                    0,                    0,
                                0,                     Y_vabsv*std::abs(vr), 0,                    0,                    0,                    Y_rabsr*std::abs(rr),
                                0,                     0,                    Z_wabsw*std::abs(wr), 0,                    Z_qabsq*std::abs(qr), 0,
                                0,                     0,                    0,                    K_pabsp*std::abs(pr), 0,                    0,
                                0,                     0,                    M_wabsw*std::abs(wr), 0,                    M_qabsq*std::abs(qr), 0,
                                0,                     N_vabsv*std::abs(vr), 0,                    0,                    0,                    N_rabsr*std::abs(rr)};


          return ( Matrix(D1_vector, 6, 6) + Matrix(D2_vector, 6, 6) );
        }

        /**************************************************/


        /***********Least Mean Square Algorithm***********/

        static Matrix
        compute_A(double phi_1,double phi_2, double phi_3, double phi_4, Math::Matrix A)
        {
        int lin = A.rows();
        int col = A.columns();
        Matrix A_tmp;

        if( lin == 4 && col == 4)
        {
        A_tmp.resizeAndFill(4,4,0.0);

        A_tmp(0,0) = A(0,0) + phi_1 * phi_1;
        A_tmp(0,1) = A(0,1) + phi_1 * phi_2;
        A_tmp(0,2) = A(0,2) + phi_1 * phi_3;
        A_tmp(0,3) = A(0,3) + phi_1 * phi_4;

        A_tmp(1,0) = A(1,0) + phi_2 * phi_1;
        A_tmp(1,1) = A(1,1) + phi_2 * phi_2;
        A_tmp(1,2) = A(1,2) + phi_2 * phi_3;
        A_tmp(1,3) = A(1,3) + phi_2 * phi_4;

        A_tmp(2,0) = A(2,0) + phi_3 * phi_1;
        A_tmp(2,1) = A(2,1) + phi_3 * phi_2;
        A_tmp(2,2) = A(2,2) + phi_3 * phi_3;
        A_tmp(2,3) = A(2,3) + phi_3 * phi_4;

        A_tmp(3,0) = A(3,0) + phi_4 * phi_1;
        A_tmp(3,1) = A(3,1) + phi_4 * phi_2;
        A_tmp(3,2) = A(3,2) + phi_4 * phi_3;
        A_tmp(3,3) = A(3,3) + phi_4 * phi_4;

        }

        if( lin == 2 && col == 2)
        {
        A_tmp.resizeAndFill(2,2,0.0);

        A_tmp(0,0) = A(0,0) + phi_1 * phi_1;
        A_tmp(0,1) = A(0,1) + phi_1 * phi_2;


        A_tmp(1,0) = A(1,0) + phi_2 * phi_1;
        A_tmp(1,1) = A(1,1) + phi_2 * phi_2;

        }

        return A_tmp;

        }


        static Matrix
        compute_Y(double phi_1,double phi_2, double phi_3, double phi_4, double y,  Math::Matrix Y)
        {
        int lin = Y.rows();
        int col = Y.columns();
        Matrix Y_tmp;

        if( lin == 4 && col == 1)
        {
        Y_tmp.resizeAndFill(4,1,0.0);

        Y_tmp(0,0) = Y(0,0) + phi_1 * y;
        Y_tmp(1,0) = Y(1,0) + phi_2 * y;
        Y_tmp(2,0) = Y(2,0) + phi_3 * y;
        Y_tmp(3,0) = Y(3,0) + phi_4 * y;

        }

        if( lin == 2 && col == 1)
        {
        Y_tmp.resizeAndFill(2,1,0.0);

        Y_tmp(0,0) = Y(0,0) + phi_1 * y;
        Y_tmp(1,0) = Y(1,0) + phi_2 * y;

        }

        return Y_tmp;

        }

        /*************************************************/

      };
    }
  }

#endif
