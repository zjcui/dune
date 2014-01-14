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
#define PTL_SYNC         0x2C
//! XOR checksum mask.
#define PTL_CSUM_MSK(c)  (c | 0x80)
//! Maximum command argument length.
#ifndef PTL_DATA_MAX
#  define PTL_DATA_MAX     64
#endif

enum blue_ptl_states
{
  //! Parsing synchronization byte.
  PTL_ST_SYNC,
  //! Parsing message size.
  PTL_ST_SIZE,
  //! Parsing message id.
  PTL_ST_ID,
  //! Parsing message payload.
  PTL_ST_DATA,
  //! Checksum.
  PTL_ST_CSUM
};

enum blue_ptl_errors
{
  //! Invalid command error.
  PTL_ERR_INVAL  = 0,
  //! Invalid command arguments.
  PTL_ERR_INVARG = 1,
  //! Invalid checksum.
  PTL_ERR_CSUM   = 2,
  //! Out of sync error.
  PTL_ERR_OSYN   = 3,
  //! Parser error.
  PTL_ERR_PARSE  = 4,
  //! Data overrun.
  PTL_ERR_OVRUN  = 5,
  //! Data overflow.
  PTL_ERR_DOVFW  = 6
};

enum blue_ptl_commands
{
  //! Error command
  CMD_ERROR    = 0xF0,
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
  uint8_t id;
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
  parser->state = PTL_ST_SYNC;
  parser->size = 0;
  parser->id = 0;
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
  uint8_t csum = PTL_SYNC ^ data_len ^ cmd;

  ptl_write(PTL_SYNC);
  ptl_write(data_len);
  ptl_write(cmd);

  for (i = 0; i < data_len; ++i)
  {
    ptl_write(data[i]);
    csum ^= data[i];
  }

  ptl_write(PTL_CSUM_MSK(csum));
}

static inline void
ptl_send_error(ptl_parser_t parser, uint8_t error)
{
  ptl_out_cmd(CMD_ERROR, &error, 1);
}

//! Parse byte.
//! @arg ptl parser object.
//! @arg byte byte to parse.
static inline int
ptl_parse(ptl_parser_t parser, uint8_t byte, uint8_t* recv_data, uint8_t* recv_size)
{
  bool has_command = false;

  switch (parser->state)
  {
    case PTL_ST_SYNC:
      if (byte == PTL_SYNC)
      {
        parser->size = 0;
        parser->id = 0;
        parser->data_idx = 0;
        parser->csum = byte;
        parser->state = PTL_ST_SIZE;
      }
      else
      {
        ptl_send_error(parser, PTL_ERR_OSYN);
      }
      break;

    case PTL_ST_SIZE:
      if (byte > sizeof(parser->data))
      {
        parser->state = PTL_ST_SYNC;
        ptl_send_error(parser, PTL_ERR_INVARG);
      }
      else
      {
        parser->size = byte;
        parser->csum ^= byte;
        parser->state = PTL_ST_ID;
      }
      break;

    case PTL_ST_ID:
      parser->id = byte;
      parser->csum ^= byte;
      if (parser->size == 0)
        parser->state = PTL_ST_CSUM;
      else
        parser->state = PTL_ST_DATA;
      break;

    case PTL_ST_DATA:
      parser->data[parser->data_idx++] = byte;
      parser->csum ^= byte;
      if (parser->data_idx == parser->size)
        parser->state = PTL_ST_CSUM;
      break;

    case PTL_ST_CSUM:
      parser->state = PTL_ST_SYNC;
      if ((parser->csum | 0x80) == byte)
        has_command = true;
      else
        ptl_send_error(parser, PTL_ERR_CSUM);
  }

  if (!has_command)
    return 0;

  int rv = 0;

  // copy data to recv_data
  *recv_size = parser->size;

  memcpy(recv_data, parser->data, parser->size);

  rv = parser->handler(parser->id, parser->data, parser->size);

  if (!rv)
    ptl_send_error(parser, PTL_ERR_INVAL);

  ptl_reset(parser);
  return rv;
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
}

#endif
