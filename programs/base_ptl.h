//***************************************************************************
// Copyright (C) 2007-2009 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
// Author: Pedro Calado (adapted to wcb using bluetooth)                    *
//***************************************************************************
// $Id:: base_ptl.h 7441 2013-08-28 15:11:46Z pdcalado                    $:*
//***************************************************************************

#ifndef BLUE_PTL_H_INCLUDED_
#define BLUE_PTL_H_INCLUDED_

// AVR headers.
#include <string.h>

//! Synchronization number (command start)
#define PTL_SYNC         0x2A
//! XOR checksum mask.
#define PTL_CSUM_MSK(c)  (c | 0x80)
//! Maximum command argument length.
#ifndef PTL_DATA_MAX
#  define PTL_DATA_MAX     60
#endif

enum blue_ptl_states
{
  //! FSM state: no command.
  PTL_ST_NONE = 0,
  //! FSM state: command start.
  PTL_ST_SYNC = 1,
  //! FSM state: command size.
  PTL_ST_SIZE = 2,
  //! FSM state: command type.
  PTL_ST_CMD  = 3,
  //! FSM state: comand arguments.
  PTL_ST_DATA = 4
};

enum blue_ptl_errors
{
  //! Invalid command error.
  PTL_ERROR_INVAL = 0xE0,
  //! Out of sync error.
  PTL_ERROR_OSYN  = 0xE1,
  //! Parser error.
  PTL_ERROR_PARSE = 0xE2,
  //! USART data overrun.
  PTL_ERROR_OVRUN = 0xE3,
  //! Data overflow.
  PTL_ERROR_DOVFW = 0xE4,
  //! Wrong CSUM.
  PTL_ERROR_CSUM  = 0xE5,
  //! Parser bug.
  PTL_ERROR_PBUG  = 0xE6,
  //! Invalid command arguments.
  PTL_ERROR_INVARG = 0xE7
};

enum blue_ptl_commands
{
  //! Downloader Info
  CMD_INFO     = 0xF0,
  //! Downloader name
  CMD_NAME     = 0xF1,
  //! Request of answer with the firmware's name
  CMD_FW_NAME  = 0xFB,
  //! Request or answer with the git information
  CMD_GIT_INFO = 0xFC,
  //! Jump to bootloader on next reset.
  CMD_BLDR     = 0xFD,
  //! Reset device (requires watchdog enabled).
  CMD_RESET    = 0xFF
};

//! Command handler.
typedef int (*ptl_handler_t)(uint8_t, uint8_t*, uint8_t);

//! Protocol parser structure.
struct ptl_parser
{
  //! Current parser state.
  int state;
  uint8_t size;
  //! Current command type.
  uint8_t cmd;
  //! Current command arguments.
  uint8_t data[PTL_DATA_MAX];
  //! Current command arguments write index.
  uint8_t data_idx;
  //! Expected XOR checksum.
  uint8_t csum;
  //! Command handler.
  ptl_handler_t handler;
};

/* static uint8_t ptl_info_data[3] = {DEV_VER, DEV_REV, DEV_PAT}; */

//! Protocol parser object.
typedef struct ptl_parser* ptl_parser_t;

//! Reset protocol parser state.
//! @arg parser parser object.
static inline void
ptl_reset(ptl_parser_t parser)
{
  parser->state = PTL_ST_NONE;
  parser->size = 0;
  parser->cmd = 0;
  parser->data_idx = 0;
  parser->csum = 0;
}

static inline void
ptl_write(uint8_t byte)
{
  m_uart->write(&byte, 1);
}

static inline void
ptl_out_cmd(uint8_t cmd, const uint8_t* data, uint8_t data_len)
{
  uint8_t i;
  uint8_t csum = PTL_SYNC ^ (data_len + 1) ^ cmd;

  ptl_write(PTL_SYNC);
  ptl_write(data_len + 1);
  ptl_write(cmd);
  
  for (i = 0; i < data_len; ++i)
  {
    ptl_write(data[i]);
    csum ^= data[i];
  }

  ptl_write(PTL_CSUM_MSK(csum));
}

//! Send device information to USART.
static inline void
ptl_cmd_info(void)
{
  ptl_out_cmd(CMD_INFO, (const uint8_t*)"wavy", strlen("wavy"));
}

//! Send device information to USART.
static inline void
ptl_cmd_name(void)
{
#if defined(DEV_NAME) && defined(DEV_NAME_SIZE)
  ptl_out_cmd(CMD_NAME, (uint8_t*)DEV_NAME, DEV_NAME_SIZE);
#else
  ptl_out_cmd(CMD_NAME, (uint8_t*)"NONE", 4);
#endif
}

//! Parse byte.
//! @arg ptl parser object.
//! @arg byte byte to parse.
static inline int
ptl_parse(ptl_parser_t parser, uint8_t byte, uint8_t* recv_data, uint8_t* recv_size)
{
  int call_handler = 0;

  switch (parser->state)
  {
    case PTL_ST_NONE:
      if (byte != PTL_SYNC)
        return PTL_ERROR_OSYN;
      parser->state = PTL_ST_SIZE;
      parser->csum = PTL_SYNC;
      break;

    case PTL_ST_SIZE:
      parser->size = byte;
      parser->csum ^= byte;
      parser->state = PTL_ST_CMD;
      break;

    case PTL_ST_CMD:
      parser->cmd = byte;
      parser->csum ^= byte;
      parser->state = PTL_ST_DATA;
      break;

    case PTL_ST_DATA:
      if (parser->data_idx == PTL_DATA_MAX - 1)
        return PTL_ERROR_DOVFW;

      parser->data[parser->data_idx++] = byte;
      if (parser->data_idx == parser->size)
      {
        if (PTL_CSUM_MSK(parser->csum) != parser->data[parser->data_idx - 1])
          return PTL_ERROR_CSUM;

        call_handler = 1;
      }
      else
      {
        parser->csum ^= byte;
      }
      break;

    default:
      return PTL_ERROR_INVAL;
  }

  if (call_handler)
  {
    int rv = 0;
    
    if (parser->cmd == CMD_INFO)
      ptl_cmd_info();
    /* else if (parser->cmd == CMD_BLDR) */
    /*   ptl_cmd_bldr_halt(); */
    /* else if (parser->cmd == CMD_RESET) */
    /* { */
    /*   ptl_cmd_reset(); */
    /* } */
    else if (parser->cmd == CMD_NAME)
      ptl_cmd_name();
    else
    {
      // copy data to recv_data
      *recv_size = parser->size - 1;
      uint8_t i;
      for (i = 0; i < *recv_size; i++)
	recv_data[i] = parser->data[i];
      
      rv = parser->handler(parser->cmd, parser->data, parser->size);
      if (!rv)
        ptl_out_cmd(PTL_ERROR_INVAL, 0, 0);
    }

    ptl_reset(parser);

    return rv;
  }

  return 0;
}

//! USART Implementation.
static inline int
ptl_process(ptl_parser_t parser, uint8_t* recv_data, uint8_t* recv_size)
{
  uint8_t byte;
  int rv;

  /* if (usart_recv_overrun()) */
  /* { */
  /*   ptl_out_cmd(PTL_ERROR_OVRUN, 0, 0); */
  /* } */

  if (m_uart->read(&byte, 1) == 1)
  {
    rv = ptl_parse(parser, byte, recv_data, recv_size);
    if (rv != 0)
    {
      /* ptl_out_cmd(rv, 0, 0); */
      ptl_reset(parser);
    }
    return rv;
  }

  return -1;
}

//! Initialize protocol parser.
//! @arg parser parser object.
//! @arg command handler.
static inline void
ptl_init(ptl_parser_t parser, ptl_handler_t handler)
{
  parser->handler = handler;
  ptl_reset(parser);

  /* ptl_cmd_info(); */
}

#endif
