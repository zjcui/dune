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

#ifndef IDENTIFICATION_AUV_MODEL_H
#define IDENTIFICATION_AUV_MODEL_H

#include <DUNE/DUNE.hpp>

namespace Identification
{
  namespace AUV
  {
      using DUNE_NAMESPACES;

      class Model
      {
      public:


        /****************************************Compute AUV Model coefficients*****************************/

         static void
         compute_Model_Coeff(double Mass, double a, double b, double c,double Volume,double l, double d, double D, double Sfin,double *Model_Coeff)
         {


          /*Inertia*/
          double Ixx = Mass / 5 * ( pow(b, 2.0) + pow(c, 2.0) );

          double l_r = 0;

          if(b>=c)
            l_r=b;
          if(c>b)
            l_r=c;

          double Iyy = Mass * ( pow(a*2, 2.0)/20 + pow(l_r, 2.0)/5 );

          double Izz = Mass * ( pow(a*2, 2.0)/20 + pow(l_r, 2.0)/5 );

          /*Added Mass*/

          double e = 1 - pow(b / a, 2.0);

          double alpha_0 = ( 2 * ( 1 - pow(e, 2.0) ) / pow(e, 3.0) ) * ( (1.0 / 2.0) * std::log( ( 1 + e ) / ( 1 - e ) ) - e );

          double betha_0 = 1.0 / pow(e, 2.0) - ( 1 - pow(e, 2.0 ) )/ ( 2 * pow(e, 3.0)  ) * std::log( ( 1 + e ) / ( 1 - e ) );

          double X_dudt = - alpha_0 / (2 - alpha_0) * Mass;

          double Y_dvdt = - betha_0 / (2 - betha_0) * Mass;

          double Z_dwdt = Y_dvdt;

          double K_dpdt = 0;

          double M_dqdt = - (1.0/5) * ( pow( ( pow(b, 2.0) - pow(a, 2.0) ), 2.0) * (alpha_0 - betha_0) ) / ( 2 * ( pow(b, 2.0) - pow(a, 2.0) ) + ( pow(b, 2.0) + pow(a, 2.0) ) * ( betha_0 - alpha_0 ) ) * Mass;

          double N_drdt = M_dqdt;


          /*Lift Coefficients*/
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


          /*Fins Coefficients*/
          double Yf;
          double Zf;
          double Mf;
          double Nf;

          Yf = D * CLF * Sfin;
        
          Zf = -D * CLF * Sfin;

          Mf = - ( -0.35 * l ) * Zf;

          Nf = -0.35 * l * Yf;


           /*Fill Coefficient Vector*/

           Model_Coeff[0] = Ixx;
           Model_Coeff[1] = Iyy;
           Model_Coeff[2] = Izz;

           Model_Coeff[3] = X_dudt;
           Model_Coeff[4] = Y_dvdt;
           Model_Coeff[5] = Z_dwdt;
           Model_Coeff[6] = K_dpdt;
           Model_Coeff[7] = M_dqdt;
           Model_Coeff[8] = N_drdt;

           Model_Coeff[9] = Mass * 9.8;
           Model_Coeff[10] = Volume * 9.8 * 1000;

           Model_Coeff[11] = Yb;
           Model_Coeff[12] = Zb;
           Model_Coeff[13] = Mb;
           Model_Coeff[14] = Nb;
           Model_Coeff[15] = Yf_uv;
           Model_Coeff[16] = Yf_ur; 
           Model_Coeff[17] = Zf_uw;
           Model_Coeff[18] = Zf_uq;
           Model_Coeff[19] = Mf_uw;
           Model_Coeff[20] = Mf_uq;
           Model_Coeff[21] = Nf_uv;
           Model_Coeff[22] = Nf_ur;

           Model_Coeff[23] = Yf;
           Model_Coeff[24] = Zf;
           Model_Coeff[25] = Mf;
           Model_Coeff[26] = Nf;

         }

        /***************************************************************************************************/


        /****************************************AUV MODEL MATRICES****************************************/


        static Matrix
        compute_M(double Mass,double *Model_Coeff, double zG)
        {
	  
          Math::Matrix M_tmp(6,6);
          M_tmp.resizeAndFill(6,6,0.0);
          M_tmp(0,0) = Mass - Model_Coeff[3];
          M_tmp(1,1) = Mass - Model_Coeff[4];
          M_tmp(2,2) = Mass - Model_Coeff[5];
          M_tmp(3,3) = Model_Coeff[0] - Model_Coeff[6];
          M_tmp(4,4) = Model_Coeff[1] - Model_Coeff[7];
          M_tmp(5,5) = Model_Coeff[2] - Model_Coeff[8];
          M_tmp(0,4) = Mass * zG;
          M_tmp(1,3) = - Mass * zG;
          M_tmp(3,1) = - Mass * zG;
          M_tmp(4,0) = Mass * zG;

	  return M_tmp;

        }

        static Matrix
        compute_C(double Mass, double *Model_Coeff, double zG, Matrix vel_est)
        {

          double u = vel_est(0);
          double v = vel_est(1);
          double w = vel_est(2);
          double p = vel_est(3);
          double q = vel_est(4);
          double r = vel_est(5);

          Math::Matrix C_tmp(6,6);
          C_tmp.resizeAndFill(6,6,0.0);
          C_tmp(0,3) = Mass * zG * r;
          C_tmp(0,4) = (Mass - Model_Coeff[5]) * w;
          C_tmp(0,5) = - (Mass - Model_Coeff[4]) * v;
          C_tmp(1,3) = - (Mass - Model_Coeff[5]) * w;
          C_tmp(1,4) = Mass * zG * r;
          C_tmp(1,5) = (Mass - Model_Coeff[3]) * u;
          C_tmp(2,3) = - Mass * zG * p + (Mass - Model_Coeff[4]) * v;
          C_tmp(2,4) = - Mass * zG * q - (Mass - Model_Coeff[3]) * u;
          C_tmp(3,0) = - Mass * zG * r;
          C_tmp(3,1) = (Mass - Model_Coeff[5]) * w;
          C_tmp(3,2) = Mass * zG * p - (Mass - Model_Coeff[4]) * v;
          C_tmp(3,4) = (Model_Coeff[2] - Model_Coeff[8]) * r;
          C_tmp(3,5) = -(Model_Coeff[1] - Model_Coeff[7]) * q;
          C_tmp(4,0) = - ( Mass - Model_Coeff[5]) * w;
          C_tmp(4,1) = - Mass * zG * r;
          C_tmp(4,2) = Mass * zG *q + (Mass - Model_Coeff[3]) * u;
          C_tmp(4,3) = - (Model_Coeff[2] - Model_Coeff[8]) * r;
          C_tmp(4,5) = (Model_Coeff[0] - Model_Coeff[6]) * p;
          C_tmp(5,0) = (Mass - Model_Coeff[4]) * v;
          C_tmp(5,1) = -(Mass - Model_Coeff[3]) * u;
          C_tmp(5,3) = (Model_Coeff[1] - Model_Coeff[7]) * q;
          C_tmp(5,4) = - (Model_Coeff[0] - Model_Coeff[6]) * p;

          return C_tmp;

         }

        static Matrix
        compute_D(Matrix vel_est, float X_u, float Y_v, float Y_r, float Z_w, float Z_q, float K_p, float M_w, float M_q, float N_v, float N_r, float X_uabsu, float Y_vabsv, float Y_rabsr, float Z_wabsw, float Z_qabsq, float K_pabsp, float M_wabsw, float M_qabsq, float N_vabsv, float N_rabsr)
        {
          // Damping Matrix

          double ur = vel_est(0);
          double vr = vel_est(1);
          double wr = vel_est(2);
          double pr = vel_est(3);
          double qr = vel_est(4);
          double rr = vel_est(5);

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
        compute_G(double *Model_Coeff, double zG, double euler_angles[3])
        {

          double phi = euler_angles[0];
          double theta = euler_angles[1];
          //double psi = euler_angles[2];

          double W = Model_Coeff[9];
          double B = Model_Coeff[10];

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
        compute_L(Matrix vel_est,double l, double *Model_Coeff)
        {

          double Yb = Model_Coeff[11];
          double Zb = Model_Coeff[12];
          double Mb = Model_Coeff[13];
          double Nb = Model_Coeff[14];
          double Yf_uv = Model_Coeff[15];
          double Yf_ur = Model_Coeff[16];
          double Zf_uw = Model_Coeff[17];  
          double Zf_uq = Model_Coeff[18];
          double Mf_uw = Model_Coeff[19];
          double Mf_uq = Model_Coeff[20];
          double Nf_uv = Model_Coeff[21];
          double Nf_ur = Model_Coeff[22];
 

          Math::Matrix L_tmp(6,6);
          L_tmp.resizeAndFill(6,6,0.0);

          L_tmp(1,1) = Yb + Yf_uv;
          L_tmp(1,5) = Yf_ur * - ( -0.35 * l );
          L_tmp(2,2) = Zb + Zf_uw;
          L_tmp(2,4) = Zf_uq * - ( -0.35 * l );
          L_tmp(4,2) = Mb + Mf_uw;
          L_tmp(4,4) = Mf_uq;
          L_tmp(5,1) = Nb + Nf_uv;
          L_tmp(5,5) = Nf_ur;

          return -L_tmp * vel_est(0);
        }

        static Matrix
        compute_Tau(double thruster,double servo_pos[3],Matrix vel,double *Model_Coeff)
        {

          double Yf;
          double Zf;
          double Mf;
          double Nf;

          Yf = Model_Coeff[23];
        
          Zf = Model_Coeff[24];

          Mf = Model_Coeff[25];

          Nf = Model_Coeff[26];

          Matrix tau_tmp(6, 1, 0.0);

          tau_tmp(0,0) = thruster * 10 / 0.84;
          tau_tmp(1,0) = (servo_pos[0] + servo_pos[3]) * Yf / 2 * pow(vel(0),2.0);
          tau_tmp(2,0) = (servo_pos[1] + servo_pos[2]) * Zf / 2 * pow(vel(0),2.0);
          tau_tmp(3,0) = (servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * -0.25 * pow(vel(0),2.0) + 0.006 * tau_tmp(0,0);
          tau_tmp(4,0) = (servo_pos[1] + servo_pos[2]) * Mf / 2  * pow(vel(0),2.0);
          tau_tmp(5,0) = (servo_pos[0] + servo_pos[3]) * Nf / 2  * pow(vel(0),2.0);

          return tau_tmp;
        } 

        /***************************************************************************************************/

    };
  }
}
#endif
