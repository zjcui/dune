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

#ifndef NAVIGATION_AUV_SMO_AUX_H
#define NAVIGATION_AUV_SMO_AUX_H

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
        posFromBearingAndRange(Matrix nu, double range, double bearing, double depth)
        {
          nu(0,0) = range * std::cos(bearing);
          nu(1,0) = range * std::sin(bearing);
          nu(2,0) = depth;

          return nu;
        }

        static Matrix
        orientationFromEulerAngles(Matrix nu, double euler_angles[])
        {
          nu(3,0) = euler_angles[0];
          nu(4,0) = euler_angles[1];
          nu(5,0) = euler_angles[2];

          return nu;
        }

        static Matrix
        normalizePositionOrientation(Matrix nu)
        {
          for (int k = 3; k < 6; k++)
            nu(k, 0) = Math::Angles::normalizeRadian(nu(k, 0));

          return nu;
        }


        static void
        transformToEarthFrame(Matrix* inertia_added_mass_n, Matrix* coriolis_n, Matrix* damping_n, Matrix* restoring_n, Matrix* lift_n, Matrix* tau_n, Matrix rotation_matrix,
                              Matrix inertia_added_mass, Matrix coriolis, Matrix damping, Matrix restoring, Matrix lift, Matrix tau, Matrix rotation_matrix_diff)
        {
          *inertia_added_mass_n = inverse(transpose(rotation_matrix)) * (inertia_added_mass)  * inverse(rotation_matrix);
          *coriolis_n = inverse(transpose(rotation_matrix)) * (coriolis - inertia_added_mass * inverse(rotation_matrix) * rotation_matrix_diff) * inverse(rotation_matrix);
          *damping_n = inverse(transpose(rotation_matrix)) * damping * inverse(rotation_matrix);
          *restoring_n = inverse(transpose(rotation_matrix)) * restoring;
          *lift_n = inverse(transpose(rotation_matrix)) * lift * inverse(rotation_matrix);
          *tau_n = inverse(transpose(rotation_matrix)) * tau;
        }

        static Matrix
        computeStandardError(Matrix nu_error)
        {
          for (int k = 3; k < 6; k++)
          {
            if (nu_error(k,0) <= -3.14)
              nu_error(k,0) = nu_error(k,0) + DUNE::Math::c_two_pi;
            if (nu_error(k,0) >= 3.14)
              nu_error(k,0) = nu_error(k,0) - DUNE::Math::c_two_pi;
          }

          return nu_error;
        }

        static Matrix
        computeCov(Matrix Cov, Matrix x, Matrix y, int n)
        {
          Cov(0,0) = Cov(0,0) + x(0);
          Cov(0,1) = Cov(0,1) + y(0);
          Cov(0,3) = Cov(0,3) + x(0) * y(0);
          Cov(0,2) = Cov(0,2) + 1.0 / n * ((x(0) - Cov(0,0) / n) * (y(0) - Cov(0,1) / n));

          Cov(1,0) = Cov(1,0) + x(1);
          Cov(1,1) = Cov(1,1) + y(1);
          Cov(1,2) = Cov(1,2) + 1.0 / n * ((x(1) - Cov(1,0) / n) * (y(1) - Cov(1,1) / n));

          Cov(2,0) = Cov(2,0) + x(2);
          Cov(2,1) = Cov(2,1) + y(2);
          Cov(2,2) = Cov(2,2) + 1.0 / n * ( (x(2) - Cov(2,0) / n) * (y(2) - Cov(2,1) / n));

          Cov(3,0) = Cov(3,0) + x(3);
          Cov(3,1) = Cov(3,1) + y(3);
          Cov(3,2) = 1.0 / n * ( (x(3) - Cov(3,0) / n) * (y(3) - Cov(3,1) / n));

          Cov(4,0) = Cov(4,0) + x(4);
          Cov(4,1) = Cov(4,1) + y(4);
          Cov(4,2) = 1.0 / n * ((x(4) - Cov(4,0) / n) * (y(4) - Cov(4,1) / n));

          Cov(5,0) = Cov(5,0) + x(5);
          Cov(5,1) = Cov(5,1) + y(5);
          Cov(5,2) = 1.0 / n * ((x(5) - Cov(5,0) / n) * (y(5) - Cov(5,1) / n));

          return Cov;
        }

      };
    }
  }
}
#endif
