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

#ifndef DUNE_MATH_MATRIXDERIVATIVE_HPP_INCLUDED_
#define DUNE_MATH_MATRIXDERIVATIVE_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cmath>

// DUNE headers.
#include <DUNE/Config.hpp>
#include <DUNE/Time/Delta.hpp>
#include <DUNE/Math/Matrix.hpp>

namespace DUNE
{
  namespace Math
  {
    // %Matrix Derivative applies Newton's difference quotient.
    class MatrixDerivative
    {
    public:
      //! Constructor.
      MatrixDerivative(size_t r, size_t c)
      {
        clear(r, c);
      }

      //! Clear data.
      void
      clear(int r, size_t c)
      {
        m_val_latest.resizeAndFill(r, c, 0.0);
        m_val_previous.resizeAndFill(r, c, 0.0);
        m_zero.resizeAndFill(r, c, 0.0);
        m_derivative.resizeAndFill(r, c, 0.0);
        m_delta.clear();
      }

      //! Update with new value.
      Matrix
      update(const Matrix& value)
      {
        m_val_previous = m_val_latest;
        m_val_latest = value;

        double tstep = m_delta.getDelta();

        if (tstep <= 0.0)
          return m_zero;

        m_derivative = (m_val_latest - m_val_previous) / tstep;

        return m_derivative;
      }

      //! Check current derivative.
      Matrix
      check(void) const
      {
        return m_derivative;
      }

    private:
      //! Latest value.
      Matrix m_val_latest;
      //! Previous value.
      Matrix m_val_previous;
      //! Derivative.
      Matrix m_derivative;
      //! Zero Matrix
      Matrix m_zero;
      //! Time window between values.
      DUNE::Time::Delta m_delta;
    };
  }
}

#endif
