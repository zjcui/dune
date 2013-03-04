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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#ifndef ACTUATORS_SCRTV4_MESSAGES_HPP_INCLUDED_
#define ACTUATORS_SCRTV4_MESSAGES_HPP_INCLUDED_

// DUNE headers.
#include <DUNE/Utils/ByteCopy.hpp>
#include <DUNE/Hardware/UCTK/Message.hpp>

// Local headers.
#include "Constants.hpp"

namespace Actuators
{
  namespace SCRTv4
  {
    //! Constant parameters.
    struct ParamsCon: public DUNE::Hardware::UCTK::Message
    {
      //! PWM frequency (Hz).
      uint16_t pwm_frq;
      //! PWM period (ticks).
      uint16_t pwm_per;
      //! Pulse width resolution.
      uint8_t pulse_width_res;

      ParamsCon(void)
      { }

      ParamsCon(const uint8_t* buffer, unsigned buffer_size)
      {
        deserialize(buffer, buffer_size);
      }

      uint8_t
      getId(void) const
      {
        return CMD_PARAMS_CON;
      }

      uint8_t
      getSize(void) const
      {
        return sizeof(pwm_frq)
        + sizeof(pwm_per)
        + sizeof(pulse_width_res);
      }

      void
      serialize(uint8_t* buffer, unsigned buffer_size) const
      {
        (void)buffer;
        (void)buffer_size;
      }

      void
      deserialize(const uint8_t* buffer, unsigned buffer_size)
      {
        (void)buffer_size;
        const uint8_t* ptr = buffer;
        ptr += DUNE::Utils::ByteCopy::fromLE(pwm_frq, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(pwm_per, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(pulse_width_res, ptr);
      }

      void
      dump(std::ostream& os)
      {
        os << "\nPARAMS_CON" << std::endl;
        os << "  pwm_frq             = " << (unsigned)pwm_frq << std::endl
           << "  pwm_per             = " << (unsigned)pwm_per << std::endl
           << "  pulse_width_res     = " << (unsigned)pulse_width_res << std::endl;
      }
    };

    //! Effective parameters. These parameters are used for the normal
    //! operation of the device.
    struct ParamsEff: public DUNE::Hardware::UCTK::Message
    {
      //! Effective pulse width increment.
      uint16_t pulse_width_inc;
      //! Minimum effective pulse width for each servo.
      uint16_t pulse_width_min[c_servo_count];
      //! Maximum effective pulse width for each servo.
      uint16_t pulse_width_max[c_servo_count];
      //! Maximum effective excursion from middle to minimum.
      uint16_t exc_to_min[c_servo_count];
      //! Maximum effective excursion from middle to maximum.
      uint16_t exc_to_max[c_servo_count];
      //! Effective excursion from minimum to maximum.
      uint16_t exc[c_servo_count];

      ParamsEff(void)
      { }

      ParamsEff(const uint8_t* buffer, unsigned buffer_size)
      {
        deserialize(buffer, buffer_size);
      }

      uint8_t
      getId(void) const
      {
        return CMD_PARAMS_EFF;
      }

      uint8_t
      getSize(void) const
      {
        return sizeof(pulse_width_inc)
        + sizeof(pulse_width_min)
        + sizeof(pulse_width_max)
        + sizeof(exc_to_min)
        + sizeof(exc_to_max)
        + sizeof(exc);
      }

      void
      serialize(uint8_t* buffer, unsigned buffer_size) const
      {
        (void)buffer;
        (void)buffer_size;
      }

      void
      deserialize(const uint8_t* buffer, unsigned buffer_size)
      {
        (void)buffer_size;
        const uint8_t* ptr = buffer;
        ptr += DUNE::Utils::ByteCopy::fromLE(pulse_width_inc, ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(pulse_width_min[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(pulse_width_max[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(exc_to_min[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(exc_to_max[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(exc[i], ptr);
      }

      void
      dump(std::ostream& os)
      {
        os << "\nPARAMS_EFF" << std::endl;
        os << "  pulse_width_inc     = " << pulse_width_inc << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  pulse_width_min[" << i << "]  = " << pulse_width_min[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  pulse_width_max[" << i << "]  = " << pulse_width_max[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  exc_to_min[" << i << "]       = " << exc_to_min[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  exc_to_max[" << i << "]       = " << exc_to_max[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  exc[" << i << "]              = " << exc[i] << std::endl;
      }
    };

    struct ParamsFac: public DUNE::Hardware::UCTK::Message
    {
      //! Serial Number.
      uint8_t serial;
      //! Production Date: Year since 2000.
      uint8_t prod_year;
      //! Production Date: Month.
      uint8_t prod_month;
      //! Production Date: Day.
      uint8_t prod_day;
      //! Pulse Width - Minimum (ticks).
      uint16_t pulse_width_min;
      //! Pulse Width - Maximum (ticks).
      uint16_t pulse_width_max;
      //! Maximum Excursion (degrees).
      uint8_t exc_max;
      //! Effective Excursion (degrees).
      uint8_t exc_eff;
      //! Current Conversion - Multiplication Factor (x1000).
      uint16_t amp_fac;
      //! Current Conversion - Offset.
      uint16_t amp_off;

      ParamsFac(void)
      { }

      ParamsFac(const uint8_t* buffer, unsigned buffer_size)
      {
        deserialize(buffer, buffer_size);
      }

      uint8_t
      getId(void) const
      {
        return CMD_PARAMS_FAC;
      }

      uint8_t
      getSize(void) const
      {
        return sizeof(serial)
        + sizeof(prod_year)
        + sizeof(prod_month)
        + sizeof(prod_day)
        + sizeof(pulse_width_min)
        + sizeof(pulse_width_max)
        + sizeof(exc_max)
        + sizeof(exc_eff)
        + sizeof(amp_fac)
        + sizeof(amp_off);
      }

      void
      serialize(uint8_t* buffer, unsigned buffer_size) const
      {
        (void)buffer;
        (void)buffer_size;
      }

      void
      deserialize(const uint8_t* buffer, unsigned buffer_size)
      {
        (void)buffer_size;
        const uint8_t* ptr = buffer;
        ptr += DUNE::Utils::ByteCopy::fromLE(serial, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(prod_year, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(prod_month, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(prod_day, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(pulse_width_min, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(pulse_width_max, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(exc_max, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(exc_eff, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(amp_fac, ptr);
        ptr += DUNE::Utils::ByteCopy::fromLE(amp_off, ptr);
      }

      void
      dump(std::ostream& os)
      {
        os << "\nPARAMS_FAC" << std::endl
           << "  serial            = " << (unsigned)serial << std::endl
           << "  prod_year         = " << (unsigned)prod_year << std::endl
           << "  prod_month        = " << (unsigned)prod_month << std::endl
           << "  prod_day          = " << (unsigned)prod_day << std::endl
           << "  pulse_width_min   = " << (unsigned)pulse_width_min << std::endl
           << "  pulse_width_max   = " << (unsigned)pulse_width_max << std::endl
           << "  exc_max           = " << (unsigned)exc_max << std::endl
           << "  exc_eff           = " << (unsigned)exc_eff << std::endl
           << "  amp_fac           = " << (unsigned)amp_fac << std::endl
           << "  amp_off           = " << (unsigned)amp_off << std::endl;
      }
    };

    struct ParamsCalFbk: public DUNE::Hardware::UCTK::Message
    {
      //! Minimum Feedback.
      uint16_t min[c_servo_count];
      //! Maximum Feedback.
      uint16_t max[c_servo_count];

      ParamsCalFbk(void)
      { }

      ParamsCalFbk(const uint8_t* buffer, unsigned buffer_size)
      {
        deserialize(buffer, buffer_size);
      }

      uint8_t
      getId(void) const
      {
        return CMD_PARAMS_CAL_FBK;
      }

      uint8_t
      getSize(void) const
      {
        return sizeof(min)
        + sizeof(max);
      }

      void
      serialize(uint8_t* buffer, unsigned buffer_size) const
      {
        (void)buffer;
        (void)buffer_size;
      }

      void
      deserialize(const uint8_t* buffer, unsigned buffer_size)
      {
        (void)buffer_size;
        const uint8_t* ptr = buffer;
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(min[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(max[i], ptr);
      }

      void
      dump(std::ostream& os)
      {
        os << "\nPARAMS_CAL_FBK" << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  min[" << i << "]    = " << (unsigned)min[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  max[" << i << "]    = " << (unsigned)max[i] << std::endl;
      }
    };

    struct ParamsCalMid: public DUNE::Hardware::UCTK::Message
    {
      //! Pulse widths of middle servo position.
      uint16_t pulse_width[c_servo_count];

      ParamsCalMid(void)
      { }

      ParamsCalMid(const uint8_t* buffer, unsigned buffer_size)
      {
        deserialize(buffer, buffer_size);
      }

      uint8_t
      getId(void) const
      {
        return CMD_PARAMS_CAL_MID;
      }

      uint8_t
      getSize(void) const
      {
        return sizeof(pulse_width);
      }

      void
      serialize(uint8_t* buffer, unsigned buffer_size) const
      {
        (void)buffer;
        (void)buffer_size;
      }

      void
      deserialize(const uint8_t* buffer, unsigned buffer_size)
      {
        (void)buffer_size;
        const uint8_t* ptr = buffer;
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(pulse_width[i], ptr);
      }

      void
      dump(std::ostream& os)
      {
        os << "\nPARAMS_CAL_MID" << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  pulse_width[" << i << "]    = " << (unsigned)pulse_width[i] << std::endl;
      }
    };

    struct Measures: public DUNE::Hardware::UCTK::Message
    {
      uint16_t demand[c_servo_count];
      uint16_t pwidth[c_servo_count];
      uint16_t fbk_raw[c_servo_count];
      uint16_t fbk[c_servo_count];
      uint16_t amp_raw[c_servo_count];
      uint16_t amp[c_servo_count];

      Measures(void)
      { }

      Measures(const uint8_t* buffer, unsigned buffer_size)
      {
        deserialize(buffer, buffer_size);
      }

      uint8_t
      getId(void) const
      {
        return CMD_MEASURES;
      }

      uint8_t
      getSize(void) const
      {
        return sizeof(demand) + sizeof(pwidth) + sizeof(fbk_raw) + sizeof(fbk)
        + sizeof(amp_raw) + sizeof(amp);
      }

      void
      serialize(uint8_t* buffer, unsigned buffer_size) const
      {
        (void)buffer;
        (void)buffer_size;
      }

      void
      deserialize(const uint8_t* buffer, unsigned buffer_size)
      {
        (void)buffer_size;
        const uint8_t* ptr = buffer;
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(demand[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(pwidth[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(fbk_raw[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(fbk[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(amp_raw[i], ptr);
        for (unsigned i = 0; i < c_servo_count; ++i)
          ptr += DUNE::Utils::ByteCopy::fromLE(amp[i], ptr);
      }

      void
      dump(std::ostream& os)
      {
        os << "\nMEASURES" << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  demand[" << i << "]    = " << (unsigned)demand[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  pwidth[" << i << "]    = " << (unsigned)pwidth[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  fbk_raw[" << i << "]    = " << (unsigned)fbk_raw[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  fbk[" << i << "]    = " << (unsigned)fbk[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  amp_raw[" << i << "]    = " << (unsigned)amp_raw[i] << std::endl;
        for (unsigned i = 0; i < c_servo_count; ++i)
          os << "  amp[" << i << "]    = " << (unsigned)amp[i] << std::endl;
      }
    };

    //! Continuous state output rate.
    struct MeasuresRate: public DUNE::Hardware::UCTK::Message
    {
      //! Frequency (Hz).
      uint8_t rate;

      MeasuresRate(void)
      { }

      MeasuresRate(const uint8_t* buffer, unsigned buffer_size)
      {
        deserialize(buffer, buffer_size);
      }

      uint8_t
      getId(void) const
      {
        return CMD_MEASURES_RATE;
      }

      uint8_t
      getSize(void) const
      {
        return sizeof(rate);
      }

      void
      serialize(uint8_t* buffer, unsigned buffer_size) const
      {
        (void)buffer_size;
        buffer[0] = rate;
      }

      void
      deserialize(const uint8_t* buffer, unsigned buffer_size)
      {
        (void)buffer_size;
        rate = buffer[0];
      }
    };

    struct ServoSet: public DUNE::Hardware::UCTK::Message
    {
      uint8_t servo;
      uint8_t demand;

      ServoSet(void)
      { }

      ServoSet(const uint8_t* buffer, unsigned buffer_size)
      {
        deserialize(buffer, buffer_size);
      }

      uint8_t
      getId(void) const
      {
        return CMD_SERVO_SET;
      }

      uint8_t
      getSize(void) const
      {
        return sizeof(servo) + sizeof(demand);
      }

      void
      serialize(uint8_t* buffer, unsigned buffer_size) const
      {
        (void)buffer_size;
        buffer[0] = servo;
        buffer[1] = demand;
      }

      void
      deserialize(const uint8_t* buffer, unsigned buffer_size)
      {
        (void)buffer_size;
        servo = buffer[0];
        demand = buffer[1];
      }
    };
  }
}

#endif
