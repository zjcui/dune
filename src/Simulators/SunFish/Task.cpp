// DUNE headers.
#include <DUNE/DUNE.hpp>

namespace Simulators
{
  namespace SunFish
  {
    using DUNE_NAMESPACES;

      //! %Task arguments.
      struct Arguments
      {
        //! TCP Port
        uint16_t TCP_port;
        //! TCP Address
        Address TCP_addr;
      };

      struct Task: public DUNE::Tasks::Task
      {
        //! Task arguments.
        Arguments m_args;
        uint8_t m_buf[8];
        //! Estimated state message.
        IMC::VehicleMedium m_medium;
        //! Battery messages
        IMC::Voltage m_volt;

        //! TCP socket
        TCPSocket* m_TCP_sock;
        Address m_TCP_addr;
        uint16_t m_TCP_port;

        Task(const std::string& name, Tasks::Context& ctx):
          Tasks::Task(name, ctx)
        {
          param("TCP - Port", m_args.TCP_port)
          .defaultValue("9999")
          .description("Port for connection to testbed");

          param("TCP - Address", m_args.TCP_addr)
          .defaultValue("127.0.0.1")
          .description("Address for connection to testbed");

        }

        void
        onResourceRelease(void)
        {
          Memory::clear(m_TCP_sock);
        }

        void
        onResourceAcquisition(void)
        {
          m_TCP_addr = m_args.TCP_addr;
          m_TCP_port = m_args.TCP_port;
          openConnection();
        }

        void
        openConnection(void)
        {
          try
          {
            m_TCP_sock = new TCPSocket;
            m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
            inf(DTR("Testbed interface initialized"));
          }
          catch (...)
          {
            m_TCP_sock = 0;
            war(DTR("Connection failed, retrying..."));
            setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_COM_ERROR);
          }
        }

        void
        onMain(void)
        {
          double volt_before = Clock::get();
          double medium_before = Clock::get();
          uint8_t bfr[1];
          bool is_surface = true;
          bool was_surface = false;
          int interval = rand() % 11 + 5; // random interval between 5 and 15 minutes to stay under/above water

          while (!stopping())
          {
            // Handle data
            if(m_TCP_sock)
            {
              handleData();
            }
            else
            {
              Time::Delay::wait(0.5);
              openConnection();
            }

            // Handle IMC messages from bus
            //consumeMessages();

            double now = Clock::get();

            if( (now - volt_before) >= 5)
            {
              bfr[0] = '3'; //request voltage every 5 seconds
              sendData(bfr, 1);
              volt_before = now;
            }

            if( ((now - medium_before) / 60) >= interval)
            {
              is_surface = !is_surface;
              medium_before = now;
              interval = rand() % 11 + 5; //generate new interval
            }

            if( is_surface != was_surface)
            {
              bfr[0] = (is_surface ? '2' : '1'); //2 for surface, 1 for underwater
              sendData(bfr, 1);
              was_surface = is_surface;
            }
          }
        }

        bool
        poll(double timeout)
        {
          if (m_TCP_sock != NULL)
            return Poll::poll(*m_TCP_sock, timeout);

          return false;
        }

        int
        sendData(uint8_t* bfr, int size)
        {
          if(m_TCP_sock)
          {
            trace("Sending something");
            return m_TCP_sock->write((char*)bfr, size);
          }
          return 0;
        }

        int
        receiveData(uint8_t* buf, size_t blen)
        {
          if(m_TCP_sock)
          {
            try
            {
              return m_TCP_sock->read(buf, blen);
            }
            catch (std::runtime_error& e)
            {
              err("%s", e.what());
              war(DTR("Connection lost, retrying..."));
              Memory::clear(m_TCP_sock);

              m_TCP_sock = new Network::TCPSocket;
              m_TCP_sock->connect(m_TCP_addr, m_TCP_port);
              return 0;
            }
          }
          return 0;
        }

        void
        handleData(void)
        {
          while (poll(0.01))
          {
            int n = receiveData(m_buf, sizeof(m_buf));

            if (n < 0)
            {
              debug("Receive error");
              break;
            }

            for (int i = 0; i < n; i++)
            {
              m_volt.value = ((float)m_buf[i] * 5.0 / 255.0) * (3.0 / 2.0);
              err("iteration (%d): %f", i, m_volt.value);
              dispatch(m_volt);
            }
          }
        }
      };
  }
}

DUNE_TASK
