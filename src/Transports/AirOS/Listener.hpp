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

#ifndef TRANSPORTS_AIR_OS_LISTENER_HPP_INCLUDED_
#define TRANSPORTS_AIR_OS_LISTENER_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Transports
{
  namespace AirOS
  {
    using DUNE_NAMESPACES;

    class Listener: public Concurrency::Thread
    {
    public:
      Listener(Tasks::Task* task, const Address& addr, unsigned port):
        m_task(task),
        m_addr(addr),
        m_port(port)
      {
        setMessageAddresses(m_io_event);
        setMessageAddresses(m_dev_text);
      }

      void
      writeLine(const std::string& line)
      {
        m_task->spew("out: %s", sanitize(line).c_str());
        m_sock.write(line.c_str(), line.size());
      }

    private:
      //! Parent task.
      Tasks::Task* m_task;
      //! IPv4 Address.
      Address m_addr;
      //! TCP Port.
      unsigned m_port;
      //! TCP Socket.
      TCPSocket m_sock;
      //! Device text.
      IMC::DevDataText m_dev_text;
      //! I/O event.
      IMC::IoEvent m_io_event;

      void
      setMessageAddresses(IMC::Message& msg)
      {
        msg.setSource(m_task->getSystemId());
        msg.setSourceEntity(m_task->getEntityId());
        msg.setDestination(m_task->getSystemId());
        msg.setDestinationEntity(m_task->getEntityId());
      }

      void
      dispatchIoEvent(IMC::IoEvent::TypeEnum type, const std::string& text)
      {
        m_io_event.type = type;
        m_io_event.error = text;
        m_io_event.setTimeStamp();
        m_task->receive(&m_io_event);
      }

      void
      run(void)
      {
        char bfr[128];

        try
        {
          m_sock.setNoDelay(true);
          m_sock.setSendTimeout(1.0);
          m_sock.setReceiveTimeout(1.0);
          m_sock.connect(m_addr, m_port);
          dispatchIoEvent(IMC::IoEvent::IOV_TYPE_OPEN_OK, "connection opened");
        }
        catch (std::runtime_error& e)
        {
          dispatchIoEvent(IMC::IoEvent::IOV_TYPE_OPEN_FAILED, e.what());
          return;
        }

        while (!isStopping())
        {
          try
          {
            if (!Poll::poll(m_sock, 1.0))
              continue;

            int rv = m_sock.read(bfr, sizeof(bfr));
            if (rv <= 0)
              throw std::runtime_error("invalid read size");

            m_dev_text.value.assign(bfr, rv);
            m_dev_text.setTimeStamp();
            m_task->receive(&m_dev_text);
          }
          catch (std::runtime_error& e)
          {
            dispatchIoEvent(IMC::IoEvent::IOV_TYPE_CLOSE_OK, e.what());
            break;
          }
        }
      }
    };
  }
}

#endif
