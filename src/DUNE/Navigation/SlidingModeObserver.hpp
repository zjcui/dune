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

#ifndef DUNE_NAVIGATION_SLIDINGMODEOBSERVER_HPP_INCLUDED_
#define DUNE_NAVIGATION_SLIDINGMODEOBSERVER_HPP_INCLUDED_

#include <DUNE/DUNE.hpp>

namespace DUNE
{
  namespace Navigation
  {
    //! Nonlinear Observer
    //! using the sliding technique
    class SlidingModeObserver
    {
    public:
      //! Observer Gains and boundary layers.
      struct Parameters
      {
        //! Gain for first order equation
        std::vector<double> k1;
        //! Gain for second order equation
        std::vector<double> k2;
       //! Luenberger term for first order equation
        std::vector<double> alfa1;
        //! Luenberger term for second order equation
        std::vector<double> alfa2;
        //! Boundary layer for first order equation
        float first_bound;
        //! Boundary layer for second order equation
        float second_bound;
      };
      enum MatrixSize
      {
        MS_ROWS = 6,
        MS_MAX_COLUMNS = 6,
        MS_MIN_COLUMNS = 1,
        MS_SEPARATOR_POS_OR = 3
      };
      //! Constructor
      SlidingModeObserver(void);
      //! Destructor
      ~SlidingModeObserver(void);
      //! This routine initializes all values to zero
      void
      clear(void);
      //! This routine loads the Parameters values,
      //! the gains and the boundary layers
      void
      load(const Parameters& args);
      //! This routine acts as a destructor
      void
      erase(void);
      //! This routine updates the Observer error
      //! @param[in] estimated value
      //! @param[in] real value
      void
      updateError(Matrix est, Matrix  real);
      //! This routine updates the state
      //! of the second order equation
      //! @param[in] second order state[6x1]
      //! @return updated state[6x1]
      Matrix
      updateSecondOrderEquation(Matrix second_order_function);
      //! This routine updates the state
      //! of the first order equation
      //! @param[in] first order state[6x1]
      //! @return updated state[6x1]
      Matrix
      updateFirstOrderEquation(Matrix first_order_function);
    private:
      //! This routine parses the gains from
      //! the structure to member matrices
      //! @param[in] vector with gains
      //! @return diagonal matrix[6x6]
      Matrix
      parseGains(std::vector<double> gain);
      //! This routine calculate the standard
      //! error for vehicle orientation to be
      //! between -pi and pi
      void
      getStandardError(void);
      //! This routine calculate the tanh function
      //! for the Observer
      //! This function is a "slide" function
      void
      getTanh(float boundary_layer);
      //! This routine calculate the signum function
      //! for the Observer
      //! This is a discontinuous function
      void
      getSignum(void);

      //! This struct contains the Observer
      //! gains abd boundary layers
      Parameters m_args;
      //! Matrix for sliding gain for
      //! first order equation
      Math::Matrix m_k_1;
      //! Matrix for sliding gain for
      //! second order equation
      Math::Matrix m_k_2;
      //! Matrix for Luenberger term for
      //! first order equation
      Math::Matrix m_alfa_1;
      //! Matrix for Luenberger term for
      //! second order equation
      Math::Matrix m_alfa_2;
      //! Matrix for the sliding function
      //! depending on state error
      Math::Matrix m_tang_hyper;
      //! Matrix for the discontinuous function
      //! depending on state error
      Math::Matrix m_signum;
      //! Matrix containing the state error
      Math::Matrix m_error;
    };
  }
}
#endif
