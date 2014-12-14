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
#include <DUNE/Navigation/SlidingModeObserver.hpp>

namespace DUNE
{
  namespace Navigation
  {
    SlidingModeObserver::SlidingModeObserver(void)
    {
      clear();
    }

    void
    SlidingModeObserver::clear(void)
    {
      m_k_1.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0);
      m_k_2.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0);
      m_alfa_1.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0);
      m_alfa_2.resizeAndFill(MS_ROWS, MS_MAX_COLUMNS, 0);
      m_tang_hyper.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0);
      m_signum.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0);
      m_error.resizeAndFill(MS_ROWS, MS_MIN_COLUMNS, 0);
    }

    void
    SlidingModeObserver::load(const Parameters& args)
    {
      m_args = args;
      m_k_1 = parseGains(m_args.k1);
      m_k_2 = parseGains(m_args.k2);
      m_alfa_1 = parseGains(m_args.alfa1);
      m_alfa_2 = parseGains(m_args.alfa2);
    }

    SlidingModeObserver::~SlidingModeObserver(void)
    {
      erase();
    }

    void
    SlidingModeObserver::erase(void)
    {
      m_args.k1.clear();
      m_args.k2.clear();
      m_args.alfa1.clear();
      m_args.alfa2.clear();
    }

    Matrix
    SlidingModeObserver::parseGains(std::vector<double> gain)
    {
      double tmp_array[MS_ROWS];
      std::copy(gain.begin(), gain.end(), tmp_array);

      return Matrix(tmp_array, MS_ROWS);
    }

    Matrix
    SlidingModeObserver::updateError(Matrix est, Matrix  real)
    {
      //Calculate error for Sliding Mode Observer
      m_error = est - real;

      // Normalize orientation error
      getStandardError();

      // To minimize peaks by GPS Corrections - to be used after code tested at sea
      for (int k = 0; k < MS_SEPARATOR_POS_OR; k++)
      {
        if (std::abs(m_error(k, 0)) >= 3)
        {
          m_error(k, 0) = 0.0;
          est(k, 0) = real(k, 0);
        }
      }

      return est;
    }

    void
    SlidingModeObserver::getStandardError(void)
    {
      for (int k = MS_SEPARATOR_POS_OR; k < MS_ROWS; k++)
      {
        if (m_error(k, 0) <= -DUNE::Math::c_pi)
          m_error(k, 0) = m_error(k, 0) + DUNE::Math::c_two_pi;
        if (m_error(k, 0) >= DUNE::Math::c_pi)
          m_error(k, 0) = m_error(k, 0) - DUNE::Math::c_two_pi;
      }
    }

    Matrix
    SlidingModeObserver::updateSecondOrderEquation(Matrix second_order_function)
    {
      getTanh(m_args.second_bound);

      return -m_alfa_2 * m_error + second_order_function - m_k_2 * m_tang_hyper;
    }

    Matrix
    SlidingModeObserver::updateFirstOrderEquation(Matrix first_order_function)
    {
      getTanh(m_args.first_bound);

      return -m_alfa_1 * m_error + first_order_function - m_k_1 * m_tang_hyper;
    }

    void
    SlidingModeObserver::getTanh(float boundary_layer)
    {
      for (int i = 0; i < MS_ROWS; i++)
        m_tang_hyper(i, 0) = tanh(m_error(i) / boundary_layer);
    }

    void
    SlidingModeObserver::getSignum(void)
    {
      for (int i = 0; i < MS_ROWS; i++)
      {
        if (m_error(i) < 0)
          m_signum(i, 0) = - 1;

        if (m_error(i) >= 0)
          m_signum(i, 0) = 1;
      }
    }
  }
}
