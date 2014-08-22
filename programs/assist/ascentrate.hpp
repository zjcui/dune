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
// Author: Pedro Calado                                                     *
//***************************************************************************

#ifndef ASCENTRATE_HPP_INCLUDED_
#define ASCENTRATE_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math.hpp>
#include <DUNE/Time.hpp>

using DUNE_NAMESPACES;

class AscentRate
{
public:
  AscentRate(unsigned window_size, float period, double start_time):
    m_timer(period, true, start_time)
  {
    m_avg = new Math::MovingAverage<float>(window_size);
  }

  ~AscentRate(void)
  {
    delete m_avg;
  }

  float
  update(float vz, double time = 0.0)
  {
    m_timer.update(time);

    if (!m_timer.overflow())
      return mean();

    return m_avg->update(vz);
  }

  float
  mean(void) const
  {
    return m_avg->mean();
  }

private:
  struct DualClock
  {
    //! Monotonic clock
    Time::Counter<float> mono;
    //! Realtime clock now
    double real;
    //! Realtime clock start
    double start;
    //! Top of the clock
    double top;
    //! True if realtime clock
    bool type_real;

    DualClock(double t = 0.0, bool type = false, double start_time = 0.0):
      mono(t),
      real(start_time),
      start(start_time),
      top(t),
      type_real(type)
    { }

    void
    setTop(double new_top)
    {
      if (type_real)
        top = new_top;
      else
        mono.setTop(new_top);

      reset();
    }

    void
    reset(void)
    {
      if (type_real)
        start = real;
      else
        mono.reset();
    }

    inline bool
    overflow(void)
    {
      if (type_real)
        return real - start > top;
      else
        return mono.overflow();
    }

    void
    update(double time)
    {
      if (!type_real)
        return;

      real = time;
    }
  };

  //! Moving average for the ascent rate
  Math::MovingAverage<float>* m_avg;
  //! Counter for the time between updates
  DualClock m_timer;
};
#endif
