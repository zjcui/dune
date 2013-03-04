//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Protocol.hpp 5239 2012-12-03 22:19:27Z rasm                      $:*
//***************************************************************************

#ifndef PROTOCOL_HPP_INCLUDED_
#define PROTOCOL_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <cstring>
#include <stdexcept>

enum CommandType
{
  CommandTypeNone,
  CommandTypeNormal,
  CommandTypeVersion,
  CommandTypeName,
  CommandTypeError,
  CommandTypeBootJump,
  CommandTypeReset,
  CommandTypeInvalidChecksum,
  CommandTypeInvalidVersion
};

struct Command
{
  //! Error.
  struct ErrorPayload
  {
    unsigned code;
  };

  //! Version.
  struct VersionPayload
  {
    unsigned major;
    unsigned minor;
    unsigned patch;
  };

  //! Command.
  struct CommandPayload
  {
    unsigned char code;
    unsigned char data[128];
    unsigned char size;
  };

  //! Name.
  struct NamePayload
  {
    char data[16];
  };

  CommandType type;

  union
  {
    ErrorPayload error;
    VersionPayload version;
    CommandPayload command;
    NamePayload name;
  };
};

class Protocol
{
 public:
  Protocol(void)
  {
    clear();
  }

  ~Protocol(void)
  {

  }

  void
  clear(void)
  {
    m_sm_state = STA_NONE;
    m_sm_size = 0;
    m_sm_cmd = 0;
    m_sm_data_idx = 0;
    m_sm_csum = 0;
  }

  CommandType
  parse(Command& cmd, unsigned char byte)
  {
    bool interpret = false;
    cmd.type = CommandTypeNone;

    switch (m_sm_state)
    {
      case STA_NONE:
        if (byte == c_sync)
        {
          m_sm_state = STA_SIZE;
          m_sm_csum = byte;
        }
        break;

      case STA_SIZE:
        m_sm_size = byte;
        m_sm_csum ^= byte;
        m_sm_state = STA_CMD;
        break;

      case STA_CMD:
        m_sm_cmd = byte;
        m_sm_csum ^= byte;
        m_sm_state = STA_DATA;
        break;

      case STA_DATA:
        if (m_sm_data_idx == c_data_max - 1)
        {
          clear();
          break;
        }

        m_sm_data[m_sm_data_idx++] = byte;

        if (m_sm_data_idx == m_sm_size)
        {
          if ((m_sm_csum | c_csum_msk) == m_sm_data[m_sm_data_idx - 1])
            interpret = true;
          else
            cmd.type = CommandTypeInvalidChecksum;
        }
        else
        {
          m_sm_csum ^= byte;
        }

        break;

      default:
        break;
    }

    if (interpret)
    {
      if ((m_sm_cmd >> 4) == 0x0E)
      {
        cmd.type = CommandTypeError;
        cmd.error.code = m_sm_cmd;
      }
      else if (m_sm_cmd == c_cmd_name)
      {
        cmd.type = CommandTypeName;
        std::memcpy(cmd.name.data, m_sm_data, m_sm_size - 1);
        cmd.name.data[m_sm_size - 1] = 0;
      }
      else if (m_sm_cmd == c_cmd_info)
      {
        cmd.type = CommandTypeVersion;

        if (m_sm_size == 4)
        {
          cmd.version.major = m_sm_data[0];
          cmd.version.minor = m_sm_data[1];
          cmd.version.patch = m_sm_data[2];
        }
        else if (m_sm_size == 3)
        {
          cmd.version.major = m_sm_data[0];
          cmd.version.minor = m_sm_data[1];
          cmd.version.patch = 0;
        }
        else if (m_sm_size == 2)
        {
          cmd.version.major = 0x07 & (m_sm_data[0] >> 5);
          cmd.version.minor = 0x07 & (m_sm_data[0] >> 2);
          cmd.version.patch = 0x03 & (m_sm_data[0] >> 0);
        }
        else
        {
          cmd.type = CommandTypeInvalidVersion;
        }
      }
      else if (m_sm_cmd == c_cmd_reset)
      {
        cmd.type = CommandTypeReset;
      }
      else if (m_sm_cmd == c_cmd_bldr)
      {
        cmd.type = CommandTypeBootJump;
      }
      else
      {
        cmd.type = CommandTypeNormal;
        cmd.command.code = m_sm_cmd;
        cmd.command.size = m_sm_size - 1;
        std::memcpy(cmd.command.data, m_sm_data, m_sm_size);
      }

      clear();
    }

    return cmd.type;
  }

  static unsigned
  packCommand(unsigned char cmd, const unsigned char* data, int data_size, unsigned char* bfr)
  {
    if (data_size > c_data_max)
      throw std::runtime_error("maximum data size exceeded");

    unsigned char csum = c_sync ^ (data_size + 1) ^ cmd;
    unsigned char* ptr = bfr;

    *(ptr++) = c_sync;
    *(ptr++) = data_size + 1;
    *(ptr++) = cmd;

    for (int i = 0; i < data_size; ++i)
    {
      *(ptr++) = data[i];
      csum ^= data[i];
    }

    *(ptr++) = csum | c_csum_msk;

    return ptr - bfr;
  }

 private:
  //! State machine states.
  enum SMStates
  {
    //! No command.
    STA_NONE,
    //! Command start.
    STA_SYNC,
    //! Command size.
    STA_SIZE,
    //! Command type.
    STA_CMD,
    //! Command arguments.
    STA_DATA
  };

  //! Synchronization number (command start)
  static const unsigned char c_sync = 0x2A;
  //! XOR checksum OR mask.
  static const unsigned char c_csum_msk = 0x80;
  //! Maximum command argument length.
  static const unsigned char c_data_max = 64;
  //! Read buffer size.
  static const int c_bfr_len = 64;
  //! Information command.
  static const unsigned char c_cmd_info = 0x00;
  //! Jump to bootloader on next reset.
  static const unsigned char c_cmd_bldr = 0xFD;
  //! Name command.
  static const unsigned char c_cmd_name = 0xFE;
  //! Reset command.
  static const unsigned char c_cmd_reset = 0xFF;
  //! Error strings.
  static const char* c_error_strs[];
  //! Index of last error in c_error_strs.
  static const int c_error_last;
  //! Internal byte buffer.
  unsigned char m_bfr[c_bfr_len];
  //! Current parser state.
  SMStates m_sm_state;
  //! Argument size of current command.
  unsigned char m_sm_size;
  //! Current command type.
  unsigned char m_sm_cmd;
  //! Current command arguments.
  unsigned char m_sm_data[c_data_max];
  //! Current command arguments write index.
  unsigned char m_sm_data_idx;
  //! Current checksum calculation.
  unsigned char m_sm_csum;
};

#endif
