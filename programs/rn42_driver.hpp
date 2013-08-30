//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: rn42_driver.hpp 7448 2013-08-30 10:17:22Z pdcalado               $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <cstring>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//! Baud rate for  the serial port
#define BAUD_RATE_DEFAULT 115200
#define BAUD_RATE_FAST    921600

//! Name to set on module
#define MODULE_NAME "WavyHub-1"
//! Enable status messages in connect and disconnect
#define ENABLE_STATUS_MESSAGES 0
//! Use pin for authentication
#define USE_PIN 1
//! Pin for authentication
#define WAVY_PIN "9289"

using DUNE_NAMESPACES;

struct Device
{
  //! Address
  std::string address;
  //! Name
  std::string name;
  //! COD
  std::string cod;
};

static SerialPort* m_uart;
//! Internal buffer size.
static const int c_buffer_size = 4096;
//! Internal buffer.
static char m_buffer[c_buffer_size];

void
sendData(const char* cmd, bool spew = true)
{
  if (spew)
    std::cerr << "sending: " << sanitize(cmd) << std::endl;

  int sv = std::strlen(cmd);
  int rv = m_uart->write(cmd, sv);
}

bool
receiveData(const char* ack, double timeout,
            bool spew = true, const char* invalid = 0)
{
  double deadline = Clock::get() + timeout;
  int m_widx = 0;
  int rv = 0;

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

      if (spew)
        std::cerr << "receiving: " << sanitize(m_buffer) << std::endl;

      if (ack)
      {
        if (std::strstr(m_buffer, ack))
          return true;
      }

      if (invalid)
      {
        if (std::strstr(m_buffer, invalid))
          return false;
      }
    }
  }

  return false;
}

bool
sendCommand(const char* cmd, const char* ack = 0, double timeout = 2.0)
{
  std::string ack_str;

  // Send command
  sendData(cmd);

  return receiveData(ack, timeout);
}

bool
enterCmdMode(void)
{
  if (sendCommand("$$$", "CMD\r\n"))
    return true;
  else if (sendCommand("$$$\r\n", "?\r\n"))
    return true;
  else
    return false;
}

bool
exitCmdMode(void)
{
  if (sendCommand("---\r\n", "END\r\n"))
    return true;
  else
    return false;
}

// Check parameter
bool
checkParam(const char* param)
{
  double timeout = 2.0;

  const char* cmd = "D\r\n";

  sendData(cmd);

  receiveData(0, timeout, false);

  if (strstr(m_buffer, param))
    return true;

  return false;
}

// must be in command mode for this to work
bool
isModeMaster(void)
{
  return checkParam("Mode  =Mstr");
}

bool
isModeSlave(void)
{
  return checkParam("Mode  =Slav");
}

bool
checkName(const char* name)
{
  std::string cmd = "BTName=";
  cmd.append(name);

  return checkParam(cmd.c_str());
}

bool
rebootModule(void)
{
  if (!sendCommand("R,1\r\n", "Reboot!\r\n"))
    return false;

  Delay::wait(3.0);

  return true;
}

bool
setName(const char* name)
{
  if (checkName(MODULE_NAME))
  {
    std::cerr << "module name is " << MODULE_NAME << std::endl;
    return true;
  }

  std::string cmd = "SN,";
  cmd.append(name);
  cmd.append("\r\n");

  if (!sendCommand(cmd.c_str(), "AOK\r\n"))
    return false;

  if (!rebootModule())
    return false;

  // get back into command mode
  if (!enterCmdMode())
  {
    std::cerr << "failed to go back into command mode" << std::endl;
    return false;
  }

  if (checkName(MODULE_NAME))
    std::cerr << "module name is " << MODULE_NAME << std::endl;
  else
    std::cerr << "name is not the same" << std::endl;

  return true;
}

// actually, set slave...
bool
setMasterMode(void)
{
  if (isModeMaster())
    return true;

  if (!sendCommand("SM,1\r\n", "AOK\r\n"))
    return false;

  if (!isModeMaster())
    return false;

  if (!rebootModule())
    return false;

  if (!enterCmdMode())
    return false;

  return true;
}

bool
setSlaveMode(void)
{
  if (isModeSlave())
    return true;

  if (!sendCommand("SM,0\r\n", "AOK\r\n"))
    return false;

  if (!isModeSlave())
    return false;

  if (!rebootModule())
    return false;

  if (!enterCmdMode())
    return false;

  return true;
}

bool
enableStatusMessages(void)
{
  if (!sendCommand("SO,%GONE\r\n", "AOK\r\n"))
    return false;

  if (!rebootModule())
    return false;

  if (!enterCmdMode())
    return false;

  return true;
}

bool
setRemoteAddress(std::string address)
{
  if (checkParam(std::string("Rem=" + address).c_str()))
    return true;

  if (!sendCommand(std::string("SR," + address + "\r\n").c_str()))
    return false;

  if (!checkParam(std::string("Rem=" + address).c_str()))
    return false;

  return true;
}

bool
setPIN(std::string pin)
{
  if (checkParam(std::string("PinCod=" + pin).c_str()))
    return true;

  if (!sendCommand(std::string("SP," + pin + "\r\n").c_str(), "AOK\r\n"))
    return false;

  if (!checkParam(std::string("PinCod=" + pin).c_str()))
    return false;

  return true;
}

bool
setBaudRate(uint32_t baudrate)
{
  std::stringstream ss;
  ss << baudrate;

  std::string s = ss.str();
  s = s.substr(0, 2);

  if (!sendCommand(std::string("SU," + s + "\r\n").c_str(), "AOK\r\n"))
    return false;

  if (!rebootModule())
    return false;

  if (!enterCmdMode())
    return false;

  return true;
}

bool
connect(Device& dev)
{
  double timeout = 50.0;

  std::string str("C," + dev.address + "\r\n");

  // Send command
  sendData(str.c_str());

  std::string ack = "CONNECT," + dev.address + "," + "0" + "\r\n";

  if (!receiveData(ack.c_str(), timeout, true, "CONNECT failed\r\n"))
    return false;

  std::cerr << sanitize(m_buffer) << std::endl;

  return true;
}

bool
disconnect(void)
{
  if (!sendCommand("K,1\r\n", "AOK\r\n"))
    return false;

  return true;
}

bool
performScan(std::stringstream& scan)
{
  if (!sendCommand("I,10\r\n", "Inquiry,T=10,COD=0\r\n"))
    return false;

  double timeout = 40.0;

  if (!receiveData("Inquiry Done\r\n", timeout, true, "No Devices Found\r\n"))
    return false;

  scan << std::string(m_buffer);

  return true;
}

//! Output number of devices
unsigned
parseScan(std::stringstream& scan, std::vector<Device>& devices)
{
  std::string fnd;
  scan >> fnd;

  if (!strstr(fnd.c_str(), "Found"))
    return 0;

  unsigned n_dev;
  scan >> n_dev;

  // get the rest of this line (garbage)
  char s[256];
  scan.getline(s, 256);

  for (unsigned i = 0; i < n_dev; ++i)
  {
    scan.getline(s, 256);
    std::string line(s);

    Device d;
    std::vector<std::string> list;

    Utils::String::split(line, ",", list);

    if (list.size() != 3)
    {
      std::cerr << "failed parsing" << std::endl;
      return 0;
    }

    d.address = list[0];
    d.name = list[1];
    d.cod = list[2];

    devices.push_back(d);
  }

  return n_dev;
}

void
printDevices(std::vector<Device>& devices)
{
  for (unsigned i = 0; i < devices.size(); ++i)
  {
    std::cerr << "Device #" << i + 1 << std::endl;
    std::cerr << "  Address: " << devices[i].address << std::endl;
    std::cerr << "  Name: " << devices[i].name << std::endl;
    std::cerr << "  COD: " << devices[i].cod << std::endl;
  }
}

bool
initDevice(const char* port)
{
  // Start with the default baud rate
  m_uart = new SerialPort(port, BAUD_RATE_DEFAULT);

  m_uart->flush();

  if (!enterCmdMode())
  {
    // It failed so the fastest baudrate must have already been configured
    m_uart->setBaudRate(BAUD_RATE_FAST);

    std::cerr << "changed baud rate, trying again ..." << std::endl;
    if (!enterCmdMode())
    {
      std::cerr << "failed to enter command mode" << std::endl;
      return false;
    }
  }
  else // we'll configure to fast baudrate
  {
    if (!setBaudRate(BAUD_RATE_FAST))
    {
      std::cerr << "failed to set baudrate" << std::endl;
      return false;
    }

    m_uart->setBaudRate(BAUD_RATE_FAST);
  }

  std::cerr << "in command mode" << std::endl;

  if (!setSlaveMode())
  {
    std::cerr << "failed to set slave mode" << std::endl;
    return false;
  }

  if (!setName(MODULE_NAME))
  {
    std::cerr << "failed to set name" << std::endl;
    return false;
  }

#if USE_PIN
  if (!setPIN(WAVY_PIN))
  {
    std::cerr << "failed to set pin" << std::endl;
    return false;
  }
#endif

#if ENABLE_STATUS_MESSAGES
  // Enabling status messages
  if (!enableStatusMessages())
  {
    std::cerr << "failed to enable status messages" << std::endl;
    return false;
  }
#endif

#if 0
  if (!setBaudRate(115200))
  {
    std::cerr << "failed to set baud rate" << std::endl;
    return false;
  }
#endif

  return true;
}

bool
connectToWavy(const char* name)
{
  std::stringstream scan;

  if (!performScan(scan))
  {
    std::cerr << "failed to scan" << std::endl;
    return false;
  }

  std::vector<Device> devs;

  parseScan(scan, devs);

  std::cerr << std::endl;
  std::cerr << scan.str() << std::endl;

  std::cerr << "Printing devices" << std::endl;

  printDevices(devs);

  std::cerr << std::endl;

  if (!devs.size())
  {
    std::cerr << "no devices" << std::endl;
    return false;
  }

  // Will now attempt to connect to the first device
  for (unsigned i = 0; i < devs.size(); ++i)
  {
    if (!devs[i].name.compare(name))
    {
      if (connect(devs[i]))
      {
        std::cerr << "connected to "
                  << devs[i].name
                  << std::endl;
        return true;
      }
      else
      {
        std::cerr << "failed to connect to "
                  << devs[i].name
                  << std::endl;
        return false;
      }
    }
  }

  std::cerr << "device '" << name
            << "' not found"
            << std::endl;
  return false;
}

void
closeDevice(void)
{
  delete m_uart;
}
