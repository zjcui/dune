//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: downloader.cpp 7447 2013-08-30 10:16:57Z pdcalado                $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

//! Time after which the wavy's uploader has most certainly timed out (in seconds)
#define UPLOADER_TIMEOUT 2
//! Maximum data that will be downloaded
#define DLDR_MAX_DATA 60000
//! Time between data requests in seconds
#define DLDR_REQ_PERIOD 2
//! Timeout when we get no response from wavy
#define DLDR_TIMEOUT 40
//! Timeout after which we have probably lost connection with wavy (should be the same as in wavy's firmware)
#define INDEX_TIMEOUT 2
//! Maximum size for a data frame
#define MAX_FRAME_SIZE 255

// Defining some extra commands for ptl
//! Acknowledge (ascii char 'A')
#define WAVY_CMD_ACK 0x41
//! Negative Acknowledge (ascii char 'N')
#define WAVY_CMD_NACK 0x4E
//! Data Request command (ascii char 'R')
#define WAVY_CMD_REQ 0x52
//! Sending data size command (ascii char 'L')
#define WAVY_CMD_SIZE 0x4C
//! Frame containing Data command (ascii char 'D')
#define WAVY_CMD_DATA 0x44
//! Parameters configuration (ascii char 'F')
#define WAVY_CMD_PARAM_FACTORY 0x46
//! Data sending process was incomplete(ascii char 'I')
#define WAVY_CMD_INC 0x49
//! Nothing to send command (ascii char 'E')
#define WAVY_CMD_NTS 0x45
//! Stop data sending request (ascii char 'S')
#define WAVY_CMD_STOP 0x53
//! Parameters configuration (ascii char 'U')
#define WAVY_CMD_PARAM_USER 0x55
//! Send wavy status (ascii char 'V')
#define WAVY_CMD_STATUS 0x56
//! Configure sms message (ascii char 'G')
#define WAVY_CMD_CFGSMS 0x47
//! Reset the bluetooth module (ascii char 'X')
#define WAVY_CMD_BLUE_RESET 0x58
//! Change machine state (ascii char 'M')
#define WAVY_CMD_CMS 0x4D

//! Log synch number
#define LOG_SYNCH               0xFC

using DUNE_NAMESPACES;

#define RN 1

// Local headers
#if RN
#  include "rn42_driver.hpp"
#else
#  include "bc4_driver.hpp"
#endif

#include "base_ptl.h"

enum DOWNLOADER_STATE
{
  //! idle state
  DLDR_IDLE,
  //! sending size of packet
  DLDR_RECV_DATA,
  //! sending data
  DLDR_RECV_SIZE,
  //! receiving missed frames
  DLDR_RECV_MISSED,
  //! waiting for acknowledge message
  DLDR_SEND_ACK,
  //! resetting module due to time out
  DLDR_RESET,
  //! data receiving process is done
  DLDR_DONE,
  //! data receiving process failed
  DLDR_FAILED
};

typedef enum
{
  //! Do not change mode
  GOTO_NONE,
  //! Change to mode idle
  GOTO_IDLE,
  //! Change mode mission
  GOTO_MISSION,
  //! Change mode to shutdown
  GOTO_SHUTDOWN,
  //! Change mode to bootloader jump
  GOTO_BOOTLOADER
} uploader_goto_mode_t;

// data to be filled in handler routine
struct frame
{
  uint8_t data[MAX_FRAME_SIZE];
  uint8_t size;
};

struct download_manager
{
  //! Frame of temporary data
  struct frame temp_frame;
  //! downloader state
  enum DOWNLOADER_STATE state;
  //! ptl parser
  struct ptl_parser parser;
  //! number of records that were received
  uint8_t n_recs;
  //! number of frames that will be received
  uint8_t n_frames;
  //! amount of data received
  uint16_t total_recv;
  //! index pointing to which frame should be received next
  uint8_t index;
  //! timer to test timeouts
  double timer;
  //! bitfield to identify missed frames
  uint8_t bitfield;
  //! ostream for file output
  std::ofstream* fout;
  //! Total number of frames that will be received
  uint32_t log_size;
  //! Time since beggining of download
  double d_start;
};

struct date
{
  /** Year (starting from 2000), wraps around in 2255. */
  uint8_t year;
  /** Month. */
  uint8_t month;
  /** Day of the month. */
  uint8_t day;
  /** Hour of the day. */
  uint8_t hour;
  /** Minute of the hour. */
  uint8_t minute;
  /** Second of the minute. */
  uint8_t second;
} __attribute__((packed));

#define PARAMS_GSM_RECIP_SIZE 14

struct params_user
{
  //! Version.
  uint8_t version;
  //! Enabled GPS devices (bitfield).
  uint8_t gps_devices;
  //! GPS fix periodicity.
  uint8_t gps_fix_per;
  //! GSM recipient.
  char gsm_recipient[PARAMS_GSM_RECIP_SIZE];
  //! GSM report periodicity (s).
  uint16_t gsm_report_per;
  //! Emergency report periodicity (s).
  uint16_t emergency_report_per;
  //! Emergency report timeout (s).
  uint16_t emergency_report_tou;
  //! Mission starting date
  struct date start_date;
  //! Bitfield for when to start the mission
  uint8_t start_field;
  //! CRC.
  uint8_t crc;
} __attribute__((packed));

struct params_factory
{
  //! Version.
  uint8_t version;
  //! Serial number.
  uint16_t serial;
  //! Flash memory size (bytes).
  uint32_t flash_size;
  //! Emergency voltage threshold (mV).
  uint16_t emergency_mv;
  //! Shutdown voltage threshold (mV).
  uint16_t shutdown_mv;
  //! Fuel Gauge EEPROM.
  uint8_t fuel_gauge_eep[26];
  //! CRC.
  uint8_t crc;
} __attribute__((packed));

struct wavy_status
{
  //! Temperature as provided by the fuel gauge
  int16_t voltage;
  //! Remaining active relative capacity in %
  uint8_t rarc;
  //! Battery voltage
  int16_t temperature;
  //! GPS fix latitude
  int32_t latitude;
  //! GPS fix longitude
  int32_t longitude;
  //! GPS number of satellites
  uint8_t satellites;
  //! GPS fix validity
  uint8_t validity;
  //! GPS horizontal dillution of precision
  uint16_t hdop;
} __attribute__((packed));

typedef struct download_manager* download_manager_t;

struct log_header
{
  //! Synch value
  uint8_t synch;
  //! Serial number
  uint16_t serial;
} __attribute__((packed));

static std::ostream* ss_dbg;

void
printUserParams(struct params_user* puser)
{
  printf("USER PARAMS\n");
  printf("  VERSION     : %u\n", puser->version);
  printf("  GPS DEVS    : %u\n", puser->gps_devices);
  printf("  GPS FIX PER : %u\n", puser->gps_fix_per);
  printf("  GSM RECP    : %s\n", puser->gsm_recipient);
  printf("  GSM REP FRQ : %u\n", puser->gsm_report_per);
  printf("  EME REP PER : %u\n", puser->emergency_report_per);
  printf("  EME REP TOU : %u\n", puser->emergency_report_tou);
  printf("  STA DATE YEA: %u\n", puser->start_date.year);
  printf("  STA DATE MON: %u\n", puser->start_date.month);
  printf("  STA DATE DAY: %u\n", puser->start_date.day);
  printf("  STA DATE HOU: %u\n", puser->start_date.hour);
  printf("  STA DATE MIN: %u\n", puser->start_date.minute);
  printf("  STA DATE SEC: %u\n", puser->start_date.second);
  printf("  STA NEXT ON : %u\n", puser->start_field);
  printf("  CRC8        : %x\n", puser->crc);
  printf("\n\n");
}

void
printFactoryParams(struct params_factory* pf)
{
  printf("FACTORY\n");
  printf("  VERSION     : %u\n", pf->version);
  printf("  SERIAL      : %u\n", pf->serial);
  printf("  FLASH       : %x\n", pf->flash_size);
  printf("  EMERGENCY MV: %u\n", pf->emergency_mv);
  printf("  SHUTDOWN MV : %u\n", pf->shutdown_mv);
  printf("  FUEL GAUGE  :");
  for (uint8_t i = 0; i < sizeof(pf->fuel_gauge_eep); ++i)
    printf(" %x", pf->fuel_gauge_eep[i]);
  printf("\n");

  printf("  CRC8        : %u\n", pf->crc);
  printf("\n\n");
}

void
printStatus(struct wavy_status* st)
{
  printf("WAVY STATUS\n");
  printf("  VOLTAGE     : %d\n", st->voltage);
  printf("  RARC        : %u\n", st->rarc);
  printf("  TEMPERATURE : %d\n", st->temperature);
  printf("  LATITUDE    : %d\n", st->latitude);
  printf("  LONGITUDE   : %d\n", st->longitude);
  printf("  SATELLITES  : %u\n", st->satellites);
  printf("  VALIDITY    : %u\n", st->validity);
  printf("  HDOP        : %u\n", st->validity);
  printf("\n\n");
}

void
printProgress(download_manager_t dldr)
{
  double elapsed = Clock::get() - dldr->d_start;

  double total_time = (double)dldr->log_size * elapsed / dldr->total_recv;
  double time_left = total_time - elapsed;

  unsigned mins = (unsigned)(time_left / 60) % 60;
  unsigned secs = (unsigned)time_left % 60;

  std::string str_min = (mins > 9)? String::str("%u", mins) : String::str("0%u", mins);
  std::string str_sec = (secs > 9)? String::str("%u", secs) : String::str("0%u", secs);

  std::cerr << "Estimated time left: " << (unsigned)time_left / 60 / 60 << ":"
            << str_min << ":" << str_sec << std::endl;
}

void
printCmd(int cmd)
{
  if ((cmd == 0) || (cmd == -1))
    return;

  switch ((unsigned)cmd)
  {
    case WAVY_CMD_DATA:
    case WAVY_CMD_STATUS:
    case WAVY_CMD_PARAM_FACTORY:
    case WAVY_CMD_PARAM_USER:
    case CMD_GIT_INFO:
    case CMD_NAME:
      break;
    default:
      (*ss_dbg) << "PTL: " << (unsigned)cmd << std::endl;
      break;
  }
}

static inline int
download_handler(uint8_t cmd, uint8_t* data, uint8_t data_len)
{
  switch (cmd)
  {
    case WAVY_CMD_DATA:
      // download_data_handle(data, data_len);
      return WAVY_CMD_DATA;

    case WAVY_CMD_SIZE:
      // download_size_handle(data,data_len);
      return WAVY_CMD_SIZE;

    case WAVY_CMD_ACK:
    case WAVY_CMD_NACK:
    case WAVY_CMD_NTS:
    case WAVY_CMD_REQ:
    case WAVY_CMD_INC:
    case WAVY_CMD_STOP:
    case WAVY_CMD_PARAM_USER:
    case WAVY_CMD_PARAM_FACTORY:
    case WAVY_CMD_STATUS:
    case WAVY_CMD_CMS:
    case CMD_FW_NAME:
    case CMD_GIT_INFO:
      return cmd;

    default:
      return -1;
  }
}

static inline void
downloadInit(download_manager_t dldr, bool download = true)
{
  dldr->state = DLDR_IDLE;
  ptl_init(&dldr->parser, download_handler);
  dldr->n_recs = 0;
  dldr->n_frames = 8;
  dldr->total_recv = 0;
  dldr->index = 0;
  dldr->bitfield = 0x00;
  dldr->timer = Clock::get();

  if (download)
  {
    std::stringstream ss;
    ss << (long)Clock::getSinceEpoch() << "_wavy_log" << ".wlg";
    dldr->fout = new std::ofstream(ss.str().c_str(), std::ios::binary);
  }
  else
  {
    dldr->fout = NULL;
  }
}

bool
downloadReadData(download_manager_t dldr, bool trace)
{
  if (trace)
  {
    (*ss_dbg) << "-------------" << std::endl;
    (*ss_dbg) << "INF: Received data size is: "
              << (unsigned)dldr->temp_frame.size << std::endl;
    (*ss_dbg) << "Data: ";
  }

  if (trace)
  {
    for (uint8_t i = 0; i < dldr->temp_frame.size; ++i)
    {
      (*ss_dbg) << std::hex
                << (unsigned)dldr->temp_frame.data[i]
                << std::dec;
      (*ss_dbg) << " ";
    }
  }

  dldr->fout->write((char*)dldr->temp_frame.data, dldr->temp_frame.size);

  // for now...
  ++dldr->n_recs;

  if (trace)
  {
    (*ss_dbg) << std::endl;
    (*ss_dbg) << "-------------" << std::endl;
  }

  // update bitfield
  dldr->bitfield |= (1<<dldr->index);

  return true;
}

bool
checkMissingFrames(download_manager_t dldr, bool trace)
{
  // check if there is a frame missing
  if (dldr->bitfield != (uint8_t)(~(0xFF << dldr->n_frames)))
  {
    ptl_out_cmd(WAVY_CMD_INC, &dldr->bitfield, 1);
    dldr->state = DLDR_RECV_MISSED;
    dldr->index = 0;

    if (trace)
      (*ss_dbg) << "WRN: Missed some frames." << std::endl;

    return true;
  }
  else
  {
    return false;
  }
}

uint8_t
countRecords(download_manager_t dldr)
{

}

uint32_t
downloadSize(download_manager_t dldr)
{
  if (dldr->temp_frame.size != sizeof(uint32_t))
  {
    // invalid size of packet
    return 0;
  }
  else
  {
    return *(uint32_t*)&dldr->temp_frame.data[0];
  }
}

void
onDownload(download_manager_t dldr)
{
  int cmd;
  cmd = ptl_process(&dldr->parser, dldr->temp_frame.data, &dldr->temp_frame.size);

  printCmd(cmd);

  switch (dldr->state)
  {
    case DLDR_IDLE:
      if (cmd == WAVY_CMD_ACK)
      {
        dldr->state = DLDR_RECV_DATA;
        dldr->bitfield = 0x00;
        dldr->timer = Clock::get();
        (*ss_dbg) << "INF: Got acknowledge to request" << std::endl;
      }
      else if (cmd == WAVY_CMD_SIZE)
      {
        dldr->log_size = downloadSize(dldr);

        (*ss_dbg) << "size is " << dldr->log_size << std::endl;

        ptl_out_cmd(WAVY_CMD_REQ, 0, 0);
        dldr->timer = Clock::get();
        dldr->d_start = Clock::get();
      }
      else if (cmd == WAVY_CMD_NTS)
      {
        (*ss_dbg) << "INF: Wavy has got nothing to send." << std::endl;
        dldr->state = DLDR_DONE;
        ptl_out_cmd(WAVY_CMD_ACK, 0, 0);
      }
      else if (cmd == WAVY_CMD_NACK)
      {
        std::cerr << "ERR: Wavy has rejected upload." << std::endl;
        dldr->state = DLDR_FAILED;
      }
      else if ((cmd != 0) && (cmd != -1))
      {
        std::cerr << "WRN: Got corrupted or out of context message (IDLE)."
                  << std::endl;
        std::cerr << "WRN: " << (unsigned)cmd << std::endl;
        ptl_out_cmd(WAVY_CMD_NACK, 0, 0);
      }
      else if (Clock::get() - dldr->timer >= DLDR_REQ_PERIOD)
      {
        (*ss_dbg) << "INF: Sending request ..." << std::endl;
        ptl_out_cmd(WAVY_CMD_SIZE, 0, 0);
        dldr->timer = Clock::get();
      }
      break;

      // Receiving data
    case DLDR_RECV_DATA:
      if (cmd == WAVY_CMD_DATA)
      {
        if ( !downloadReadData(dldr, true) )
          break;

        dldr->timer = Clock::get();

        // check if this was the last frame of the set
        if (dldr->index >= dldr->n_frames - 1)
        {
          dldr->index = dldr->n_frames;
          // check if there is a frame missing
          if ( checkMissingFrames(dldr, true) )
          {
            std::cerr << "Going to recovery." << std::endl;
            break;
          }

          ptl_out_cmd(WAVY_CMD_ACK, 0, 0);
          dldr->bitfield = 0x00;
          dldr->index = 0;
          dldr->total_recv += dldr->n_recs;
          dldr->n_recs = 0;

          (*ss_dbg) << "INF: Got all frames of this set. Sent acknowledge."
                    << std::endl;
          std::cerr << "Got so far: " << dldr->total_recv << " ("
                    << std::fixed << std::setprecision(2)
                    << (float)dldr->total_recv / dldr->log_size * 100.0
                    << "%)" << std::endl;

          printProgress(dldr);
        }
        else // increment counter
        {
          ++dldr->index;
        }
      }
      else if (cmd == WAVY_CMD_NTS)
      {
        dldr->timer = Clock::get();

        (*ss_dbg) << "INF: Wavy has got nothing to send." << std::endl;

        dldr->n_frames = dldr->index;

        (*ss_dbg) << "bitfield is " << (int)dldr->bitfield << std::endl;

        if( checkMissingFrames(dldr, true) )
        {
          break;
        }
        else
        {
          ptl_out_cmd(WAVY_CMD_ACK, 0, 0);
          dldr->state = DLDR_DONE;
          dldr->total_recv += dldr->n_recs;
          dldr->n_recs = 0;

          std::cerr << "Got a total of " << dldr->total_recv << std::endl;

          // attempt to request a reset of the bluetooth module
          ptl_out_cmd(WAVY_CMD_BLUE_RESET, 0, 0);
        }
      }
      else if (cmd == WAVY_CMD_NACK)
      {
        ptl_out_cmd(WAVY_CMD_ACK, 0, 0);
        dldr->timer = Clock::get();
        std::cerr << "WRN: Apparently wavy did not receive a sound ack."
                  << std::endl;
      }
      else if (cmd == WAVY_CMD_ACK)
      {
        // if we receive an ack then we reply with an ack
        ptl_out_cmd(WAVY_CMD_ACK, 0, 0);
        dldr->timer = Clock::get();

        (*ss_dbg) << "INF: Got ack, replying with and ack" << std::endl;
      }
      else if ((cmd != 0) && (cmd != -1))
      {
        std::cerr << "WRN: Got corrupted or out of context message (RECV_DATA)."
                  << std::endl;
        std::cerr << "WRN: cmd " << (unsigned)cmd
                  << " index = " << (int)dldr->index
                  << std::endl;

        // increment counter
        ++dldr->index;

        if (dldr->index > dldr->n_frames - 1)
        {
          ptl_out_cmd(WAVY_CMD_INC, &dldr->bitfield, 1);
          dldr->state = DLDR_RECV_MISSED;
          dldr->index = 0;
          std::cerr << "WRN: Missed some frames. Going to recovery.("
                    << (int)dldr->bitfield << ")" << std::endl;
          break;
        }
      }
      else if (Clock::get() - dldr->timer >= INDEX_TIMEOUT)
      {
        // we've most likely lost connection so reset index
        dldr->index = 0;
      }
      else if (Clock::get() - dldr->timer >= DLDR_TIMEOUT)
      {
        dldr->timer = Clock::get();
        std::cerr << "ERR: Connection with wavy timed out!" << std::endl
                  << "ERR: no longer receiving." << std::endl;
        dldr->state = DLDR_FAILED;
      }
      break;

      // Receiving missed data
    case DLDR_RECV_MISSED:
      if (cmd == WAVY_CMD_DATA)
      {
        // update timer
        dldr->timer = Clock::get();

        // check which index is being received according to bitfield
        uint8_t temp_bitfield = dldr->bitfield >> dldr->index;

        while (dldr->index <= dldr->n_frames - 1)
        {
          if (0x01 & temp_bitfield)
          {
            ++dldr->index;
            temp_bitfield >>= 1;
          }
          else
          {
            break;
          }
        }

        if ( !downloadReadData(dldr, true) )
          break;

        (*ss_dbg) << "index: " << (int)dldr->index << std::endl;

        temp_bitfield = dldr->bitfield >> dldr->index;

        (*ss_dbg) << "bitfield: " << (int)dldr->bitfield << std::endl;

        // update index again
        while (dldr->index <= dldr->n_frames - 1)
        {
          if (0x01 & temp_bitfield)
          {
            ++dldr->index;
            temp_bitfield >>= 1;
          }
          else
          {
            break;
          }
        }

        // Got to the end of the missing frames
        if (dldr->index > dldr->n_frames - 1)
        {
          (*ss_dbg) << "INF: Reached end of missing frames." << std::endl;
          dldr->index = dldr->n_frames;
          if ( checkMissingFrames(dldr, true) )
          {
            std::cerr << "WRN: Attempting to receive them again.("
                      << (unsigned)dldr->bitfield << ")" << std::endl;
          }
          else
          {
            // reset bitfield and setup to receive some more frames
            dldr->total_recv += dldr->n_recs;
            dldr->n_recs = 0;
            dldr->bitfield = 0x00;
            dldr->state = DLDR_RECV_DATA;
            dldr->index = 0;
            // send acknowledge
            ptl_out_cmd(WAVY_CMD_ACK, 0, 0);

            (*ss_dbg) << "INF: Got all frames of this set (RECV_MISSED)." << std::endl;
          }
        }
      }
      else if (cmd == WAVY_CMD_NACK)
      {
        ptl_out_cmd(WAVY_CMD_INC, &dldr->bitfield, 1);
        dldr->timer = Clock::get();
        std::cerr << "WRN: Apparently wavy did not receive a sound INC command."
                  << std::endl;
      }
      else if (cmd == WAVY_CMD_ACK)
      {
        // if we receive an ack then we reply with an ack
        ptl_out_cmd(WAVY_CMD_ACK, 0, 0);
        dldr->timer = Clock::get();
      }
      else if ((cmd != 0) && (cmd != -1))
      {
        std::cerr << "WRN: Got corrupted or out of context message (RECV_MISSED)."
                  << std::endl;
        std::cerr << "WRN: " << (unsigned)cmd << std::endl;

        // increment counter any way
        ++dldr->index;

        if (dldr->index > dldr->n_frames - 1)
        {
          (*ss_dbg) << "INF: Reached end of missing frames." << std::endl;
          ptl_out_cmd(WAVY_CMD_INC, &dldr->bitfield, 1);
          dldr->state = DLDR_RECV_MISSED;
          dldr->index = 0;
          std::cerr << "WRN: Some frames missed. Attempting to receive them again.("
                    << (unsigned)dldr->bitfield << ")" << std::endl;
          break;
        }
      }
      else if (Clock::get() - dldr->timer >= INDEX_TIMEOUT)
      {
        dldr->index = 0;
        dldr->state = DLDR_RECV_DATA;
      }
      else if (Clock::get() - dldr->timer >= DLDR_TIMEOUT)
      {
        dldr->timer = Clock::get();
        dldr->state = DLDR_FAILED;
        std::cerr << "ERR: Connection with wavy timed out!" << std::endl
                  << "ERR: no longer receiving." << std::endl;
      }
      break;

      // Process is either done of failed
    case DLDR_DONE:
    case DLDR_FAILED:
      break;
  }

}

bool
onGetCommand(download_manager_t dldr, int expected_cmd,
             uint8_t* payload = NULL, uint8_t payload_size = 0)
{
  int cmd;
  cmd = ptl_process(&dldr->parser, dldr->temp_frame.data, &dldr->temp_frame.size);

  printCmd(cmd);

  switch (dldr->state)
  {
    case DLDR_IDLE:
      if (cmd == WAVY_CMD_NACK)
      {
        std::cerr << "ERR: Wavy has rejected or misread request." << std::endl;
      }
      else if (cmd == expected_cmd)
      {
        dldr->state = DLDR_DONE;

        return true;
      }
      else if ((cmd != 0) && (cmd != -1))
      {
        std::cerr << "WRN: Got corrupted or out of context message (IDLE)." << std::endl;
        std::cerr << "WRN: " << (unsigned)cmd << std::endl;
        ptl_out_cmd(WAVY_CMD_NACK, 0, 0);
      }
      else if (Clock::get() - dldr->timer >= DLDR_REQ_PERIOD)
      {
        (*ss_dbg) << "INF: Sending request ..." << std::endl;

        if (payload != NULL)
          ptl_out_cmd(expected_cmd, (uint8_t*)payload, payload_size);
        else
          ptl_out_cmd(expected_cmd, 0, 0);

        dldr->timer = Clock::get();
      }
      break;
      // Process is either done of failed
    case DLDR_DONE:
    case DLDR_FAILED:
      break;
  }

  return false;
}

void
onGetUserData(download_manager_t dldr, struct params_user* puser, const char* name)
{
  bool success = false;

  if (puser != NULL)
  {
    success = onGetCommand(dldr, WAVY_CMD_PARAM_USER,
                           (uint8_t*)puser, sizeof(struct params_user));
  }
  else
  {
    success = onGetCommand(dldr, WAVY_CMD_PARAM_USER, 0, 0);
  }

  if (success)
  {
    (*ss_dbg) << "----------"
              << name
              << "----------"
              << std::endl;

    struct params_user temp;
    memcpy((uint8_t*)&temp, dldr->temp_frame.data, sizeof(struct params_user));
    printUserParams(&temp);

    (*ss_dbg) << "--------------------"
              << std::endl;
  }
}

void
onGetFactoryData(download_manager_t dldr, const char* name)
{
  if (onGetCommand(dldr, WAVY_CMD_PARAM_FACTORY, NULL, 0))
  {
    (*ss_dbg) << "----------"
              << name
              << "----------"
              << std::endl;

    struct params_factory temp;
    memcpy((uint8_t*)&temp, dldr->temp_frame.data, sizeof(struct params_factory));
    printFactoryParams(&temp);

    (*ss_dbg) << "--------------------"
              << std::endl;
  }
}

void
onGetStatus(download_manager_t dldr, const char* name)
{
  int cmd;
  cmd = ptl_process(&dldr->parser, dldr->temp_frame.data, &dldr->temp_frame.size);

  printCmd(cmd);

  switch (dldr->state)
  {
    case DLDR_IDLE:
      if (cmd == WAVY_CMD_NACK)
      {
        std::cerr << "ERR: Wavy has rejected or misread request." << std::endl;
      }
      else if (cmd == CMD_FW_NAME)
      {
        std::string fw_name;
        fw_name.assign((char*)dldr->temp_frame.data, dldr->temp_frame.size);

        std::cerr << "Firmware name: " << fw_name << std::endl;

        ptl_out_cmd(CMD_GIT_INFO, 0, 0);
      }
      else if (cmd == CMD_GIT_INFO)
      {
        std::string git_info;
        git_info.assign((char*)dldr->temp_frame.data, dldr->temp_frame.size);

        std::cerr << "Git info: " << git_info << std::endl;

        ptl_out_cmd(WAVY_CMD_STATUS, 0, 0);
      }
      else if (cmd == WAVY_CMD_STATUS)
      {
        std::cerr << "----------"
                  << name
                  << "----------"
                  << std::endl;

        struct wavy_status temp;
        memcpy((uint8_t*)&temp, dldr->temp_frame.data, sizeof(struct wavy_status));
        printStatus(&temp);

        std::cerr << "----------"
                  << name
                  << "----------"
                  << std::endl;

        dldr->state = DLDR_DONE;

        // attempt to request a reset of the bluetooth module
        ptl_out_cmd(WAVY_CMD_BLUE_RESET, 0, 0);
      }
      else if ((cmd != 0) && (cmd != -1))
      {
        std::cerr << "WRN: Got corrupted or out of context message (IDLE)." << std::endl;
        std::cerr << "WRN: " << (unsigned)cmd << std::endl;
        ptl_out_cmd(WAVY_CMD_NACK, 0, 0);
      }
      else if (Clock::get() - dldr->timer >= DLDR_REQ_PERIOD)
      {
        (*ss_dbg) << "INF: Sending request ..." << std::endl;
        ptl_out_cmd(CMD_FW_NAME, 0, 0);
        dldr->timer = Clock::get();
      }
      break;
    case DLDR_DONE:
    case DLDR_FAILED:
      break;
  }
}

void
onJumpBoot(download_manager_t dldr)
{
  bool success = false;

  uploader_goto_mode_t cms = GOTO_BOOTLOADER;
  success = onGetCommand(dldr, WAVY_CMD_CMS, (uint8_t*)&cms, 1);

  if (success)
    std::cerr << "INF: Wavy has received change mode request command." << std::endl;
}

void
getUserParams(struct params_user* puser, Parsers::Config* config, const std::string sec)
{
  uint8_t version;
  config->get(sec, "Version", "0", version);
  puser->version = version;

  uint8_t gps_devices;
  config->get(sec, "GPS Devices", "0x03", gps_devices);
  puser->gps_devices = gps_devices;

  uint8_t gps_fix_per;
  config->get(sec, "GPS Fix Periodicity", "2", gps_fix_per);
  puser->gps_fix_per = gps_fix_per;

  std::string num;
  config->get(sec, "GSM Recipient", "+351933128436", num);
  if (num.size() > PARAMS_GSM_RECIP_SIZE - 1)
    throw std::runtime_error("recipient number is too large");

  memcpy(&puser->gsm_recipient[0], &num[0], num.size());

  uint16_t gsm_report_per;
  config->get(sec, "GSM Report Periodicy", "100", gsm_report_per);
  puser->gsm_report_per = gsm_report_per;

  uint16_t emergency_report_per;
  config->get(sec, "Emergency Report Periodicy", "60", emergency_report_per);
  puser->emergency_report_per = emergency_report_per;

  uint16_t emergency_report_tou;
  config->get(sec, "Emergency Report Timeout", "60", emergency_report_tou);
  puser->emergency_report_tou = emergency_report_tou;

  uint8_t year;
  config->get(sec, "Year", "13", year);
  puser->start_date.year = year;

  uint8_t month;
  config->get(sec, "Month", "7", month);
  puser->start_date.month = month;

  uint8_t day;
  config->get(sec, "Day", "1", day);
  puser->start_date.day = day;

  uint8_t hour;
  config->get(sec, "Hour", "12", hour);
  puser->start_date.hour = hour;

  uint8_t minute;
  config->get(sec, "Minute", "30", minute);
  puser->start_date.minute = minute;

  uint8_t second;
  config->get(sec, "Second", "10", second);
  puser->start_date.second = second;

  uint8_t start_field;
  config->get(sec, "Start Mission Field", "0", start_field);
  puser->start_field = start_field;
}

uint16_t
extractSerial(const char* name)
{
  unsigned serial = 0xffff;

  std::stringstream ss(name);

  for (unsigned i = 0; i < std::strlen(name); ++i)
  {
    char c;
    ss >> c;

    if (c == '-')
    {
      ss >> serial;
      std::cerr << "Serial Number: " << serial << std::endl;
      break;
    }
  }

  return serial;
}

int
main(int argc, char* argv[])
{
  char op = 'd';

  bool debug = false;
  std::filebuf fb;

  if (argc < 3 || argc > 5)
  {
    std::cerr << "Need three to five arguments."
              << argv[0] << " [serial port] [name] [operation] [debug]"
              << std::endl
              << "[operation] can be: " << std::endl
              << "-d (download)" << std::endl
              << "-u (set user parameters)" << std::endl
              << "-p (get user and factory parameters)" << std::endl
              << "-s (get status)" << std::endl
              << "-b (jump to bootloader)" << std::endl
              << "Setting user parameters expects a file called user.ini in the same dir."
              << std::endl
              << "[operation] defaults to -d."
              << std::endl
              << "[debug] any string or char will enable debug"
              << "[debug] debug is disabled by default"
              << std::endl;
    return -1;
  }

  if (argc >= 4)
  {
    op = argv[3][1];

    if (op != 'd' && op != 'u' && op != 'p' && op != 's' && op != 'b')
    {
      std::cerr << "invalid operation" << std::endl;
      return -1;
    }
  }

  if (argc == 5)
    debug = true;

  if (debug)
  {
    ss_dbg = &std::cerr;
  }
  else
  {
    fb.open("/dev/null", std::ios::out);
    ss_dbg = new std::ostream(&fb);
  }

  std::cerr << "Initializing device..." << std::endl;
  std::cerr << "--------------------" << std::endl;
  if (!initDevice(argv[1], ss_dbg))
  {
    std::cerr << "--------------------" << std::endl;
    std::cerr << "Failed to initialize device" << std::endl;
    closeDevice();
    return -1;
  }
  else
  {
    std::cerr << "--------------------" << std::endl;
    std::cerr << "Device configured successfully" << std::endl;
  }

  std::vector<Device> devices;
  const char* name = argv[2];

  std::cerr << "Attempting to connect to '" << name << "'" << std::endl;
  std::cerr << "--------------------" << std::endl;
  if (!connectToWavy(name, devices))
  {
    std::cerr << "Failed to connect to '" << name << "' device" << std::endl;
    closeDevice();
    return -1;
  }
  else
  {
    std::cerr << "--------------------" << std::endl;
    std::cerr << "Connection to '" << name << "' successful" << std::endl;
  }

  download_manager downloader;

  if (op == 'd')
  {
    downloadInit(&downloader);

    struct log_header lh;
    lh.synch = LOG_SYNCH;
    lh.serial = extractSerial(name);

    downloader.fout->write((const char*)&lh,
                           sizeof(struct log_header));

    while (1)
    {
      onDownload(&downloader);

      if (downloader.state == DLDR_FAILED)
      {
        std::cerr << "ERR: Data receiving failed." << std::endl;
        break;
      }

      if (downloader.state == DLDR_DONE)
      {
        std::cerr << "INF: Data receiving process is over!" << std::endl;
        break;
      }
    }
  }
  else if (op == 'u')
  {
    Parsers::Config config("user.ini");

    struct params_user params = {0};

    getUserParams(&params, &config, "User");

    CRC8 csum(0x07);
    params.crc = csum.putArray((uint8_t*)&params,
                               sizeof(struct params_user) - sizeof(params.crc));

    std::cerr << "Will try to send these params:" << std::endl;
    std::cerr << "----------------------------------" << std::endl;
    printUserParams(&params);
    std::cerr << "----------------------------------" << std::endl;

    downloadInit(&downloader, false);

    while (1)
    {
      onGetUserData(&downloader, &params, name);

      if (downloader.state == DLDR_FAILED)
      {
        std::cerr << "ERR: Receiving user parameters failed." << std::endl;
        break;
      }

      if (downloader.state == DLDR_DONE)
      {
        std::cerr << "INF: Receiving user parameters is over!" << std::endl;
        break;
      }
    }

    // attempt to request a reset of the bluetooth module
    ptl_out_cmd(WAVY_CMD_BLUE_RESET, 0, 0);
  }
  else if (op == 'p')
  {

    downloadInit(&downloader, false);

    while (1)
    {
      onGetUserData(&downloader, NULL, name);

      if (downloader.state == DLDR_FAILED)
      {
        std::cerr << "ERR: Receiving user parameters failed." << std::endl;
        break;
      }

      if (downloader.state == DLDR_DONE)
      {
        std::cerr << "INF: Receiving user parameters is over!" << std::endl;
        break;
      }
    }

    downloadInit(&downloader, false);

    while (1)
    {
      onGetFactoryData(&downloader, name);

      if (downloader.state == DLDR_FAILED)
      {
        std::cerr << "ERR: Receiving wavy status failed." << std::endl;
        break;
      }

      if (downloader.state == DLDR_DONE)
      {
        std::cerr << "INF: Receiving factory parameters is over!" << std::endl;
        break;
      }
    }

    // attempt to request a reset of the bluetooth module
    ptl_out_cmd(WAVY_CMD_BLUE_RESET, 0, 0);
  }
  else if (op == 's')
  {
    downloadInit(&downloader, false);

    while (1)
    {
      onGetStatus(&downloader, name);

      if (downloader.state == DLDR_FAILED)
      {
        std::cerr << "ERR: Receiving wavy status failed." << std::endl;
        break;
      }

      if (downloader.state == DLDR_DONE)
      {
        std::cerr << "INF: Receiving wavy status is over!" << std::endl;
        break;
      }
    }
  }
  else if (op == 'b')
  {
    downloadInit(&downloader, false);

    while (1)
    {
      onJumpBoot(&downloader);

      if (downloader.state == DLDR_FAILED)
      {
        std::cerr << "ERR: Jumping to boot has failed." << std::endl;
        break;
      }

      if (downloader.state == DLDR_DONE)
      {
        std::cerr << "INF: Jumping to boot has succeeded!" << std::endl;
        break;
      }
    }

    // Disconnect and reconnect
    if (!disconnect())
    {
      std::cerr << "ERR: Failed to disconnect." << std::endl;
    }
    else
    {
      std::cerr << "Attempting to reconnect to '" << name << "'" << std::endl;
      std::cerr << "--------------------" << std::endl;

      unsigned tries = 0;

      while (1)
      {
        if (!connectToWavy(name, devices))
        {
          std::cerr << "Failed to reconnect to '" << name << "' device" << std::endl;

          if (tries >= 4)
          {
            closeDevice();
            return -1;
          }
        }
        else
        {
          std::cerr << "--------------------" << std::endl;
          std::cerr << "Reconnection to '" << name << "' successful" << std::endl;
          break;
        }

        std::cerr << "trying again" << std::endl;
      }

      // // Will now attempt to reconnect to the current device
      // for (unsigned i = 0; i < devices.size(); ++i)
      // {
      //   if (!devices[i].name.compare(name))
      //   {
      //     for (unsigned tries = 0; tries < 4; ++tries)
      //     {
      //       if (connect(devices[i]))
      //       {
      //         (*ss_dbg) << "Reconnection successful" << std::endl;
      //         break;
      //       }
      //       else
      //       {
      //         (*ss_dbg) << "Reconnection failed!" << std::endl;
      //       }
      //     }

      //     break;
      //   }
      // }
    }

    while (1)
    {
      uint8_t byte;
      if (m_uart->read(&byte, 1) == 1)
        std::cerr << (unsigned)byte << " ";
    }
  }

  (*ss_dbg) << "Done" << std::endl;

  if (downloader.fout != NULL)
  {
    downloader.fout->close();
    delete downloader.fout;
  }

  closeDevice();

  if (!debug)
  {
    delete ss_dbg;
    fb.close();
  }

  return 0;
}
