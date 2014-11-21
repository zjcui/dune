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
#include <DUNE/Model/Dynamic.hpp>

namespace DUNE
{
  namespace Model
  {
    //Compute AUV Model coefficients
    void
    Dynamic::computeModelCoeff(double Mass, double a, double b, double c,double Volume,double l, double d, double D, double Sfin, double *Model_Coeff)
    {
      // Inertia
      double Ixx = Mass / 5 * ( pow(b, 2.0) + pow(c, 2.0) );
      double l_r = 0;

      if (b >= c)
        l_r = b;
      if (c > b)
        l_r = c;

      double Iyy = Mass * (pow(a*2, 2.0) / 20 + pow(l_r, 2.0) / 5);

      double Izz = Mass * (pow(a*2, 2.0) / 20 + pow(l_r, 2.0) / 5);

      // Added Mass
      double e = 1 - pow(b / a, 2.0);

      double alpha_0 = (2 * ( 1 - pow(e, 2.0)) / pow(e, 3.0)) * ((1.0 / 2.0) * std::log(( 1 + e ) / ( 1 - e )) - e);

      double betha_0 = 1.0 / pow(e, 2.0) - (1 - pow(e, 2.0) ) / (2 * pow(e, 3.0)) * std::log(( 1 + e ) / ( 1 - e ));

      double X_dudt = - alpha_0 / (2 - alpha_0) * Mass;

      double Y_dvdt = - betha_0 / (2 - betha_0) * Mass;

      double Z_dwdt = Y_dvdt;

      double K_dpdt = 0;

      double M_dqdt = - (1.0 / 5) * (pow((pow(b, 2.0) - pow(a, 2.0)), 2.0) * (alpha_0 - betha_0)) / (2 * (pow(b, 2.0) - pow(a, 2.0)) + (pow(b, 2.0) + pow(a, 2.0)) * (betha_0 - alpha_0)) * Mass;

      double N_drdt = M_dqdt;

      // Lift Coefficients
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

      if (l / d > 5 && l / d < 10)
        CLB = 1.24;

      if (l / d > 10 && l / d < 15)
        CLB = 3.3;

      Yb = -0.5 * D * 3.14 * pow(d / 2.0, 2) * CLB;

      Zb = Yb;

      Mb = -(-0.65 * l - (-0.35 * l)) * Zb;

      Nb = -Mb;

      Yf_uv = -D * CLF * Sfin;

      Yf_ur = D * CLF * Sfin;

      Zf_uw = -D * CLF * Sfin;

      Zf_uq = Zf_uw;

      Mf_uw = -(-0.35 * l) * Zf_uw;

      Mf_uq = -(-0.35 * l)* - (-0.35 * l) * Zf_uq;

      Nf_uv = -0.35 * l * Yf_uv;

      Nf_ur = -(-0.35 * l) * (-0.35 * l) * Yf_ur;

      // Fins Coefficients
      double Yf;
      double Zf;
      double Mf;
      double Nf;

      Yf = D * CLF * Sfin;

      Zf = -D * CLF * Sfin;

      Mf = -(-0.35 * l) * Zf;

      Nf = -0.35 * l * Yf;

      // Fill Coefficient Vector
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


    // AUV MODEL MATRICES
    Matrix
    Dynamic::computeM(double Mass, double *Model_Coeff, double zG)
    {
      Math::Matrix M_tmp(6, 6);
      M_tmp.resizeAndFill(6, 6, 0.0);
      M_tmp(0, 0) = Mass - Model_Coeff[3];
      M_tmp(1, 1) = Mass - Model_Coeff[4];
      M_tmp(2, 2) = Mass - Model_Coeff[5];
      M_tmp(3, 3) = Model_Coeff[0] - Model_Coeff[6];
      M_tmp(4, 4) = Model_Coeff[1] - Model_Coeff[7];
      M_tmp(5, 5) = Model_Coeff[2] - Model_Coeff[8];
      M_tmp(0, 4) = Mass * zG;
      M_tmp(1, 3) = - Mass * zG;
      M_tmp(3, 1) = - Mass * zG;
      M_tmp(4, 0) = Mass * zG;

      return M_tmp;
    }

    Matrix
    Dynamic::computeC(double Mass, double *Model_Coeff, double zG, Matrix vel_est)
    {
      double u = vel_est(0);
      double v = vel_est(1);
      double w = vel_est(2);
      double p = vel_est(3);
      double q = vel_est(4);
      double r = vel_est(5);

      Math::Matrix C_tmp(6, 6);
      C_tmp.resizeAndFill(6, 6, 0.0);
      C_tmp(0, 3) = Mass * zG * r;
      C_tmp(0, 4) = (Mass - Model_Coeff[5]) * w;
      C_tmp(0, 5) = - (Mass - Model_Coeff[4]) * v;
      C_tmp(1, 3) = - (Mass - Model_Coeff[5]) * w;
      C_tmp(1, 4) = Mass * zG * r;
      C_tmp(1, 5) = (Mass - Model_Coeff[3]) * u;
      C_tmp(2, 3) = - Mass * zG * p + (Mass - Model_Coeff[4]) * v;
      C_tmp(2, 4) = - Mass * zG * q - (Mass - Model_Coeff[3]) * u;
      C_tmp(3, 0) = - Mass * zG * r;
      C_tmp(3, 1) = (Mass - Model_Coeff[5]) * w;
      C_tmp(3, 2) = Mass * zG * p - (Mass - Model_Coeff[4]) * v;
      C_tmp(3, 4) = (Model_Coeff[2] - Model_Coeff[8]) * r;
      C_tmp(3, 5) = -(Model_Coeff[1] - Model_Coeff[7]) * q;
      C_tmp(4, 0) = - ( Mass - Model_Coeff[5]) * w;
      C_tmp(4, 1) = - Mass * zG * r;
      C_tmp(4, 2) = Mass * zG *q + (Mass - Model_Coeff[3]) * u;
      C_tmp(4, 3) = - (Model_Coeff[2] - Model_Coeff[8]) * r;
      C_tmp(4, 5) = (Model_Coeff[0] - Model_Coeff[6]) * p;
      C_tmp(5, 0) = (Mass - Model_Coeff[4]) * v;
      C_tmp(5, 1) = -(Mass - Model_Coeff[3]) * u;
      C_tmp(5, 3) = (Model_Coeff[1] - Model_Coeff[7]) * q;
      C_tmp(5, 4) = - (Model_Coeff[0] - Model_Coeff[6]) * p;

      return C_tmp;
    }

    Matrix
    Dynamic::computeD(Matrix vel_est, std::vector<float> damping)
    {
      // Damping Matrix
      double ur = vel_est(0);
      double vr = vel_est(1);
      double wr = vel_est(2);
      double pr = vel_est(3);
      double qr = vel_est(4);
      double rr = vel_est(5);

      double D1_vector[36];
      memset(D1_vector, 0, sizeof(D1_vector));
      D1_vector[0] = damping[0];
      D1_vector[7] = damping[1];
      D1_vector[11] = damping[2];
      D1_vector[14] = damping[3];
      D1_vector[16] = damping[4];
      D1_vector[21] = damping[5];
      D1_vector[26] = damping[6];
      D1_vector[28] = damping[7];
      D1_vector[31] = damping[8];
      D1_vector[35] = damping[9];

      double D2_vector[36];
      memset(D2_vector, 0, sizeof(D1_vector));
      D2_vector[0] = damping[10] * std::abs(ur);
      D2_vector[7] = damping[11] * std::abs(vr);
      D2_vector[11] = damping[12] * std::abs(rr);
      D2_vector[14] = damping[13] * std::abs(wr);
      D2_vector[16] = damping[14] * std::abs(qr);
      D2_vector[21] = damping[15] * std::abs(pr);
      D2_vector[26] = damping[16] * std::abs(wr);
      D2_vector[28] = damping[17] * std::abs(qr);
      D2_vector[31] = damping[18] * std::abs(vr);
      D2_vector[35] = damping[19] * std::abs(rr);

      return (Matrix(D1_vector, 6, 6) + Matrix(D2_vector, 6, 6) );
    }

    Matrix
    Dynamic::computeG(double *Model_Coeff, double zG, Matrix nu_est)
    {
      double phi = nu_est(3);
      double theta = nu_est(4);
      //double psi = nu_est(5);;

      double W = Model_Coeff[9];
      double B = Model_Coeff[10];

      Math::Matrix G_tmp(6,1);
      G_tmp.resizeAndFill(6,1,0.0);
      G_tmp(0, 0) = (W - B) * std::sin(theta);
      G_tmp(1, 0) = -(W - B) * std::cos(theta) * std::sin(phi);
      G_tmp(2, 0) = -(W - B) * std::cos(theta) * std::cos(phi);
      G_tmp(3, 0) = zG * W * std::cos(theta) * std::sin(phi);
      G_tmp(4, 0) = zG * W * std::sin(theta);

      return G_tmp;
    }


    Matrix
    Dynamic::computeL(Matrix vel_est,double l, double *Model_Coeff)
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
      L_tmp(1,5) = Yf_ur * - (-0.35 * l);
      L_tmp(2,2) = Zb + Zf_uw;
      L_tmp(2,4) = Zf_uq * - (-0.35 * l);
      L_tmp(4,2) = Mb + Mf_uw;
      L_tmp(4,4) = Mf_uq;
      L_tmp(5,1) = Nb + Nf_uv;
      L_tmp(5,5) = Nf_ur;

      return -L_tmp * vel_est(0);
    }

    Matrix
    Dynamic::computeTau(double thruster, double servo_pos[3], Matrix vel, double *Model_Coeff)
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
      tau_tmp(0, 0) = thruster * 10 / 0.84;
      tau_tmp(1, 0) = (servo_pos[0] + servo_pos[3]) * Yf / 2 * pow(vel(0), 2.0);
      tau_tmp(2, 0) = (servo_pos[1] + servo_pos[2]) * Zf / 2 * pow(vel(0), 2.0);
      tau_tmp(3, 0) = (servo_pos[3] - servo_pos[0] + servo_pos[1] - servo_pos[2]) * 0.15 * pow(vel(0),2.0) + 0.01 * tau_tmp(0, 0);
      tau_tmp(4, 0) = (servo_pos[1] + servo_pos[2]) * Mf / 2  * pow(vel(0), 2.0);
      tau_tmp(5, 0) = (servo_pos[0] + servo_pos[3]) * Nf / 2  * pow(vel(0), 2.0);

      return tau_tmp;
    }

    Matrix
    Dynamic::computeAcceleration(double velocities[6], Matrix v_bar, double delta_t)
    {
      Matrix T = Matrix(6,6, 0.0);
      T(0,0) = delta_t;
      T(1,1) = delta_t;
      T(2,2) = delta_t;
      T(3,3) = delta_t;
      T(4,4) = delta_t;
      T(5,5) = delta_t;

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

    Matrix
    Dynamic::computeRotationMatrix(double euler_angles[3])
    {
      // Pass euler angles to row matrix
      Math::Matrix ea(3, 1);
      ea(0) = Math::Angles::normalizeRadian(euler_angles[0]);
      ea(1) = Math::Angles::normalizeRadian(euler_angles[1]);
      ea(2) = Math::Angles::normalizeRadian(euler_angles[2]);

      Math::Matrix rotation_matrix(6, 6, 0.0);
      rotation_matrix = ea.toDCMSMO();

      return rotation_matrix;
    }

  }
}
