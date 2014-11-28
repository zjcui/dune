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
    //! Lift Coefficient for l / d < 10
    static const float c_lift_coeff_clb_one = 1.24f;
    //! Lift Coefficient for l / d > 10
    static const float c_lift_coeff_clb_two = 3.3f;
    //! Lift Coefficient that deppends on
    //! geometrical aspect of the fin
    static const float c_lift_coeff_clf = 3.0f;
    //! Empirical coefficient for the center of pressure
    //! where lift forces are applied in % of length
    static const float c_empirical_coeff_center_pressure = 0.65f;
    //! Empirical coefficient for position of the CB
    //! relatively to the position of the nose in % of length
    static const float c_pos_cb_relative_nose = 0.35f;
    //! Empirical coefficient for position of the fins
    //! relatively to the position of the CB in % of length
    static const float c_pos_fins_relative_cb = 0.35f;
    //! Force of the fins in roll moment
    static const float c_roll_fin_force = 0.15f;
    //! Force of the motor torque in roll moment
    static const float c_roll_torque_motor_force = 0.01f;
    //! Low Pass Filter smooth coefficient
    static const float c_low_pass_filter_coeff = 0.05f;

    Dynamic::Dynamic(void)
    {
      clear();
    }

    void
    Dynamic::clear(void)
    {
      m_inertia_added_mass_matrix.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS , 0.0);
      m_coriolis_matrix.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      m_damping_matrix.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      m_restoring_matrix.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
      m_lift_matrix.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      m_tau_matrix.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);

      m_inertia_added_mass_n.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      m_coriolis_n.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      m_damping_n.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      m_restoring_n.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);
      m_lift_n.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      m_tau_n.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0.0);

      memset(m_model_coeff, 0, sizeof(m_model_coeff));
    }

    void
    Dynamic::load(const Parameters& args)
    {
      m_args = args;
      getModelCoeff();
      m_inertia_added_mass_matrix = getInertia();
    }

    Dynamic::~Dynamic(void)
    {
      erase();
    }

    void
    Dynamic::erase(void)
    {
      m_args.damping.clear();
    }

    void
    Dynamic::getModelCoeff()
    {
      // Inertia
      double Ixx = m_args.mass / IT_R * ( pow(m_args.b, 2.0) + pow(m_args.c, 2.0) );
      double l_r = 0;

      if (m_args.b >= m_args.c)
        l_r = m_args.b;
      if (m_args.c > m_args.b)
        l_r = m_args.c;

      double Iyy = m_args.mass * (pow(m_args.a * 2, 2.0) / IT_L + pow(l_r, 2.0) / IT_R);
      double Izz = m_args.mass * (pow(m_args.a * 2, 2.0) / IT_L + pow(l_r, 2.0) / IT_R);

      // Added Mass [Fossen]
      double e = 1 - pow(m_args.b / m_args.a, 2.0);
      double alpha_0 = (2 * ( 1 - pow(e, 2.0)) / pow(e, 3.0)) * ((1.0 / 2.0) * std::log(( 1 + e ) / ( 1 - e )) - e);
      double betha_0 = 1.0 / pow(e, 2.0) - (1 - pow(e, 2.0) ) / (2 * pow(e, 3.0)) * std::log(( 1 + e ) / ( 1 - e ));
      double X_dudt = - alpha_0 / (2 - alpha_0) * m_args.mass;
      double Y_dvdt = - betha_0 / (2 - betha_0) * m_args.mass;
      double Z_dwdt = Y_dvdt;
      double K_dpdt = 0;
      double M_dqdt = - (1.0 / 5) * (pow((pow(m_args.b, 2.0) - pow(m_args.a, 2.0)), 2.0) * (alpha_0 - betha_0)) / (2 * (pow(m_args.b, 2.0) - pow(m_args.a, 2.0)) + (pow(m_args.b, 2.0) + pow(m_args.a, 2.0)) * (betha_0 - alpha_0)) * m_args.mass;
      double N_drdt = M_dqdt;

      // Lift Coefficients
      double CLF = c_lift_coeff_clf;
      double CLB = c_lift_coeff_clb_one;

      if (m_args.l / m_args.d > LD_REF_ONE && m_args.l / m_args.d < LD_REF_TWO)
        CLB = c_lift_coeff_clb_one;

      if (m_args.l / m_args.d > LD_REF_TWO && m_args.l / m_args.d < LD_REF_THREE)
        CLB = c_lift_coeff_clb_two;

      double Yb = -0.5 * m_args.density * DUNE::Math::c_pi * pow(m_args.d / 2.0, 2) * CLB;
      double Zb = Yb;
      double Mb = -(-c_empirical_coeff_center_pressure * m_args.l - (-c_pos_cb_relative_nose * m_args.l)) * Zb;
      double Nb = -Mb;
      double Yf_uv = -m_args.density * CLF * m_args.sfin;
      double Yf_ur = m_args.density * CLF * m_args.sfin;
      double Zf_uw = -m_args.density * CLF * m_args.sfin;
      double Zf_uq = Zf_uw;
      double Mf_uw = -(-c_pos_fins_relative_cb * m_args.l) * Zf_uw;
      double Mf_uq = -(-c_pos_fins_relative_cb * m_args.l) * - (-c_pos_fins_relative_cb * m_args.l) * Zf_uq;
      double Nf_uv = -c_pos_fins_relative_cb * m_args.l * Yf_uv;
      double Nf_ur = -(-c_pos_fins_relative_cb * m_args.l) * (-c_pos_fins_relative_cb * m_args.l) * Yf_ur;

      // Fins Coefficients
      double Yf = m_args.density * CLF * m_args.sfin;
      double Zf = -m_args.density * CLF * m_args.sfin;
      double Mf = -(-c_pos_fins_relative_cb * m_args.l) * Zf;
      double Nf = -c_pos_fins_relative_cb * m_args.l * Yf;

      // Fill Coefficient Vector
      m_model_coeff[0] = Ixx;
      m_model_coeff[1] = Iyy;
      m_model_coeff[2] = Izz;

      m_model_coeff[3] = X_dudt;
      m_model_coeff[4] = Y_dvdt;
      m_model_coeff[5] = Z_dwdt;
      m_model_coeff[6] = K_dpdt;
      m_model_coeff[7] = M_dqdt;
      m_model_coeff[8] = N_drdt;

      m_model_coeff[9] = m_args.mass * DUNE::Math::c_gravity;
      m_model_coeff[10] = m_args.volume * DUNE::Math::c_gravity * m_args.density;

      m_model_coeff[11] = Yb;
      m_model_coeff[12] = Zb;
      m_model_coeff[13] = Mb;
      m_model_coeff[14] = Nb;
      m_model_coeff[15] = Yf_uv;
      m_model_coeff[16] = Yf_ur;
      m_model_coeff[17] = Zf_uw;
      m_model_coeff[18] = Zf_uq;
      m_model_coeff[19] = Mf_uw;
      m_model_coeff[20] = Mf_uq;
      m_model_coeff[21] = Nf_uv;
      m_model_coeff[22] = Nf_ur;

      m_model_coeff[23] = Yf;
      m_model_coeff[24] = Zf;
      m_model_coeff[25] = Mf;
      m_model_coeff[26] = Nf;
    }

    Matrix
    Dynamic::getInertia()
    {
      Math::Matrix M_tmp(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      M_tmp(0, 0) = m_args.mass - m_model_coeff[3];
      M_tmp(1, 1) = m_args.mass - m_model_coeff[4];
      M_tmp(2, 2) = m_args.mass - m_model_coeff[5];
      M_tmp(3, 3) = m_model_coeff[0] - m_model_coeff[6];
      M_tmp(4, 4) = m_model_coeff[1] - m_model_coeff[7];
      M_tmp(5, 5) = m_model_coeff[2] - m_model_coeff[8];
      M_tmp(0, 4) = m_args.mass * m_args.zG;
      M_tmp(1, 3) = -m_args.mass * m_args.zG;
      M_tmp(3, 1) = -m_args.mass * m_args.zG;
      M_tmp(4, 0) = m_args.mass * m_args.zG;

      return M_tmp;
    }

    Matrix
    Dynamic::getCoriolis(Matrix vel)
    {
      double u = vel(0);
      double v = vel(1);
      double w = vel(2);
      double p = vel(3);
      double q = vel(4);
      double r = vel(5);

      Math::Matrix C_tmp(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      C_tmp(0, 3) = m_args.mass * m_args.zG * r;
      C_tmp(0, 4) = (m_args.mass - m_model_coeff[5]) * w;
      C_tmp(0, 5) = -(m_args.mass - m_model_coeff[4]) * v;
      C_tmp(1, 3) = -(m_args.mass - m_model_coeff[5]) * w;
      C_tmp(1, 4) = m_args.mass * m_args.zG * r;
      C_tmp(1, 5) = (m_args.mass - m_model_coeff[3]) * u;
      C_tmp(2, 3) = -m_args.mass * m_args.zG * p + (m_args.mass - m_model_coeff[4]) * v;
      C_tmp(2, 4) = -m_args.mass * m_args.zG * q - (m_args.mass - m_model_coeff[3]) * u;
      C_tmp(3, 0) = -m_args.mass * m_args.zG * r;
      C_tmp(3, 1) = (m_args.mass - m_model_coeff[5]) * w;
      C_tmp(3, 2) = m_args.mass * m_args.zG * p - (m_args.mass - m_model_coeff[4]) * v;
      C_tmp(3, 4) = (m_model_coeff[2] - m_model_coeff[8]) * r;
      C_tmp(3, 5) = -(m_model_coeff[1] - m_model_coeff[7]) * q;
      C_tmp(4, 0) = -(m_args.mass - m_model_coeff[5]) * w;
      C_tmp(4, 1) = -m_args.mass * m_args.zG * r;
      C_tmp(4, 2) = m_args.mass * m_args.zG * q + (m_args.mass - m_model_coeff[3]) * u;
      C_tmp(4, 3) = -(m_model_coeff[2] - m_model_coeff[8]) * r;
      C_tmp(4, 5) = (m_model_coeff[0] - m_model_coeff[6]) * p;
      C_tmp(5, 0) = (m_args.mass - m_model_coeff[4]) * v;
      C_tmp(5, 1) = -(m_args.mass - m_model_coeff[3]) * u;
      C_tmp(5, 3) = (m_model_coeff[1] - m_model_coeff[7]) * q;
      C_tmp(5, 4) = -(m_model_coeff[0] - m_model_coeff[6]) * p;

      return C_tmp;
    }

    Matrix
    Dynamic::getDamping(Matrix vel)
    {
      // Damping Matrix
      double ur = vel(0);
      double vr = vel(1);
      double wr = vel(2);
      double pr = vel(3);
      double qr = vel(4);
      double rr = vel(5);

      double D1_vector[VI_DAMPING_ARRAY];
      memset(D1_vector, 0, sizeof(D1_vector));
      D1_vector[0] = m_args.damping[0];
      D1_vector[7] = m_args.damping[1];
      D1_vector[11] = m_args.damping[2];
      D1_vector[14] = m_args.damping[3];
      D1_vector[16] = m_args.damping[4];
      D1_vector[21] = m_args.damping[5];
      D1_vector[26] = m_args.damping[6];
      D1_vector[28] = m_args.damping[7];
      D1_vector[31] = m_args.damping[8];
      D1_vector[35] = m_args.damping[9];

      double D2_vector[VI_DAMPING_ARRAY];
      memset(D2_vector, 0, sizeof(D1_vector));
      D2_vector[0] = m_args.damping[10] * std::abs(ur);
      D2_vector[7] = m_args.damping[11] * std::abs(vr);
      D2_vector[11] = m_args.damping[12] * std::abs(rr);
      D2_vector[14] = m_args.damping[13] * std::abs(wr);
      D2_vector[16] = m_args.damping[14] * std::abs(qr);
      D2_vector[21] = m_args.damping[15] * std::abs(pr);
      D2_vector[26] = m_args.damping[16] * std::abs(wr);
      D2_vector[28] = m_args.damping[17] * std::abs(qr);
      D2_vector[31] = m_args.damping[18] * std::abs(vr);
      D2_vector[35] = m_args.damping[19] * std::abs(rr);

      return (Matrix(D1_vector, MS_ROWS, MS_MAX_COLUMNS) + Matrix(D2_vector, MS_ROWS, MS_MAX_COLUMNS) );
    }

    Matrix
    Dynamic::getRestoringForces(Matrix nu)
    {
      double phi = nu(3);
      double theta = nu(4);

      double W = m_model_coeff[9];
      double B = m_model_coeff[10];

      Math::Matrix G_tmp(MS_ROWS, MS_MIN_COLUMNS, 0.0);
      G_tmp(0, 0) = (W - B) * std::sin(theta);
      G_tmp(1, 0) = -(W - B) * std::cos(theta) * std::sin(phi);
      G_tmp(2, 0) = -(W - B) * std::cos(theta) * std::cos(phi);
      G_tmp(3, 0) = m_args.zG * W * std::cos(theta) * std::sin(phi);
      G_tmp(4, 0) = m_args.zG * W * std::sin(theta);

      return G_tmp;
    }


    Matrix
    Dynamic::getLift(Matrix vel)
    {
      double Yb = m_model_coeff[11];
      double Zb = m_model_coeff[12];
      double Mb = m_model_coeff[13];
      double Nb = m_model_coeff[14];
      double Yf_uv = m_model_coeff[15];
      double Yf_ur = m_model_coeff[16];
      double Zf_uw = m_model_coeff[17];
      double Zf_uq = m_model_coeff[18];
      double Mf_uw = m_model_coeff[19];
      double Mf_uq = m_model_coeff[20];
      double Nf_uv = m_model_coeff[21];
      double Nf_ur = m_model_coeff[22];

      Math::Matrix L_tmp(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      L_tmp(1,1) = Yb + Yf_uv;
      L_tmp(1,5) = Yf_ur * - (-c_pos_fins_relative_cb * m_args.l);
      L_tmp(2,2) = Zb + Zf_uw;
      L_tmp(2,4) = Zf_uq * - (-c_pos_fins_relative_cb * m_args.l);
      L_tmp(4,2) = Mb + Mf_uw;
      L_tmp(4,4) = Mf_uq;
      L_tmp(5,1) = Nb + Nf_uv;
      L_tmp(5,5) = Nf_ur;

      return -L_tmp * vel(0);
    }

    Matrix
    Dynamic::getTau(double thruster, double servo_pos[VI_SERVO], Matrix vel)
    {
      double Yf;
      double Zf;
      double Mf;
      double Nf;

      Yf = m_model_coeff[23];
      Zf = m_model_coeff[24];
      Mf = m_model_coeff[25];
      Nf = m_model_coeff[26];

      Matrix tau_tmp(MS_ROWS, MS_MIN_COLUMNS, 0.0);
      tau_tmp(0, 0) = thruster * 10 / 0.84;
      tau_tmp(1, 0) = (servo_pos[SI_ONE] + servo_pos[SI_FOUR]) * Yf / 2 * pow(vel(0), 2.0);
      tau_tmp(2, 0) = (servo_pos[SI_TWO] + servo_pos[SI_THREE]) * Zf / 2 * pow(vel(0), 2.0);
      tau_tmp(3, 0) = (servo_pos[SI_FOUR] - servo_pos[SI_ONE] + servo_pos[SI_TWO] - servo_pos[SI_THREE]) * c_roll_fin_force * pow(vel(0),2.0) +
      c_roll_torque_motor_force * tau_tmp(0, 0);
      tau_tmp(4, 0) = (servo_pos[SI_TWO] + servo_pos[SI_THREE]) * Mf / 2  * pow(vel(0), 2.0);
      tau_tmp(5, 0) = (servo_pos[SI_ONE] + servo_pos[SI_FOUR]) * Nf / 2  * pow(vel(0), 2.0);

      return tau_tmp;
    }


    Matrix
    Dynamic::update(Matrix vel_est, Matrix nu_est, double thruster, double servo_pos[VI_SERVO], Matrix vel)
    {
      if (m_inertia_added_mass_matrix.isInvertible())
      {
        m_coriolis_matrix = getCoriolis(vel_est);
        m_damping_matrix = getDamping(vel_est);
        m_restoring_matrix = getRestoringForces(nu_est);
        m_lift_matrix = getLift(vel_est);
        m_tau_matrix = getTau(thruster, servo_pos, vel);

        return inverse(m_inertia_added_mass_matrix) * (m_tau_matrix - m_coriolis_matrix * vel_est - m_damping_matrix * vel_est - m_restoring_matrix - m_lift_matrix * vel_est);
      }
      else
        return Matrix(MS_ROWS, MS_MIN_COLUMNS, 0.0);
    }

    Matrix
    Dynamic::update(Matrix vel, Matrix nu, double thruster, double servo_pos[VI_SERVO])
    {
      if (m_inertia_added_mass_matrix.isInvertible())
        return update(vel, nu, thruster, servo_pos, vel);
      else
        return Matrix(MS_ROWS, MS_MIN_COLUMNS, 0.0);
    }

    Matrix
    Dynamic::getInEarthFrame(Matrix rotation_matrix, Matrix rotation_matrix_diff, Matrix vel_est, Matrix nu_est, double thruster, double servo_pos[VI_SERVO], Matrix vel)
    {

      if (m_inertia_added_mass_matrix.isInvertible() && rotation_matrix.isInvertible())
      {
        Math::Matrix nu_dot = rotation_matrix * vel_est;

        update(vel_est, nu_est, thruster, servo_pos, vel);

        m_inertia_added_mass_n = inverse(transpose(rotation_matrix)) * (m_inertia_added_mass_matrix)  * inverse(rotation_matrix);
        m_coriolis_n = inverse(transpose(rotation_matrix)) * (m_coriolis_matrix - m_inertia_added_mass_matrix * inverse(rotation_matrix)
                                                              * rotation_matrix_diff) * inverse(rotation_matrix);
        m_damping_n = inverse(transpose(rotation_matrix)) * m_damping_matrix * inverse(rotation_matrix);
        m_restoring_n = inverse(transpose(rotation_matrix)) * m_restoring_matrix;
        m_lift_n = inverse(transpose(rotation_matrix)) * m_lift_matrix * inverse(rotation_matrix);
        m_tau_n = inverse(transpose(rotation_matrix)) * m_tau_matrix;

      return inverse(m_inertia_added_mass_n) * (m_tau_n - m_coriolis_n * nu_dot - m_damping_n * nu_dot - m_lift_n * nu_dot - m_restoring_n);
      }
      else
        return Matrix(MS_ROWS, MS_MIN_COLUMNS, 0.0);
    }

    Matrix
    Dynamic::computeRotationMatrix(double euler_angles[VI_EULER_ANGLE])
    {
      // Pass euler angles to row matrix
      Math::Matrix ea(3, 1);
      ea(0) = Math::Angles::normalizeRadian(euler_angles[0]);
      ea(1) = Math::Angles::normalizeRadian(euler_angles[1]);
      ea(2) = Math::Angles::normalizeRadian(euler_angles[2]);

      Math::Matrix rotation_matrix(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      rotation_matrix = ea.toDCMSMO();

      return rotation_matrix;
    }

    Matrix
    Dynamic::getAcceleration(double velocities[MS_ROWS], Matrix v_bar, double delta_t)
    {
      Matrix T = Matrix(MS_ROWS, MS_MAX_COLUMNS, 0.0);
      T(0,0) = delta_t;
      T(1,1) = delta_t;
      T(2,2) = delta_t;
      T(3,3) = delta_t;
      T(4,4) = delta_t;
      T(5,5) = delta_t;

      Matrix v = Matrix(MS_ROWS, MS_MIN_COLUMNS, 0.0);
      v(0, 0) = velocities[0];
      v(1, 0) = velocities[1];
      v(2, 0) = velocities[2];
      v(3, 0) = velocities[3];
      v(4, 0) = velocities[4];
      v(5, 0) = velocities[5];

      Matrix acc = Matrix(MS_ROWS, MS_MIN_COLUMNS, 0.0);
      acc = inverse(T) * c_low_pass_filter_coeff * (v - v_bar);

      return acc;
    }
  }
}
