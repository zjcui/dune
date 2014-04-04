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

#ifndef NAVIGATION_AUV_SMO_MODEL_H
#define NAVIGATION_AUV_SMO_MODEL_H

#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace AUV
  {
    namespace SMO
    {
      using DUNE_NAMESPACES;

      class Model
      {
      public:

        /****************************************AUV MODEL MATRICES****************************************/


        static Matrix
        compute_M(double Mass, double a, double b, double c, double zG)
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
        compute_C(double Mass, double a, double b, double c, double zG, double velocities[6])
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
        compute_D(double v_estimado[6], float X_u, float Y_v, float Y_r, float Z_w, float Z_q, float K_p, float M_w, float M_q, float N_v, float N_r, float X_uabsu, float Y_vabsv, float Y_rabsr, float Z_wabsw, float Z_qabsq, float K_pabsp, float M_wabsw, float M_qabsq, float N_vabsv, float N_rabsr)
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


          return (Matrix(D1_vector, 6, 6) + Matrix(D2_vector, 6, 6) );
        }



        static Matrix
        compute_G(double Mass, double Volume, double zG, double euler_angles[3])
        {

          double phi = euler_angles[0];
          double theta = euler_angles[1];
          //double psi = euler_angles[2];

          double W = Mass * 9.8;
          double B = Volume * 9.8 * 1000;

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
        compute_L(double velocities[6],double l, double d, double D, double Sfin)
        {

          Math::Matrix L_tmp(6,6);
          L_tmp.resizeAndFill(6,6,0.0);
          double CLF = 3;
          double CLB = 1.24;
          double Yb;
          double Zb;
          double Mb;
          double Nb;

          double Yf_uv;
          double Zf_uw;
          double Yf_ur;
          double Zf_uq;
          double Mf_uw;
          double Mf_uq;
          double Nf_uv;
          double Nf_ur;

          if(l/d>5 && l/d<10)
          CLB = 1.24;

          if(l/d>10 && l/d<15)
          CLB = 3.3;

          Yb = -0.5 * D * 3.14 * pow( d/2.0, 2 ) * CLB;

          Zb = Yb;

          Mb = -( -0.65 * l - (-0.35 * l)) * Zb;

          Nb = -Mb;


          Yf_uv = - D * CLF * Sfin;

          Yf_ur = D * CLF * Sfin;

          Zf_uw = -D * CLF * Sfin;
 
          Zf_uq = Zf_uw;

          Mf_uw = - (-0.35 * l) * Zf_uw;

          Mf_uq = - (-0.35 * l)* - (-0.35 * l) * Zf_uq;
 
          Nf_uv = -0.35 * l * Yf_uv;

          Nf_ur = - (-0.35 * l) * (-0.35 * l) * Yf_ur;

          L_tmp(1,1) = Yb + Yf_uv;
          L_tmp(1,5) = Yf_ur * - ( -0.35 * l );
          L_tmp(2,2) = Zb + Zf_uw;
          L_tmp(2,4) = Zf_uq * - ( -0.35 * l );
          L_tmp(4,2) = Mb + Mf_uw;
          L_tmp(4,4) = Mf_uq;
          L_tmp(5,1) = Nb + Nf_uv;
          L_tmp(5,5) = Nf_ur;

          return -L_tmp * velocities[0];
        }

        static Matrix
        compute_Tau(double thruster,double servo_pos[3],double velocities[6],double l, double D, double Sfin)
        {

          double Yf;
          double Zf;
          double Mf;
          double Nf;
          double CLF;

          CLF = 3;

          Yf = D * CLF * Sfin;
        
          Zf = -D * CLF * Sfin;

          Mf = - ( -0.35 * l ) * Zf;

          Nf = -0.35 * l * Yf;

          Matrix tau_tmp(6, 1, 0.0);

          tau_tmp(0,0) = thruster * 10/0.84;
          tau_tmp(1,0) = (servo_pos[1] + servo_pos[2]) * Yf * pow(velocities[0],2.0);
          tau_tmp(2,0) = (servo_pos[0] + servo_pos[3]) * Zf * pow(velocities[0],2.0);
          tau_tmp(3,0) = (servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * -0.45 * pow(velocities[0],2.0) + 0.0054 * tau_tmp(0,0);
          tau_tmp(4,0) = (servo_pos[0] + servo_pos[3]) * Mf * pow(velocities[0],2.0);
          tau_tmp(5,0) = (servo_pos[1] + servo_pos[2]) * Nf * pow(velocities[0],2.0);

          return tau_tmp;
        } 
      };
    }
  }
}
#endif
