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
        parseGain(std::vector<float> gain)
        {
          Matrix Gain = Matrix(6, 6, 0.0);

          for (int k = 0; k < 6; k++)
            Gain(k, k) = gain[k];

          return Gain;
        }

        static Matrix
        computeSignum(Matrix nu_error)
        {
          Matrix signum = Matrix(6, 1, 0.0);

          for (int i = 0; i <= 5; i++)
          {
            if (nu_error(i) < 0)
              signum(i, 0) = - 1;

            if (nu_error(i) >= 0)
              signum(i, 0) = 1;
          }

          return signum;
        }

        static Matrix
        computeTanh(Matrix nu_error, double boundary_layer)
        {
          Matrix tgh = Matrix(6, 1, 0.0);

          for (int i = 0; i <= 5; i++)
            tgh(i, 0) = tanh(nu_error(i) / boundary_layer);

          return tgh;
        }

      };
    }
  }
}

#endif
