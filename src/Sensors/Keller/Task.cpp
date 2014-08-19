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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// ISO C++ 98 headers.
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Parser.hpp"

namespace Sensors
{
  //! Device driver for %Keller Pressure %Sensors.
  namespace Keller
  {
    using DUNE_NAMESPACES;

    enum DriverState
    {
      DS_IDLE,
      DS_ACTIVATE_BEGIN,
      DS_POWER_ON,
      DS_POWER_ON_WAIT,
      DS_OPEN,
      DS_INIT,
      DS_ACTIVE_BEGIN,
      DS_ACTIVE
    };

    //! Task arguments.
    struct Arguments
    {
      //! UART device.
      std::string uart_dev;
      //! UART baud rate.
      unsigned uart_baud;
      //! True if UART has local echo enabled.
      bool uart_echo;
      //! Water density.
      float water_density;
      //! Device address.
      unsigned address;
      //! Device power channel.
      std::string power_channel;
    };

    struct Task: public Tasks::Task
    {
      //! IMC pressure message.
      IMC::Pressure m_pressure;
      //! IMC depth message.
      IMC::Depth m_depth;
      //! IMC temperature message.
      IMC::Temperature m_temperature;
      //! Initialize and release command.
      std::vector<uint8_t> m_cmd_init;
      //! Set pressure sensor 1 zero point command.
      std::vector<uint8_t> m_cmd_zero;
      //! Serial number request comannd.
      std::vector<uint8_t> m_cmd_serial;
      //! Pressure measurement request.
      std::vector<uint8_t> m_cmd_press;
      //! Temperature measurement request.
      std::vector<uint8_t> m_cmd_temp;
      //! Command parser.
      Parser m_parser;
      //! Read buffer.
      uint8_t m_buffer[64];
      //! Vendor.
      std::string m_vendor;
      //! Model.
      std::string m_model;
      //! Firmware version.
      std::string m_version;
      //! Serial number.
      std::string m_serial;
      //! Driver state.
      DriverState m_driver_state;
      //! True if power channel is on, false otherwise.
      bool m_power;
      //! Depth conversion factor (bar to meter of fluid).
      double m_depth_conv;
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_vendor("Keller"),
        m_driver_state(DS_IDLE),
        m_power(false),
        m_depth_conv(0),
        m_handle(NULL)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_DEVELOPER,
                    true);

        param("Power Channel", m_args.power_channel)
        .defaultValue("")
        .description("Name of the device's power channel");

        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("9600")
        .description("Serial port baud rate");

        param("Serial Port - Local Echo", m_args.uart_echo)
        .defaultValue("false")
        .description("Set to true if serial port has local echo enabled");

        param("Device Address", m_args.address)
        .minimumValue("0")
        .maximumValue("250");

        param("Water Density", m_args.water_density)
        .units(Units::KilogramPerCubicMeter)
        .defaultValue("1025.0")
        .description("Water density");

        m_cmd_init.resize(4);
        m_cmd_init[IDX_FUNC_CODE] = FUNC_INITIALIZE_AND_RELEASE;

        m_cmd_zero.resize(5);
        m_cmd_zero[IDX_FUNC_CODE] = FUNC_SET_ZERO_POINT;
        m_cmd_zero[IDX_DATA0] = ZPA_SET_ZERO_P1;

        m_cmd_serial.resize(4);
        m_cmd_serial[IDX_FUNC_CODE] = FUNC_READ_SERIAL_NUMBER;

        m_cmd_press.resize(5);
        m_cmd_press[IDX_FUNC_CODE] = FUNC_READ_CHANNEL;
        m_cmd_press[IDX_DATA0] = CHANNEL_P1;

        m_cmd_temp.resize(5);
        m_cmd_temp[IDX_FUNC_CODE] = FUNC_READ_CHANNEL;
        m_cmd_temp[IDX_DATA0] = CHANNEL_TOB1;

        bind<IMC::PowerChannelState>(this);
      }

      //! Called on task parameters are updated.
      void
      onUpdateParameters(void)
      {
        // Update power channel.
        if (paramChanged(m_args.power_channel))
        {
          if (m_args.power_channel.empty())
            m_power = true;
        }

        // Update device address.
        if (paramChanged(m_args.address))
        {
          m_parser.setAddress(m_args.address);
          updateCommands();
        }

        // Update depth conversion factor .
        if (paramChanged(m_args.water_density))
        {
          m_depth_conv = Math::c_pascal_per_bar / (Math::c_gravity * m_args.water_density);
        }
      }

      void
      onRequestActivation(void)
      {
        m_driver_state = DS_ACTIVATE_BEGIN;
      }

      //! Update prepared commands with new address and CRC16.
      void
      updateCommands(void)
      {
        // Prepare initialize and release command.
        m_cmd_init[IDX_DEV_ADDR] = m_args.address;
        updateCommandCRC16(m_cmd_init);

        // Prepare set pressure sensor 1 zero point command.
        m_cmd_zero[IDX_DEV_ADDR] = m_args.address;
        updateCommandCRC16(m_cmd_zero);

        // Prepare firmware version request.
        m_cmd_serial[IDX_DEV_ADDR] = m_args.address;
        updateCommandCRC16(m_cmd_serial);

        // Prepare pressure measurement request.
        m_cmd_press[IDX_DEV_ADDR] = m_args.address;
        updateCommandCRC16(m_cmd_press);

        // Prepare temperature measurement request.
        m_cmd_temp[IDX_DEV_ADDR] = m_args.address;
        updateCommandCRC16(m_cmd_temp);
      }

      //! Update CRC16 of a command.
      //! @param[in] cmd bytes of a command.
      static void
      updateCommandCRC16(std::vector<uint8_t>& cmd)
      {
        uint16_t crc = Algorithms::CRC16::compute(&cmd[0], cmd.size() - 2, 0xFFFF);
        cmd[cmd.size() - 2] = crc >> 8;
        cmd[cmd.size() - 1] = crc;
      }

      // void
      // onResourceAcquisition(void)
      // {
      //   try
      //   {
      //     // if (openSocket())
      //     //   return;

      //     m_handle = new SerialPort(m_args.uart_dev, m_args.uart_baud);
      //   }
      //   catch (std::runtime_error& e)
      //   {
      //     err("%s", e.what());
      //     throw RestartNeeded(DTR(Status::getString(CODE_COM_ERROR)), 5);
      //   }
      // }

      //! Send IMC message to turn on power channel.
      void
      turnOnPower(void)
      {
        IMC::PowerChannelControl pcc;
        pcc.name = m_args.power_channel;
        pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
        dispatch(pcc);
      }

      //! Consume state of power channel matching task's power_channel
      //! parameter.
      //! @param[in] msg Power Channel State message.
      void
      consume(const IMC::PowerChannelState* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->name != m_args.power_channel)
          return;

        m_power = msg->state == IMC::PowerChannelState::PCS_ON;
      }

      //! Send a command to the device and wait for response.
      //! @param[in] cmd command bytes.
      //! @param[in] timeout amount of time to wait for response.
      //! @return true if command was sent and response was received,
      //! false otherwise.
      bool
      sendCommand(const std::vector<uint8_t>& cmd, double timeout = 1.0)
      {
        // Write command to handle.
        m_handle->write(&cmd[0], cmd.size());

        // Setup number of echoed bytes if needed.
        size_t cmd_echo_remain = 0;
        if (m_args.uart_echo)
          cmd_echo_remain = cmd.size();

        // Wait for response to arrive.
        Counter<double> timer(timeout);
        while (!timer.overflow())
        {
          if (!Poll::poll(*m_handle, timer.getRemaining()))
            continue;

          size_t rv = m_handle->read(m_buffer, sizeof(m_buffer));
          for (size_t i = 0; i < rv; ++i)
          {
            if (cmd_echo_remain > 0)
            {
              uint8_t byte = cmd[cmd.size() - cmd_echo_remain];
              if (byte != m_buffer[i])
                std::fprintf(stderr, "echo mismatch %02X != %02X\n", byte, m_buffer[i]);
              --cmd_echo_remain;
            }
            else if (m_parser.parse(m_buffer[i]))
            {
              if (m_parser.getFrame()[IDX_FUNC_CODE] == cmd[IDX_FUNC_CODE])
              {
                //inf("got response in %0.2f", Clock::get() - time_start);
                return true;
              }
            }
          }
        }

        return false;
      }

      //! Each time the device is switched on by applying the supply
      //! voltage or after a break in the power supply, the device
      //! must be initialised via this function.
      //! @return true if command was successfully delivered, false
      //! otherwise.
      bool
      initializeAndRelease(void)
      {
        if (!sendCommand(m_cmd_init))
          return false;

        if (m_parser.getFrame()[2] == 5)
          m_model = "Series 30";
        else
          m_model = "Unknown";

        if (m_parser.getFrame()[3] == 1)
          m_model += " (1999)";
        else if (m_parser.getFrame()[3] == 20)
          m_model += " (2002)";

        m_version = String::str("%u.%u", m_parser.getFrame()[4], m_parser.getFrame()[5]);

        debug("vendor: %s", m_vendor.c_str());
        debug("model: %s", m_model.c_str());
        debug("firmware version: %s", m_version.c_str());
        return true;
      }

      //! Set zero point of pressure sensor
      void
      setPressureZeroPoint(void)
      {
        if (sendCommand(m_cmd_zero))
        {
          inf("zero point set");
        }
      }

      //! Read device's serial number.
      //! @return true if serial number was read, false otherwise.
      bool
      readSerialNumber(void)
      {
        if (!sendCommand(m_cmd_serial))
          return false;

        uint32_t value = 0;
        ByteCopy::fromBE(value, &m_parser.getFrame()[2]);
        m_serial = String::str("%u", value);
        return true;
      }

      //! Read pressure value.
      void
      readPressure(void)
      {
        if (sendCommand(m_cmd_press))
        {
          float value = 0;
          ByteCopy::fromBE(value, &m_parser.getFrame()[2]);

          m_pressure.setTimeStamp();
          m_pressure.value = value * Math::c_pascal_per_bar;

          m_depth.setTimeStamp(m_pressure.getTimeStamp());
          m_depth.value = value * m_depth_conv;

          dispatch(m_pressure, DF_KEEP_TIME);
          dispatch(m_depth, DF_KEEP_TIME);
          m_pressure.toText(std::cerr);
        }
      }

      //! Read temperature value.
      void
      readTemperature(void)
      {
        if (sendCommand(m_cmd_temp))
        {
          float value = 0;
          ByteCopy::fromBE(value, &m_parser.getFrame()[2]);
          m_temperature.value = value;
          dispatch(m_temperature);
        }
      }

      // bool
      // openSocket(void)
      // {
      //   char addr[128] = {0};
      //   unsigned port = 0;

      //   if (std::sscanf(m_args.uart_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
      //     return false;

      //   TCPSocket* sock = new TCPSocket;
      //   sock->connect(addr, port);
      //   m_handle = sock;
      //   return true;
      // }

      void
      updateState(void)
      {
        switch (m_driver_state)
        {
          case DS_IDLE:
            break;

          case DS_ACTIVATE_BEGIN:
            debug("beginning activation");
            m_driver_state = DS_POWER_ON;
            break;

          case DS_POWER_ON:
            debug("sending power on request");
            m_driver_state = DS_POWER_ON_WAIT;
            break;

          case DS_POWER_ON_WAIT:
            if (m_power)
            {
              debug("device is powered on");
              m_driver_state = DS_OPEN;
            }
            break;

          case DS_OPEN:
            debug("opening device");
            m_handle = new SerialPort(m_args.uart_dev, m_args.uart_baud);
            m_driver_state = DS_INIT;
            break;

          case DS_INIT:
            debug("beginning initialization");
            if (initializeAndRelease())
            {
              debug("initialization completed");
              m_driver_state = DS_ACTIVE_BEGIN;
            }
            break;

          case DS_ACTIVE_BEGIN:
            activate();
            m_driver_state = DS_ACTIVE;

          case DS_ACTIVE:
            readPressure();
            readTemperature();
            break;
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          updateState();
        }
      }
    };
  }
}

DUNE_TASK
