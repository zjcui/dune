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

#ifndef NAVIGATION_AUV_SMO_GAIN_MATRICES_H
#define NAVIGATION_AUV_SMO_GAIN_MATRICES_H

#include <DUNE/DUNE.hpp>

namespace Navigation
{
  namespace AUV
  {
    namespace SMO
    {
      using DUNE_NAMESPACES;

      class GainMatrices
      {
      public:

        static Matrix
        computeK1(float k1[6])
        {
          Matrix K1 = Matrix(6, 6, 0.0);
          K1(0, 0) = k1[0];
          K1(1, 1) = k1[1];
          K1(2, 2) = k1[2];
          K1(3, 3) = k1[3];
          K1(4, 4) = k1[4];
          K1(5, 5) = k1[5];

          return K1;
        }

        static Matrix
        computeK2(float k2[6])
        {
          Matrix K2 = Matrix(6, 6, 0.0);
          K2(0, 0) = k2[0];
          K2(1, 1) = k2[1];
          K2(2, 2) = k2[2];
          K2(3, 3) = k2[3];
          K2(4, 4) = k2[4];
          K2(5, 5) = k2[5];

          return K2;
        }

        static Matrix
        computeAlfa1(float alfa_1[6])
        {
          Matrix alfa1 = Matrix(6, 6, 0.0);
          alfa1(0, 0) = alfa_1[0];
          alfa1(1, 1) = alfa_1[1];
          alfa1(2, 2) = alfa_1[2];
          alfa1(3, 3) = alfa_1[3];
          alfa1(4, 4) = alfa_1[4];
          alfa1(5, 5) = alfa_1[5];

          return alfa1;
        }

        static Matrix
        computeAlfa2(float alfa_2[6])
        {
          Matrix alfa2 = Matrix(6, 6, 0.0);
          alfa2(0, 0) = alfa_2[0];
          alfa2(1, 1) = alfa_2[1];
          alfa2(2, 2) = alfa_2[2];
          alfa2(3, 3) = alfa_2[3];
          alfa2(4, 4) = alfa_2[4];
          alfa2(5, 5) = alfa_2[5];

          return alfa2;
        }

        static Matrix
        computeSignum(Matrix nu_error)
        {
          Matrix signum = Matrix(6, 1, 0.0);
          int i=0;

          for (i = 0; i <= 5; i++)
          {
            if (nu_error(i)<0)
            {
              signum(i, 0) = - 1;
            }
            if (nu_error(i)>=0)
            {
              signum(i, 0) = 1;
            }
          }

          return signum;
        }

        static Matrix
        computeTanh(Matrix nu_error, double boundary_layer)
        {
          Matrix tgh = Matrix(6,1,0.0);
          int i=0;

          for (i = 0; i <= 5; i++)
          {
            tgh(i, 0) = tanh(nu_error(i) / boundary_layer);
          }

          return tgh;
        }

      };
    }
  }
}

#endif
