//***************************************************************************
// Copyright (C) 2007-2013 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id::                                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>

// DUNE Headers
#include <DUNE/DUNE.hpp>

//! Baud rate for  the serial port
#define BAUD_RATE 38400

static SerialPort* m_uart;
//! Internal buffer size.
static const int c_buffer_size = 4096;
//! Internal buffer.
static char m_buffer[c_buffer_size];

static bool
sendCommand(const char* cmd, const char* ack = 0, double timeout = 2.0)
{
  std::string ack_str;

  // If no specific ack string was given we construct a standard
  // one.
  if (!ack)
  {
    ack_str = cmd;
    ack_str += "\r\nOK\r\n";
    ack = ack_str.c_str();
  }

  // Send command
  std::cerr << "sending command: " << sanitize(cmd) << std::endl;
  int sv = std::strlen(cmd);
  int rv = m_uart->write(cmd, sv);

  double deadline = Clock::get() + timeout;
  int m_widx = 0;

  while ((Clock::get() < deadline) && m_widx < (c_buffer_size - 1))
  {
    Delay::wait(0.1);
    rv = m_uart->read(m_buffer + m_widx, 64);

    if (rv > 0)
    {
      m_widx += rv;
      if (m_widx > c_buffer_size - 1)
        m_widx = c_buffer_size - 1;
      m_buffer[m_widx] = 0;
      std::cerr << "receiving: " << sanitize(m_buffer) << std::endl;
      if (std::strstr(m_buffer, ack))
        return true;
    }
  }

  return false;
}

static void
masterConfig(void)
{
  // sendCommand("AT+ORGL\r\n");

  sendCommand("AT+ROLE=1\r\n");
  sendCommand("AT+UART\r\n");

  sendCommand("AT+ADDR?\r\n");
  sendCommand("AT+NAME=base\r\n");
  sendCommand("AT+NAME?\r\n");
  sendCommand("AT+PSWD=9289\r\n", "OK\r\n", 3.0);
  sendCommand("AT+PSWD?\r\n");
  sendCommand("AT+UART=38400,0,0\r\n");
  sendCommand("AT+BIND=19,5d,ee3f5c\r\n");
  sendCommand("AT+BIND?\r\n");
}

// routine for changing master's baud rate
static void
baudrateConfig(void)
{
  if (sendCommand("AT+UART=500000,0,0\r\n"))
  {
    std::cerr << "Changed baud rate successfully" << std::endl;
    double time = Clock::get();

    while (Clock::get() - time < 2.0);

    sendCommand("AT+UART?\r\n");
  }
  else
  {
    std::cerr << "Failed to set baud rate." << std::endl;
  }
}

// Configure driver/device
bool
initDevice(const char* port)
{
  m_uart = new SerialPort(port, BAUD_RATE);

  m_uart->flush();

  masterConfig();
  baudrateConfig();

  return true;
}

void
closeDevice(void)
{
  delete m_uart;
}
