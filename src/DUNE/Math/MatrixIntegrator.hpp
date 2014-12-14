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

#ifndef DUNE_MATH_MATRIXINTEGRATOR_HPP_INCLUDED_
#define DUNE_MATH_MATRIXINTEGRATOR_HPP_INCLUDED_

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
    // %Matrix Integrator applies Euler method.
    class MatrixIntegrator
    {
    public:
      //! Constructor.
      MatrixIntegrator(size_t r, size_t c)
      {
        clear(r, c);
      }

      //! Clear data.
      void
      clear(size_t r, size_t c)
      {
        m_integrator.resizeAndFill(r, c, 0.0);
        m_zero.resizeAndFill(r, c, 0.0);
        m_delta.clear();
      }

      //! Update with new value.
      Matrix
      update(const Matrix& value)
      {
        double tstep = m_delta.getDelta();

        if (tstep <= 0.0)
          return m_zero;

        m_integrator = m_integrator + value * tstep;

        return m_integrator;
      }

      //! Check current integrator.
      Matrix
      check(void) const
      {
        return m_integrator;
      }

      //! Set initial condition
      void
      setInitialCondition(const Matrix& value)
      {
        m_integrator = value;
      }

    private:
      //! Integrator.
      Matrix m_integrator;
      //! Zero Matrix
      Matrix m_zero;
      //! Time window between values.
      DUNE::Time::Delta m_delta;
    };
  }
}

#endif
