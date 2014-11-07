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

#define NELEMS(x)  (sizeof(x) / sizeof(x[0]))

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

        static double
        computeAverageFilter(int flag_ini, int window, double data[])
        {
          int i;
          double sum;
          int counter;
          double average;

          i = 0;
          sum = 0;
          counter = 0;
          average = 0;

          if (flag_ini == 0)
          {
            for (i = 0; i < window; i++)
            {
              if (data[i] != 0)
              {
                sum = sum + data[i];
                counter++;
              }
            }
            average = sum / counter;
          }

          if (flag_ini ==1)
          {
            for (i = 0; i < window; i++)
            {
              sum = sum + data[i];
              counter++;
            }
            average = sum / counter;
          }

          return average;
        }

        static Matrix
        computeAcceleration(double velocities[6], Matrix v_bar, double delta_t)
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


        static Matrix
        computeRotationMatrix(double euler_angles[3])
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

        static Matrix
        computeStandardError(Matrix nu_error)
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

        static Matrix
        computeCov(Matrix Cov,Matrix x, Matrix y,int n)
        {
          Cov(0,0) = Cov(0,0) + x(0);
          Cov(0,1) = Cov(0,1) + y(0);Cov(0,3) = Cov(0,3) + x(0)*y(0);
          Cov(0,2) = Cov(0,2) + 1.0 / n * ( (x(0) - Cov(0,0) / n) * (y(0) - Cov(0,1) / n) );

          Cov(1,0) = Cov(1,0) + x(1);
          Cov(1,1) = Cov(1,1) + y(1);
          Cov(1,2) = Cov(1,2) + 1.0 / n * ( (x(1) - Cov(1,0) / n) * (y(1) - Cov(1,1) / n) );

          Cov(2,0) = Cov(2,0) + x(2);
          Cov(2,1) = Cov(2,1) + y(2);
          Cov(2,2) = Cov(2,2) + 1.0 / n * ( (x(2) - Cov(2,0) / n) * (y(2) - Cov(2,1) / n) );

          Cov(3,0) = Cov(3,0) + x(3);
          Cov(3,1) = Cov(3,1) + y(3);
          Cov(3,2) = 1.0 / n * ( (x(3) - Cov(3,0) / n) * (y(3) - Cov(3,1) / n) );

          Cov(4,0) = Cov(4,0) + x(4);
          Cov(4,1) = Cov(4,1) + y(4);
          Cov(4,2) = 1.0 / n * ( (x(4) - Cov(4,0) / n) * (y(4) - Cov(4,1) / n) );

          Cov(5,0) = Cov(5,0) + x(5);
          Cov(5,1) = Cov(5,1) + y(5);
          Cov(5,2) = 1.0 / n * ( (x(5) - Cov(5,0) / n) * (y(5) - Cov(5,1) / n) );

          return Cov;
        }

      };
    }
  }
}
#endif
