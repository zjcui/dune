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

#ifndef NAVIGATION_AUV_SMO_PosfromVel_H
#define NAVIGATION_AUV_SMO_PosfromVel_H

#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace AUV
  {
    namespace SMO
    {
      using DUNE_NAMESPACES;

      class Aux
      {
      public:


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
          compute_J(double euler_angles[3])
          {
            // Pass euler angles to row matrix
            Math::Matrix ea(3,1);
            ea(0) = Math::Angles::normalizeRadian(euler_angles[0]);
            ea(1) = Math::Angles::normalizeRadian(euler_angles[1]);
            ea(2) = Math::Angles::normalizeRadian(euler_angles[2]);

            Math::Matrix J_tmp(6,6,0.0); J_tmp = ea.toDCMSMO();

            return J_tmp;
          }

          static Matrix
          compute_standard_error(Matrix nu_error)
          {
            if (nu_error(3,0) <= -3.14)
              nu_error(3,0) = nu_error(3,0)+360*3.14/180;
            if (nu_error(3,0) >= 3.14)
              nu_error(3,0) = nu_error(3,0)-360*3.14/180;

            if (nu_error(4,0) <= -3.14)
              nu_error(4,0) = nu_error(4,0)+360*3.14/180;
            if (nu_error(4,0) >= 3.14)
              nu_error(4,0) = nu_error(4,0)-360*3.14/180;

            if (nu_error(5,0) <= -3.14)
              nu_error(5,0) = nu_error(5,0)+360*3.14/180;
            if (nu_error(5,0) >= 3.14)
              nu_error(5,0) = nu_error(5,0)-360*3.14/180;

           return nu_error;
          }

      };
    }
  }
}
#endif
