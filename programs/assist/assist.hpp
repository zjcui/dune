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

#ifndef ASSIST_HPP_INCLUDED_
#define ASSIST_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Math.hpp>
#include <DUNE/Memory.hpp>

#include "ascentrate.hpp"

using DUNE_NAMESPACES;

class Assist
{
public:
  struct Arguments
  {
    //! RPM value for dislodging the vehicle
    float dislodge_rpm;
    //! Depth threshold to consider that it is submerged
    float depth_threshold;
    //! Threshold for the depth rate of change
    float min_ascent_rate;
    //! Window size for the moving average of the ascent rate
    unsigned ascent_wsize;
    //! Minimum time with a low ascent rate before triggering assist
    float trigger_time;
  };

  Assist(Arguments* args, double start_time):
    m_astate(ST_IDLE),
    m_dtimer(-1.0, true, start_time),
    m_args(args)
  {
    m_ar = new AscentRate(m_args->ascent_wsize, c_depth_period, start_time);
  }

  ~Assist(void)
  {
    Memory::clear(m_ar);
  }

  void
  onVehicleState(const IMC::VehicleState* msg)
  {
    m_vstate = msg->op_mode;
  }

  void
  onVehicleMedium(const IMC::VehicleMedium* msg)
  {
    m_medium = msg->medium;
  }

  void
  onEstimatedState(const IMC::EstimatedState* msg)
  {
    m_dtimer.update(msg->getTimeStamp());

    m_ar->update(msg->depth, msg->getTimeStamp());
    m_depth = msg->depth;
  }

  void
  onPeriodic(void)
  {
    switch (m_astate)
    {
      case ST_IDLE:
        onIdle();
        break;
      case ST_CHECK_STUCK:
        onCheckStuck();
        break;
      case ST_START_DISLODGE:
        onStartDislodge();
        break;
      case ST_WAIT_DISLODGE:
        onWaitDislodge();
        break;
      default:
        break;
    }
  }

private:
  //! Time between depth updates
  static const float c_depth_period = 5.0;
  //! Stabilization time after finishing plan
  static const float c_stab_time = 20.0;

  enum AssistState
  {
    //! Idle state
    ST_IDLE,
    //! Check if stuck
    ST_CHECK_STUCK,
    //! Send acoustic signal
    ST_ACOUSTIC,
    //! Start dislodge
    ST_START_DISLODGE,
    //! Wait for dislodge to be done
    ST_WAIT_DISLODGE
  };

  bool
  mainConditions(void)
  {
    if ((m_vstate != IMC::VehicleState::VS_SERVICE) &&
        (m_vstate != IMC::VehicleState::VS_ERROR))
      return false;

    if (m_medium != IMC::VehicleMedium::VM_UNDERWATER)
      return false;

    if (m_depth < m_args->depth_threshold)
      return false;

    return true;
  }

  bool
  ascentCondition(void)
  {
    std::cerr << "mean is " << m_ar->mean() << std::endl;
    return (m_ar->mean() < m_args->min_ascent_rate);
  }

  void
  setState(AssistState state)
  {
    switch (state)
    {
      case ST_CHECK_STUCK:
        m_dtimer.setTop(m_args->trigger_time);
      case ST_START_DISLODGE:
        std::cerr << "STARTING DISLODGE HERE "
                  << Time::Format::getTimeDate(m_dtimer.getReal())
                  << std::endl;
        setState(ST_IDLE);
        break;
      default:
        break;
    }

    m_astate = state;
  }

  void
  onIdle(void)
  {
    if (!mainConditions())
    {
      m_dtimer.setTop(c_stab_time);
      return;
    }

    if (m_dtimer.overflow())
    {
      setState(ST_CHECK_STUCK);
      m_dtimer.reset();
    }
  }

  void
  onCheckStuck(void)
  {
    if (!mainConditions())
    {
      setState(ST_IDLE);
      return;
    }

    if (ascentCondition() && m_dtimer.overflow())
    {
      std::cerr << "mean is " << m_ar->mean() << std::endl;
      setState(ST_START_DISLODGE);
      m_dtimer.reset();
    }
  }

  void
  onStartDislodge(void)
  {

  }

  void
  onWaitDislodge(void)
  {

  }

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

    inline double
    getReal(void)
    {
      return real;
    }
  };

  //! Current depth
  float m_depth;
  //! Current Medium
  uint8_t m_medium;
  //! Current vehicle state
  uint8_t m_vstate;
  //! Rate of ascent
  AscentRate* m_ar;
  //! Task's state
  AssistState m_astate;
  //! Timer for triggering the dislodge
  DualClock m_dtimer;
  //! Task arguments.
  const Arguments* m_args;
};
#endif
