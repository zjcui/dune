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

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Driver.hpp"

namespace Transports
{
  namespace Micromodem
  {
    using DUNE_NAMESPACES;

    //! Power on delay.
    static const double c_pwr_on_delay = 5.0;

    //! %Task arguments.
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Mailbox check periodicity.
      double mbox_check_per;
      //! Maximum transmission rate.
      unsigned max_tx_rate;
      //! Power channel name.
      std::string pwr_name;
      //! Narrow band ping transponder turn around time.
      unsigned nbp_tat;
    };

    struct Task: public DUNE::Tasks::Task
    {
      //! Serial port handle.
      SerialPort* m_uart;
      //! Driver handler.
      Driver* m_driver;
      //! Task arguments.
      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL),
        m_driver(NULL)
      {
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the modem");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("19200")
        .description("Serial port baud rate");

        param("Power Channel - Name", m_args.pwr_name)
        .defaultValue("")
        .description("Name of the power channel that supplies the modem");

        param("Maximum Transmission Rate", m_args.max_tx_rate)
        .units(Units::Second)
        .defaultValue("0")
        .description("");

        param("Narrow Band Ping - Turn Around Time", m_args.nbp_tat)
        .units(Units::Millisecond)
        .defaultValue("20");

        //bind<IMC::IridiumMsgTx>(this);
        bind<IMC::IoEvent>(this);
      }

      //! Destructor.
      ~Task(void)
      {
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
        if (m_driver != NULL)
          m_driver->setTxRateMax(m_args.max_tx_rate);
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
        if (!m_args.pwr_name.empty())
        {
          IMC::PowerChannelControl pcc;
          pcc.name = m_args.pwr_name;
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
          dispatch(pcc);
        }

        Delay::wait(c_pwr_on_delay);

        try
        {
          m_uart = new SerialPort(m_args.uart_dev, m_args.uart_baud);
          m_driver = new Driver(this, m_uart);
          m_driver->initialize();
          m_driver->setTxRateMax(m_args.max_tx_rate);
          m_driver->setParameter("SRC", 1);
          m_driver->setParameter("TAT", m_args.nbp_tat);
          m_driver->setParameter("NRV", 0);
          m_driver->setParameter("CTO", 10);
          m_driver->setParameter("XST", 0);
          //m_driver->sendMiniPacket(1, 2, 0x000A);
          std::vector<char> l;
          for (char i = 0; i < 32; ++i)
            l.push_back(i);
          m_driver->sendPacket(1, 2, l);
        }
        catch (std::runtime_error& e)
        {
          throw RestartNeeded(e.what(), 5);
        }
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        if (m_driver)
        {
          m_driver->stopAndJoin();
          delete m_driver;
          m_driver = NULL;
        }

        Memory::clear(m_uart);
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getSource() != getSystemId())
          return;

        if (msg->getDestination() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
          throw RestartNeeded("input error", 5);
      }

      //! Main loop.
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
