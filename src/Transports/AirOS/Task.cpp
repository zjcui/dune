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
#include <cstddef>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Listener.hpp"

namespace Transports
{
  //! %AirOS is responsible to communicate with Ubiquiti's AirOS
  //! wireless and router operating system.
  //!
  //! @author Ricardo Martins
  namespace AirOS
  {
    using DUNE_NAMESPACES;

    //! Command to change shell prompt.
    static const std::string c_cmd_ps1 = "PS1='# '\r\n";
    //! Command to get config.
    static const std::string c_cmd_config = "/usr/www/cfg.cgi\r\n";
    //! Command to get device type.
    static const std::string c_cmd_version = "cut -f3-6 -d. < /usr/lib/version\r\n";
    //! Command to get serial number.
    static const std::string c_cmd_serial = "ifconfig wifi0  | grep HWaddr | awk '{print $5}'\r\n";
    //! Command to get signal strength.
    static const std::string c_cmd_rssi = "echo $(/usr/www/signal.cgi | grep 'signal' | sed 's/[\" , :]/ /g')\r\n";
    //! Command to get the board's model.
    static const std::string c_cmd_model = "grep board_name /etc/board.inc | awk -F\\\" '{print $(NF-1)}'\r\n";

    enum FSMStates
    {
      SS_ACTIVATION_BEGIN,
      SS_ACTIVE_BEGIN,
      SS_ACTIVE,
      SS_DEACTIVATION_BEGIN,
      SS_IDLE_BEGIN,
      SS_IDLE,
      SS_CONNECT,
      SS_CONNECT_WAIT,
      SS_LOGIN_BEGIN,
      SS_LOGIN_WAIT,
      SS_LOGIN_USER,
      SS_LOGIN_USER_WAIT,
      SS_LOGIN_PASS,
      SS_LOGIN_PASS_WAIT,
      SS_SHELL_BEGIN,
      SS_SHELL_WAIT,
      SS_SHELL_PS1_SET,
      SS_SHELL_PS1_WAIT,
      SS_MODEL_GET,
      SS_MODEL_WAIT,
      SS_VERSION_GET,
      SS_VERSION_WAIT,
      SS_SERIAL_GET,
      SS_SERIAL_WAIT,
      SS_CONFIG_GET,
      SS_CONFIG_WAIT,
      SS_RSSI_GET,
      SS_RSSI_WAIT
    };

    //! %Task arguments.
    struct Arguments
    {
      //! IPv4 address.
      Address addr;
      //! Port.
      unsigned port;
      //! Username.
      std::string user;
      //! Password
      std::string pass;
    };

    struct Task: public Tasks::Task
    {
      //! Current setup state.
      FSMStates m_fsm_state;
      //! Buffer.
      std::string m_buffer;
      //! Device model.
      std::string m_model;
      //! Device's firmware version.
      std::string m_version;
      //! Device's serial number.
      std::string m_serial;
      //! Radio mode.
      std::string m_radio_mode;
      //! Country code.
      std::string m_country_code;
      //! ESSID.
      std::string m_essid;
      //! Transmission power.
      std::string m_tx_power;
      //! Radio frequency.
      std::string m_radio_freq;
      //! airMAX enabled.
      std::string m_airmax;
      //! RSSI.
      IMC::RSSI m_rssi;
      //! I/O event.
      IMC::IoEvent m_io_event;
      //! Worker thread.
      Listener* m_worker;
      //! Fault count.
      unsigned m_fault_count;
      //! Watchdog timer.
      Counter<double> m_wdog;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_fsm_state(SS_IDLE_BEGIN),
        m_worker(NULL),
        m_fault_count(0)
      {
        paramActive(Tasks::Parameter::SCOPE_GLOBAL,
                    Tasks::Parameter::VISIBILITY_USER);

        param("IPv4 Address", m_args.addr)
        .defaultValue("192.168.1.20");

        param("Port", m_args.port)
        .defaultValue("23");

        param("Username", m_args.user)
        .defaultValue("ubnt");

        param("Password", m_args.pass)
        .defaultValue("ubnt");

        bind<IMC::IoEvent>(this);
        bind<IMC::DevDataText>(this);
      }

      ~Task(void)
      {
        stopWorker();
      }

      //! Called on activation requests. Effectively starts activation
      //! procedure.
      void
      onRequestActivation(void)
      {
        setState(SS_ACTIVATION_BEGIN);
      }

      //! Called when activation is completed. Sends device
      //! characteristics in the form of EntityState messages.
      void
      onActivation(void)
      {
        setBootState(String::str("vendor: %s", "Ubiquiti"));
        setBootState(String::str("model: %s", m_model.c_str()));
        setBootState(String::str("firmware version: %s", m_version.c_str()));
        setBootState(String::str("serial number: %s", m_serial.c_str()));
        setBootState(String::str("country code: %s", m_country_code.c_str()));
        setBootState(String::str("wireless ESSID: %s", m_essid.c_str()));
        setBootState(String::str("output power: %s dBm", m_tx_power.c_str()));
        setBootState(String::str("radio mode: %s", m_radio_mode.c_str()));
        setBootState(String::str("radio frequency: %s MHz", m_radio_freq.c_str()));
        setBootState(String::str("airMAX: %s", m_airmax.c_str()));
        setBootState("activation complete");
      }

      //! Called on deactivation requests. Starts deactivation
      //! procedure.
      void
      onRequestDeactivation(void)
      {
        setState(SS_DEACTIVATION_BEGIN);
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        m_io_event = *msg;
        //m_io_event.toText(std::cerr);
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        spew("recv: [%s]", sanitize(msg->value).c_str());
        m_buffer.append(msg->value);
      }

      unsigned
      incrementFaultCount(void)
      {
        return ++m_fault_count;
      }

      unsigned
      getFaultCount(void) const
      {
        return m_fault_count;
      }

      void
      clearFaultCount(void)
      {
        m_fault_count = 0;
      }

      unsigned
      getMaxFaultCount(void) const
      {
        return 10;
      }

      void
      restartWorker(void)
      {
        stopWorker();
        startWorker();
      }

      void
      startWorker(void)
      {
        m_worker = new Listener(this, m_args.addr, m_args.port);
        m_worker->start();
      }

      void
      stopWorker(void)
      {
        if (m_worker != NULL)
        {
          m_worker->stopAndJoin();
          delete m_worker;
          m_worker = NULL;
        }
      }

      bool
      parseConfigLine(const std::string& line, const std::string& option, std::string& value)
      {
        if (!String::startsWith(line, option + "="))
          return false;

        value = line.substr(option.size() + 1, line.size() - (option.size() + 1));
        return true;
      }

      //! Handle configuration.
      void
      handleConfig(const std::string& config)
      {
        std::string value;
        std::vector<std::string> lines;
        String::split(config, "\n", lines);
        for (size_t i = 0; i < lines.size(); ++i)
        {
          if (parseConfigLine(lines[i], "radio.countrycode", m_country_code))
            continue;
          if (parseConfigLine(lines[i], "wireless.1.ssid", m_essid))
            continue;
          if (parseConfigLine(lines[i], "radio.1.txpower", m_tx_power))
            continue;
          if (parseConfigLine(lines[i], "radio.1.mode", m_radio_mode))
            continue;
          if (parseConfigLine(lines[i], "radio.1.freq", value))
          {
            m_radio_freq = value.empty() ? DTR("auto") : value;
          }
          else if (parseConfigLine(lines[i], "radio.1.polling", value))
          {
            m_airmax = (value == "enabled") ? DTR("enabled") : DTR("disabled");
          }
        }
      }

      //! Handle RSSI string.
      void
      handleRSSI(const std::string& line)
      {
        int signal = 0;
        int rssi = 0;
        int noisef = 0;

        if (std::sscanf(line.c_str(), "signal %d rssi %d noisef %d", &signal, &rssi, &noisef) != 3)
          return;

        float frssi = signal - noisef;
        if (frssi < 0)
          frssi *= -1.0;

        m_rssi.value = trimValue((frssi * 100.0) / 30.0, 0.0f, 100.0f);
        dispatch(m_rssi);

        m_rssi.toText(std::cerr);
      }

      void
      setBootState(const std::string& text)
      {
        war("%s", text.c_str());
        setEntityState(IMC::EntityState::ESTA_BOOT, text);
      }

      bool
      getCommandOutput(const std::string& lines, const std::string& prefix, const std::string& suffix, std::string& output)
      {
        if (!(String::startsWith(lines, prefix) && String::endsWith(lines, suffix)))
          return false;

        output = lines.substr(prefix.size(), lines.size() - prefix.size() - suffix.size());
        return true;
      }

      void
      setStateAndUpdate(FSMStates state)
      {
        setState(state);
        updateState();
      }

      void
      setState(FSMStates state)
      {
        m_fsm_state = state;
      }

      void
      updateState(void)
      {
        std::string line;

        switch (m_fsm_state)
        {
          // Begin activation procedure.
          case SS_ACTIVATION_BEGIN:
            setBootState("starting activation procedure");
            clearFaultCount();
            setState(SS_CONNECT);
            break;

            // Try connecting to device.
          case SS_CONNECT:
            setBootState(String::str("attempting to connect to device (%u/%u)", getFaultCount(), getMaxFaultCount()));
            restartWorker();
            setState(SS_CONNECT_WAIT);
            break;

            // Wait for connection.
          case SS_CONNECT_WAIT:
            if (m_io_event.getTimeStamp() < 0)
              break;

            if (m_io_event.type == IMC::IoEvent::IOV_TYPE_OPEN_OK)
            {
              setBootState("connection established");
              clearFaultCount();
              setState(SS_LOGIN_BEGIN);
            }
            else if (m_io_event.type ==  IMC::IoEvent::IOV_TYPE_OPEN_FAILED)
            {
              if (incrementFaultCount() == getMaxFaultCount())
              {
                setBootState(String::str("connection error: %s", m_io_event.error.c_str()));
                activationFailed(m_io_event.error);
                setState(SS_IDLE_BEGIN);
              }
              else
              {
                setState(SS_CONNECT);
              }
            }
            break;

            // Prepare to wait for login prompt.
          case SS_LOGIN_BEGIN:
            setBootState("waiting for login prompt");
            m_wdog.setTop(2.0);
            setState(SS_LOGIN_WAIT);
            break;

            // Wait for login prompt.
          case SS_LOGIN_WAIT:
            if (String::endsWith(m_buffer, "login: "))
            {
              setBootState("login prompt received");
              setStateAndUpdate(SS_LOGIN_USER);
            }
            else if (m_wdog.overflow())
            {
              if (incrementFaultCount() == getMaxFaultCount())
              {
                setBootState("timed out while waiting for login prompt");
                activationFailed("timeout");
                setState(SS_IDLE_BEGIN);
              }
              else
              {
                setState(SS_LOGIN_BEGIN);
              }
            }
            break;

          case SS_LOGIN_USER:
            setBootState("sending username");
            m_buffer.clear();
            m_worker->writeLine(m_args.user + "\n");
            setState(SS_LOGIN_USER_WAIT);
            break;

          case SS_LOGIN_USER_WAIT:
            if (m_buffer == (m_args.user + "\r\nPassword: "))
            {
              setBootState("username sent");
              m_buffer.clear();
              setStateAndUpdate(SS_LOGIN_PASS);
            }
            break;

          case SS_LOGIN_PASS:
            setBootState("sending password");
            m_worker->writeLine(m_args.pass + "\n");
            setState(SS_LOGIN_PASS_WAIT);
            break;

          case SS_LOGIN_PASS_WAIT:
            if (m_buffer == "\r\n")
            {
              setBootState("password sent");
              setStateAndUpdate(SS_SHELL_BEGIN);
            }
            break;

          case SS_SHELL_BEGIN:
            setBootState("waiting for shell prompt");
            //m_buffer.clear();
            setState(SS_SHELL_WAIT);
            break;

          case SS_SHELL_WAIT:
            if (String::startsWith(m_buffer, "\r\nLogin incorrect"))
            {
              setBootState("invalid username or password");
              activationFailed("invalid username or password");
              setState(SS_IDLE_BEGIN);
            }
            else if (String::endsWith(m_buffer, "# "))
            {
              setBootState("shell prompt received");
              setStateAndUpdate(SS_SHELL_PS1_SET);
            }
            break;

          case SS_SHELL_PS1_SET:
            setBootState("configuring shell prompt");
            m_buffer.clear();
            m_worker->writeLine(c_cmd_ps1);
            setState(SS_SHELL_PS1_WAIT);
            break;

          case SS_SHELL_PS1_WAIT:
            if (String::endsWith(m_buffer, c_cmd_ps1 + "# "))
            {
              setBootState("shell prompt configured");
              setStateAndUpdate(SS_MODEL_GET);
            }
            break;

          case SS_MODEL_GET:
            setBootState("retrieving device model");
            m_buffer.clear();
            m_worker->writeLine(c_cmd_model);
            setState(SS_MODEL_WAIT);
            break;

          case SS_MODEL_WAIT:
            if (getCommandOutput(m_buffer, c_cmd_model, "\r\n# ", m_model))
            {
              setBootState("device model retrieved");
              setStateAndUpdate(SS_VERSION_GET);
            }
            break;

          case SS_VERSION_GET:
            setBootState("retrieving firmware information");
            m_buffer.clear();
            m_worker->writeLine(c_cmd_version);
            setState(SS_VERSION_WAIT);
            break;

          case SS_VERSION_WAIT:
            if (getCommandOutput(m_buffer, c_cmd_version, "\r\n# ", m_version))
            {
              setBootState("firmware information retrieved");
              setStateAndUpdate(SS_SERIAL_GET);
            }
            break;

          case SS_SERIAL_GET:
            setBootState("retrieving serial number");
            m_buffer.clear();
            m_worker->writeLine(c_cmd_serial);
            setState(SS_SERIAL_WAIT);
            break;

          case SS_SERIAL_WAIT:
            if (getCommandOutput(m_buffer, c_cmd_serial, "\r\n# ", m_serial))
            {
              setBootState("serial number retrieved");
              setStateAndUpdate(SS_CONFIG_GET);
            }
            break;

          case SS_CONFIG_GET:
            setBootState("retrieving configuration");
            m_buffer.clear();
            m_worker->writeLine(c_cmd_config);
            setState(SS_CONFIG_WAIT);
            break;

          case SS_CONFIG_WAIT:
            if (String::endsWith(m_buffer, "# "))
            {
              setBootState("configuration retrieved");
              handleConfig(m_buffer);
              setState(SS_ACTIVE_BEGIN);
            }
            break;

          case SS_ACTIVE_BEGIN:
            activate();
            setState(SS_ACTIVE);
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
            break;

          case SS_ACTIVE:
            Delay::wait(1.0);
            setState(SS_RSSI_GET);
            break;

          case SS_DEACTIVATION_BEGIN:
            break;

          case SS_IDLE_BEGIN:
            setBootState("entering idle state");
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
            setState(SS_IDLE);
            break;

          case SS_IDLE:
            break;

          case SS_RSSI_GET:
            m_buffer.clear();
            m_worker->writeLine(c_cmd_rssi);
            setState(SS_RSSI_WAIT);
            break;

          case SS_RSSI_WAIT:
            if (getCommandOutput(m_buffer, c_cmd_rssi, "\r\n# ", line))
            {
              handleRSSI(line);
              setState(SS_ACTIVE);
            }
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
