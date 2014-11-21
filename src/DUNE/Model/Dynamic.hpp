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
    class Dynamic
    {
    public:

      //! Method to compute AUV's model coefficients
      void
      computeModelCoeff(double Mass, double a, double b, double c,double Volume,double l, double d, double D, double Sfin,double *Model_Coeff);

      //! Method to compute M matrix for AUV dynamics
      Matrix
      computeM(double Mass,double *Model_Coeff, double zG);

      //! Method to compute C matrix for AUV dynamics
      Matrix
      computeC(double Mass, double *Model_Coeff, double zG, Matrix vel_est);

      //! Method to compute D matrix for AUV dynamics
      Matrix
      computeD(Matrix vel_est, std::vector<float> damping);

      //! Method to compute G matrix for AUV dynamics
      Matrix
      computeG(double *Model_Coeff, double zG, Matrix nu_est);

      //! Method to compute L matrix for AUV dynamics
      Matrix
      computeL(Matrix vel_est,double l, double *Model_Coeff);

      //! Method to compute Tau matrix for AUV dynamics
      Matrix
      computeTau(double thruster, double servo_pos[3], Matrix vel, double *Model_Coeff);

      //! Method to compute Acceleration with a low pass filter
      Matrix
      computeAcceleration(double velocities[6], Matrix v_bar, double delta_t);

      //! Method to compute Rotation Matrix
      Matrix
      computeRotationMatrix(double euler_angles[3]);
    };
  }
}
#endif
