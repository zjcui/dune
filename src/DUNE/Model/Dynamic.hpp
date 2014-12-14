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

#ifndef DUNE_MODEL_DYNAMIC_HPP_INCLUDED_
#define DUNE_MODEL_DYNAMIC_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace DUNE
{
  namespace Model
  {
    //! Inertia Tensor divisors
    enum InertiaTensor
    {
      IT_L = 20,
      IT_R = 5
    };

    //! Length Diameter ratio to choose proper clb
    enum LengthDiameter
    {
      LD_REF_ONE = 5,
      LD_REF_TWO = 10,
      LD_REF_THREE = 15
    };

    //! Variables Index
    enum VariablesIndex
    {
      VI_EULER_ANGLE = 3,
      VI_GPS_DATA = 3,
      VI_COV_COLUMNS = 3,
      VI_AVG_WINDOW = 20,
      VI_MODEL_COEFF = 27,
      VI_DAMPING_ARRAY = 36
    };

    //! Matrix Dimensions
    enum MatrixSize
    {
      MS_ROWS = 6,
      MS_MAX_COLUMNS = 6,
      MS_MIN_COLUMNS = 1
    };

    //! Servos ID's
    enum ServoID
    {
      SI_ONE = 0,
      SI_TWO = 1,
      SI_THREE = 2,
      SI_FOUR = 3,
      SI_TOTAL = 4
    };

    //! Compute AUV Dynamics
    //! depending on physical
    //! characteristics.
    class Dynamic
    {
    public:
      //! AUV caracteristics.
      struct Parameters
      {
        //! AUV mass (Kg).
        double mass;
        //! Half vehicle lenght (m)
        double a;
        //! Vehicle height
        double b;
        //! Vehicle width
        double c;
        //! Vehicle volume (Kg3)
        double volume;
        //! Vehicle Center of Gravity
        double zG;
        //! Vehicle lenght
        double l;
        //! Vehicle diameter
        double d;
        //! Water density
        double density;
        //! Fins coefficient
        double sfin;
        //! Thruster force in Newtons
        double thruster_force;
        //! Damping coefficients
        std::vector<float> damping;
      };

      class Error: public std::runtime_error
      {
      public:
        Error(const std::string& msg):
          std::runtime_error("dynamic error: " + msg)
        { }
      };
      //! Constructor
      Dynamic(void);
      //! Destructor
      ~Dynamic(void);
      //! This routine initializes all values to zero
      void
      clear(void);
      //! This routine loads the Parameters values,
      //! the m_model_coeff array and the inertia matrix
      void
      load(const Parameters& args);
      //! This routine acts as a destructor
      void
      erase(void);
      //! This routine calculate the vehicle acceleration
      //! in the body frame
      //! @param[in] estimated velocity matrix[6x1]
      //! @param[in] estimated position matrix[6x1]
      //! @param[in] vehicle thruster actuation matrix[6x1]
      //! @param[in] vehicle fins declination vector[3]
      //! @param[in] measured velocity matrix[6x1]
      //! @return an acceleration matrix[6x1],
      //! if inertia matrix isn't invertible, it returns
      //! a zero matrix
      Matrix
      update(Matrix vel_est, Matrix nu_est, double thruster, double servo_pos[SI_TOTAL], Matrix vel);
      //! This routine calculate the vehicle acceleration
      //! in the body frame
      //! @param[in] measured velocity matrix[6x1]
      //! @param[in] measured position matrix[6x1]
      //! @param[in] vehicle thruster actuation matrix[6x1]
      //! @param[in] vehicle fins declination vector[3]
      //! @return an acceleration matrix[6x1],
      //! if inertia matrix isn't invertible, it returns
      //! a zero matrix
      Matrix
      update(Matrix vel, Matrix nu, double thruster, double servo_pos[SI_TOTAL]);
      //! This routine calculate the vehicle acceleration
      //! in the earth frame
      //! @param[in] rotation matrix[6x6]
      //! @param[in] derivative of rotation matrix[6x6]
      //! @param[in] estimated velocity matrix[6x1]
      //! @param[in] vehicle thruster actuation matrix[6x1]
      //! @param[in] vehicle fins declination vector[3]
      //! @param[in] vehicle velocity matrix[6x1]
      //! @return an acceleration matrix[6x1],
      //! if inertia matrix isn't invertible, it returns
      //! a zero matrix
      Matrix
      getInEarthFrame(Matrix rotation_matrix, Matrix rotation_matrix_diff, Matrix vel_est, Matrix nu_est, double thruster, double servo_pos[SI_TOTAL], Matrix vel);
      //! This routine calculate the identification
      //! coefficient to calculate damping matrix
      //! @param[in] vehicle thruster actuation matrix[6x1]
      //! @param[in] vehicle fins declination vector[3]
      //! @param[in] vehicle velocity matrix[6x1]
      //! @return an acceleration matrix[6x1],
      //! if inertia matrix isn't invertible, it returns
      //! a zero matrix
      Matrix
      getIdentification(double thruster, double servo_pos[SI_TOTAL], Matrix vel, Matrix acc, Matrix nu);
      //! This routine calculates a rotation matrix
      //! @param[in] euler angles array[3]
      //! @return a rotation matrix[6x6]
      Matrix
      computeRotationMatrix(double euler_angles[VI_EULER_ANGLE]);
      //! This routine calculates the acceleration
      //! with a low pass filter
      //! of an auv from velocities
      //! @param[in] velocities array[6]
      //! @param[in] filter velocity matrix[6x1]
      //! @param[in] filter time delta
      //! @return an acceleration matrix[6x1]
      Matrix
      getAcceleration(double velocities[MS_ROWS], Matrix v_bar, double delta_t);

    private:
      //! This routine fill the m_model_coeff vector
      //! with vehicle model parameters
      //! The parameters are calculated by using the
      //! physic characteristics in Parameters
      void
      getModelCoeff();
      //! This routine calculate the inertia and
      //! added mass matrix
      //! @return a Matrix [6x6]
      Matrix
      getInertia();
      //! This routine calculate the coriolis
      //! and centriptal matrix
      //! @param[in] vehicle velocity in a matrix[6x1]
      //! @param[in] vehicle thruster actuation
      //! @return a matrix [6x6]
      Matrix
      getCoriolis(Matrix vel);
      //! This routine return a damping matrix
      //! filled with the values of vector damping
      //! in Parameters
      //! @param[in] vehicle velocity in a matrix[6x1]
      //! @return a matrix[6x6]
      Matrix
      getDamping(Matrix vel);
      //! This routine calculate the restoring
      //! forces matrix
      //! @param[in] vehicle position/orientation
      //! in a matrix[6x1]
      //! @return a matrix[6x1]
      Matrix
      getRestoringForces(Matrix nu);
      //! This routine calculate the lift
      //! matrix
      //! @param[in] vehicle velocity in a matrix[6x1]
      //! @return a matrix[6x6]
      Matrix
      getLift(Matrix vel);
      //! This routine calculate the forces
      //! input matrix
      //! @param[in] vehicle thruster actuation
      //! @param[in] fins position
      //! @param[in] vehicle velocity
      //! @return a matrix[6x1]
      Matrix
      getTau(double thruster, double servo_pos[SI_TOTAL], Matrix vel);

      //! Vehicle Model Physic Characteristics
      Parameters m_args;
      //! Vehicle Model coefficients
      double m_model_coeff[VI_MODEL_COEFF];
      //! Vehicle Body Frame Model Matrices
      Math::Matrix m_inertia_added_mass_matrix;
      Math::Matrix m_coriolis_matrix;
      Math::Matrix m_damping_matrix;
      Math::Matrix m_restoring_matrix;
      Math::Matrix m_lift_matrix;
      Math::Matrix m_tau_matrix;
      //! Vehicle Earth Frame Model Matrices
      Math::Matrix m_inertia_added_mass_n;
      Math::Matrix m_coriolis_n;
      Math::Matrix m_damping_n;
      Math::Matrix m_restoring_n;
      Math::Matrix m_lift_n;
      Math::Matrix m_tau_n;
    };
  }
}
#endif
