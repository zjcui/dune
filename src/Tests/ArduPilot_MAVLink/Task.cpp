//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Universidade do Porto. For licensing   *
// terms, conditions, and further traceormation contact lsts@fe.up.pt.        *
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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Zhengjie_Cui                                                     *
//***************************************************************************

// ISO C++ 98 headers, used for Serial Communication
#include <vector>
#include <cmath>
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Standard C++/C includes
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

// MYSQL includes
#include <mysql_connection.h>
#include <driver.h>
#include <resultset.h>
#include <statement.h>

// MAVLink headers.
#include <mavlink/ardupilotmega/mavlink.h>

#define PI 3.14159265358979323

namespace Tests
{
  namespace ArduPilot_MAVLink
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
      std::string device;
      uint32_t baud_rate;

      // SQL Driver handler
      sql::Driver *driver;
      // SQL connection handler
      sql::Connection *con;
      // SQL Statement handler
      sql::Statement *stmt;
      // SQL result handler
      sql::ResultSet *res;
      // Database address
      std::string db_address;
      // Database password
      std::string db_password;
      // Database name
      std::string db_name; 
      // Database user name
      std::string db_user;
      // Database Statement to get data
      std::string db_get_data_command;
      // Database Query Frequency
      double db_freq;

      // Reference GPS 
      fp64_t ref_lat;
      fp64_t ref_lon;
      fp32_t ref_height;

      // Debug Print options
      bool Print_In_Coming_Vicon;
      bool Print_Converted_WGS84_GPS;
      bool Print_In_Coming_Mavlink;

      float orientation;

      float filter_K;

      bool Print_Raw_Values;
      bool Print_Smooth_values;
    };

    struct Task: public DUNE::Tasks::Task
    {

      // Task arguments.
      Arguments m_args;

      //! Type definition for Arduino packet handler.
      typedef void (Task::* PktHandler)(const mavlink_message_t* msg);
      typedef std::map<int, PktHandler> PktHandlerMap;
      //! Arduino packet handling
      PktHandlerMap m_mlh;

      // Serial port handle.
      Hardware::SerialPort* m_uart;

      //! Parser Variables
      mavlink_message_t m_msg;

      //! System ID
      uint8_t m_sysid;

      // Receiving buffer
      uint8_t m_buf[512];

      // Vehicle Estimated State
      IMC::EstimatedState e_state;

      // Previous smooth info
      fp32_t last_2steps_velocity_x;
      fp32_t last_2steps_velocity_y;
      fp32_t last_2steps_velocity_z;
      fp32_t last_1steps_velocity_x;
      fp32_t last_1steps_velocity_y;
      fp32_t last_1steps_velocity_z;


      // Last step estated x, y
      fp32_t last_estate_x;
      fp32_t last_estate_y;
      fp32_t last_estate_z;

      // Current info
      fp32_t current_velocity_x;
      fp32_t current_velocity_y;
      fp32_t current_velocity_z;

      // Last time stamp
      uint64_t last_time_stamp;
      uint64_t last_delta_t;

      // Current time
      uint64_t u_msec;
      uint64_t delta_t;

      // Smooth values
      fp32_t smooth_velocity_x;
      fp32_t smooth_velocity_y;
      fp32_t smooth_velocity_z;
      fp32_t smooth_velocity;
      fp32_t smooth_course;

      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx),
        m_uart(NULL)
      {
        // Parameters for ArduPilot
        param("Serial_Port", m_args.device)
        .defaultValue("/dev/ttyUSB0")
        .description("Serial port device");

        param("Baud_Rate", m_args.baud_rate)
        .defaultValue("57600")
        .description("Serial port baud rate");

        // Setup packet handlers
        // IMPORTANT: set up function to handle each type of MAVLINK packet here
        m_mlh[MAVLINK_MSG_ID_ATTITUDE] = &Task::handleAttitudePacket;
        m_mlh[MAVLINK_MSG_ID_GPS_RAW_INT] = &Task::handleRawGPSPacket;

        // PArameters for SQL
        // Define configuration parameters
        param("Database_Address", m_args.db_address)
        .defaultValue("127.0.0.1")
        .description("Database Address");

        param("Database_Password", m_args.db_password)
        .defaultValue("password")
        .description("Database Password");

        param("Database_Name", m_args.db_name)
        .defaultValue("test_db")
        .description("Database Name");

        param("Database_User_Name", m_args.db_user)
        .defaultValue("root")
        .description("Database User Name");

        param("Get_Data_Command", m_args.db_get_data_command)
        .defaultValue("")
        .description("MYSQL Command to get data");

        param("Frequency", m_args.db_freq)
        .defaultValue("100.0")
        .description("Database Query Frequecy");

        param("Latitude", m_args.ref_lat)
        .defaultValue("42.293668")
        .description("EstimatedState Latitude");

        param("Longitude", m_args.ref_lon)
        .defaultValue("-83.711791")
        .description("EstimatedState Longitude");

        param("Height", m_args.ref_height)
        .defaultValue("0")
        .description("EstimatedState Height");

        param("Print_In_Coming_Vicon", m_args.Print_In_Coming_Vicon)
        .defaultValue("true")
        .description("Print_In_Coming_Vicon");

        param("Print_Converted_WGS84_GPS", m_args.Print_Converted_WGS84_GPS)
        .defaultValue("true")
        .description("Print_Converted_WGS84_GPS");

        param("Print_In_Coming_Mavlink", m_args.Print_In_Coming_Mavlink)
        .defaultValue("true")
        .description("Print_In_Coming_Mavlink");

        param("Orientation", m_args.orientation)
        .defaultValue("90")
        .description("degrees in CCW about z axis(pointing downwards) from the coordination mark on the floor in the lab");

        param("filter_K", m_args.filter_K)
        .defaultValue("31.415926535898")
        .description("low pass filter gain K: Y/U = K/(s+K)");

        param("Print_Raw_Values", m_args.Print_Raw_Values)
        .defaultValue("true")
        .description("Print_Raw_Values");

        param("Print_Smooth_values", m_args.Print_Smooth_values)
        .defaultValue("true")
        .description("Print_Smooth_values");

      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
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
        // Initialization:  Connecting to the database
        trace("Connecting to MYSQL Database\n");
        m_args.driver = get_driver_instance();
        m_args.con = m_args.driver->connect(m_args.db_address, m_args.db_user, m_args.db_password);
        trace("MYSQL Database Connected!\n");

        // Connect to the MySQL test database
        m_args.con->setSchema(m_args.db_name); 

        // Open Serial open for ArduPilot communication
        trace("Initializing Serial Port...");
        m_uart = new SerialPort(m_args.device, m_args.baud_rate);
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_uart);
        // if (m_uart != NULL)
        // {
        //   m_poll.remove(*m_uart);
        //   delete m_uart;
        //   m_uart = NULL;
        // }
      }

      ~Task(void)
      {
        onResourceRelease();
      }

      void
      onDataTransmission(const uint8_t* p, unsigned int n)
      {
        m_uart->write(p, n);
      }

      void
      onDataReception(uint8_t* p, unsigned int n, double timeout)
      {
        spew("begin parsing the data\n\r");

        if (!Poll::poll(*m_uart, timeout))
          return;

        int n_r;

        try
        {
          n_r = m_uart->read(p, n);
        }
        catch (std::exception& e)
        {
          err(DTR("read error: %s"), e.what());
          return;
        }

        if (n_r < 0)
        {
          err(DTR("unknown read error"));
          return;
        }

        mavlink_status_t status;
        for (int i = 0; i < n_r; i++)
        {
          int rv = mavlink_parse_char(MAVLINK_COMM_1, p[i], &m_msg, &status);
          /*if (status.packet_rx_drop_count)
          {
            switch(status.parse_state)
            {
              case MAVLINK_PARSE_STATE_IDLE:
                trace("failed at state IDLE");
                break;
              case MAVLINK_PARSE_STATE_GOT_STX:
                trace("failed at state GOT_STX");
                break;
              case MAVLINK_PARSE_STATE_GOT_LENGTH:
                trace("failed at state GOT_LENGTH");
                break;
              case MAVLINK_PARSE_STATE_GOT_SYSID:
                trace("failed at state GOT_SYSID");
                break;
              case MAVLINK_PARSE_STATE_GOT_COMPID:
                trace("failed at state GOT_COMPID");
                break;
              case MAVLINK_PARSE_STATE_GOT_MSGID:
                trace("failed at state GOT_MSGID");
                break;
              case MAVLINK_PARSE_STATE_GOT_PAYLOAD:
                trace("failed at state GOT_PAYLOAD");
                break;
              case MAVLINK_PARSE_STATE_GOT_CRC1:
                trace("failed at state GOT_CRC1");
                break;
              default:
                trace("failed OTHER");
            }
          }*/
          
          if (rv)
          {
            switch ((int)m_msg.msgid)
            {
              // case MAVLINK_MSG_ID_HEARTBEAT:
              //   trace("HEARTBEAT");
              //   break;
              // case MAVLINK_MSG_ID_SYS_STATUS:
              //   trace("SYS_STATUS");
              //   break;
              // case MAVLINK_MSG_ID_SYSTEM_TIME:
              //   trace("SYSTEM_TIME");
              //   break;
              // case 22:
              //   trace("PARAM_VALUE");
              //   break;
              case MAVLINK_MSG_ID_GPS_RAW_INT:
                trace("GPS_RAW");
                break;
              // case 27:
              //   trace("IMU_RAW");
              //   break;
              // case MAVLINK_MSG_ID_SCALED_PRESSURE:
              //   trace("SCALED_PRESSURE");
              //   break;
              // case MAVLINK_MSG_ID_ATTITUDE:
              //   trace("ATTITUDE");
              //   break;
              // case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:
              //   trace("GLOBAL_POSITION_INT");
              //   break;
              // case 34:
              //   trace("RC_CHANNELS_SCALED");
              //   break;
              // case 35:
              //   trace("RC_CHANNELS_RAW");
              //   break;
              // case MAVLINK_MSG_ID_MISSION_ITEM:
              //   trace("MISSION_ITEM");
              //   break;
              // case MAVLINK_MSG_ID_MISSION_REQUEST:
              //   trace("MISSION_REQUEST");
              //   break;
              // case MAVLINK_MSG_ID_MISSION_CURRENT:
              //   trace("MISSION_CURRENT");
              //   break;
              // case MAVLINK_MSG_ID_MISSION_ACK:
              //   trace("MISSION_ACK");
              //   break;
              // case MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT:
              //   trace("NAV_CONTROLLER_OUTPUT");
              //   break;
              // case MAVLINK_MSG_ID_VFR_HUD:
              //   trace("VFR_HUD");
              //   break;
              // case MAVLINK_MSG_ID_COMMAND_ACK:
              //   trace("CMD_ACK");
              //   break;
              // case MAVLINK_MSG_ID_BATTERY_STATUS:
              //   trace("BATTERY_STAT");
              //   break;
              // case 150:
              //   trace("SENSOR_OFFSETS");
              //   break;
              // case 152:
              //   trace("MEMtraceO");
              //   break;
              // case 162:
              //   trace("FENCE_STATUS");
              //   break;
              // case 163:
              //   trace("AHRS");
              //   break;
              // case 164:
              //   trace("SIM_STATE");
              //   break;
              // case MAVLINK_MSG_ID_HWSTATUS:
              //   trace("HW_STATUS");
              //   break;
              // case MAVLINK_MSG_ID_WIND:
              //   trace("WIND");
              //   break;
              // case MAVLINK_MSG_ID_STATUSTEXT:
              //   trace("STATUSTEXT");
              //   break;
              default:
                // debug("UNDEF: %u", m_msg.msgid);
                break;
            }

            PktHandler h = m_mlh[m_msg.msgid];

            if (!h)
              continue;  // Ignore this packet (no handler for it)

            // Call handler
            (this->*h)(&m_msg);
            m_sysid = m_msg.sysid;

          }
        }

        // debug("Incoming raw Data: %s\n\r", p);

      }

      //! Main loop.
      void
      onMain(void)
      {
        // Change to radian
        m_args.ref_lat = m_args.ref_lat/180*PI;
        m_args.ref_lon = m_args.ref_lon/180*PI;
        m_args.ref_height = m_args.ref_height;
        m_args.orientation = m_args.orientation/180*PI;
        
        last_2steps_velocity_x = 0;
        last_2steps_velocity_y = 0;
        last_2steps_velocity_z = 0;
        last_1steps_velocity_x = 0;
        last_1steps_velocity_y = 0;
        last_1steps_velocity_z = 0;
        last_estate_x = 0;
        last_estate_y = 0;
        last_estate_z = 0;
        last_time_stamp = 0;
        last_delta_t = 0;
        
        while (!stopping())
        {
          getSQLData();

          sendMAVLinkData();

          DUNE::Time::Delay::waitMsec(50);

          getMAVlinkData();
        }
      }

      // Get data from SQL
      void getSQLData(void)
      {
        m_args.stmt = m_args.con->createStatement();
        m_args.res = m_args.stmt->executeQuery(m_args.db_get_data_command);
        u_msec = DUNE::Time::Clock::getMsec();
        // debug("current time:%d \n", u_msec); 

        while (m_args.res->next()) 
        {
          e_state.x = atof(m_args.res->getString(2)->c_str());
          e_state.y = atof(m_args.res->getString(3)->c_str());
          e_state.z = atof(m_args.res->getString(4)->c_str());
          e_state.phi = atof(m_args.res->getString(5)->c_str());
          e_state.theta = atof(m_args.res->getString(6)->c_str());
          e_state.psi = atof(m_args.res->getString(7)->c_str());
          
          // Change the coordinate
          e_state.x = e_state.x * cos(m_args.orientation) - e_state.y * sin(m_args.orientation);
          e_state.y = e_state.x * sin(m_args.orientation) + e_state.y * cos(m_args.orientation);

          if (m_args.Print_In_Coming_Vicon)
          {
            debug("id: %d x:%f y:%f z:%f roll:%f pitch:%f yaw:%f \n", 
              m_args.res->getInt(1),
              e_state.x,
              e_state.y,
              e_state.z,
              e_state.phi,
              e_state.theta,
              e_state.psi);
          }  

          e_state.lat = m_args.ref_lat;
          e_state.lon = m_args.ref_lon;
          e_state.height = m_args.ref_height;
          DUNE::Coordinates::WGS84::displace(e_state.x, e_state.y, e_state.z, &e_state.lat, &e_state.lon, &e_state.height);
          
          if (m_args.Print_Converted_WGS84_GPS)
          {
            debug("converted to WGS84 (deg): lat:%f lon:%f height:%f \n", 
            e_state.lat/PI*180,
            e_state.lon/PI*180,
            e_state.height);
          }

          // delta_t in millisec;
          delta_t = u_msec - last_time_stamp;
          // debug("delta time:%d \n", delta_t);
          last_time_stamp = u_msec;

          if (delta_t != 0)
          {
            // Current raw velocity in (m/s)
            current_velocity_x = (e_state.x - last_estate_x) / delta_t * 1000;
            current_velocity_y = (e_state.y - last_estate_y) / delta_t * 1000;
            current_velocity_z = (e_state.z - last_estate_z) / delta_t * 1000;

            last_estate_x = e_state.x;
            last_estate_y = e_state.y;
            last_estate_z = e_state.z;

            // Smooth velocity x and y
            smooth();

            smooth_velocity = sqrt(pow(smooth_velocity_x, 2) + pow(smooth_velocity_y, 2));
            smooth_course = atan2(smooth_velocity_y, smooth_velocity_x);
            //change smooth course to [0, 2PI)
            if (smooth_course < 0) smooth_course += 2*PI;

          }

          if(m_args.Print_Raw_Values)
          {
            debug("raw velocity(m/s) x:%f, y:%f z:%f\n", current_velocity_x, current_velocity_y, current_velocity_z);
          }

          if (m_args.Print_Smooth_values)
          {
            debug("smooth Ground velocity (m/s):%f, course:%f \n", smooth_velocity, smooth_course);
            debug("smooth velocity (m/s):x %f, y:%f, z:%f \n", smooth_velocity_x, smooth_velocity_y, smooth_velocity_z);
          
          }

          // inf("Current Freq: %f \n", getFrequency());
        }

      }

      // Smooth velocities
      void smooth(void)
      {
        if (last_delta_t == 0)
        {
          smooth_velocity_x = current_velocity_x;
          smooth_velocity_y = current_velocity_y;
          smooth_velocity_z = current_velocity_z;
        }
        else
        {
          smooth_velocity_x = current_velocity_x - (last_1steps_velocity_x - last_2steps_velocity_x) / m_args.filter_K / last_delta_t;
          smooth_velocity_y = current_velocity_y - (last_1steps_velocity_y - last_2steps_velocity_y) / m_args.filter_K / last_delta_t;
          smooth_velocity_z = current_velocity_z - (last_1steps_velocity_z - last_2steps_velocity_z) / m_args.filter_K / last_delta_t;
        }

        last_delta_t = delta_t;
        last_2steps_velocity_x = last_1steps_velocity_x;
        last_2steps_velocity_y = last_1steps_velocity_y;
        last_2steps_velocity_z = last_1steps_velocity_z;
        last_1steps_velocity_x = smooth_velocity_x;
        last_1steps_velocity_y = smooth_velocity_y;
        last_1steps_velocity_z = smooth_velocity_z;

      }

      // Send Mavlink data to vehicle end
      void sendMAVLinkData(void)
      {
        mavlink_message_t m_msg_send;
        uint8_t m_buf_send[512];
        uint16_t n = 0;
        // GPS RAW DATA
        /**
         * @brief Pack a gps_raw_int message on a channel
         * @param system_id ID of this system
         * @param component_id ID of this component (e.g. 200 for IMU)
         * @param chan The MAVLink channel this message will be sent over
         * @param msg The MAVLink message to compress the data into
         * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
         * @param fix_type 0-1: no fix, 2: 2D fix, 3: 3D fix, 4: DGPS, 5: RTK. Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.
         * @param lat Latitude (WGS84), in degrees * 1E7
         * @param lon Longitude (WGS84), in degrees * 1E7
         * @param alt Altitude (AMSL, NOT WGS84), in meters * 1000 (positive for up). Note that virtually all GPS modules provide the AMSL altitude in addition to the WGS84 altitude.
         * @param eph GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
         * @param epv GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: UINT16_MAX
         * @param vel GPS ground speed (m/s * 100). If unknown, set to: UINT16_MAX
         * @param cog Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
         * @param satellites_visible Number of satellites visible. If unknown, set to 255
         * @return length of the message in bytes (excluding serial stream start sign)
         (uint8_t system_id, 
          uint8_t component_id, 
          uint8_t chan,
          mavlink_message_t* msg,
          uint64_t time_usec,
          uint8_t fix_type,
          int32_t lat,
          int32_t lon,
          int32_t alt,
          uint16_t eph,
          uint16_t epv,
          uint16_t vel,
          uint16_t cog,
          uint8_t satellites_visible)
         */
        // n = mavlink_msg_gps_raw_int_pack_chan(1, 10, MAVLINK_COMM_1, &m_msg_send, 
        //                                       u_msec, 3, 
        //                                       int32_t(e_state.lat/PI*180*1e7), 
        //                                       int32_t(e_state.lon/PI*180*1e7), 
        //                                       int32_t(e_state.height*1e3), 
        //                                       0, 0, 
        //                                       int32_t(smooth_velocity*100), int32_t(smooth_course*100), 
        //                                       10);
        // n = mavlink_msg_to_send_buffer(m_buf_send, &m_msg_send);
        // onDataTransmission(m_buf_send, n);
        // debug("GPS_Raw_Data Send\n\r");
        // -----------------------------------------------------------------------------------------------------------------------------------------------
        /**
         * @brief Pack a hil_gps message on a channel
         * @param system_id ID of this system
         * @param component_id ID of this component (e.g. 200 for IMU)
         * @param chan The MAVLink channel this message will be sent over
         * @param msg The MAVLink message to compress the data into
         * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
         * @param fix_type 0-1: no fix, 2: 2D fix, 3: 3D fix. Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.
         * @param lat Latitude (WGS84), in degrees * 1E7
         * @param lon Longitude (WGS84), in degrees * 1E7
         * @param alt Altitude (AMSL, not WGS84), in meters * 1000 (positive for up)
         * @param eph GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: 65535
         * @param epv GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: 65535
         * @param vel GPS ground speed (m/s * 100). If unknown, set to: 65535
         * @param vn GPS velocity in cm/s in NORTH direction in earth-fixed NED frame
         * @param ve GPS velocity in cm/s in EAST direction in earth-fixed NED frame
         * @param vd GPS velocity in cm/s in DOWN direction in earth-fixed NED frame
         * @param cog Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: 65535
         * @param satellites_visible Number of satellites visible. If unknown, set to 255
         * @return length of the message in bytes (excluding serial stream start sign)
         */
          n = mavlink_msg_hil_gps_pack_chan(1, 10, MAVLINK_COMM_1, &m_msg_send,
                                            u_msec, 3,
                                            int32_t(e_state.lat/PI*180*1e7),
                                            int32_t(e_state.lon/PI*180*1e7),
                                            int32_t(-e_state.height*1e3),
                                            0, 0,
                                            int32_t(smooth_velocity*100),
                                            int16_t(smooth_velocity_x*100),
                                            int16_t(smooth_velocity_y*100),
                                            int16_t(smooth_velocity_z*100),
                                            uint16_t(smooth_course),
                                            10);
          n = mavlink_msg_to_send_buffer(m_buf_send, &m_msg_send);
          onDataTransmission(m_buf_send, n);

      }

      // Retrieve Mavlink data from vehicle
      void getMAVlinkData(void)
      {
        if (m_uart)
        {
            // spew("UART is correct!\n\r");
            onDataReception(m_buf, sizeof(m_buf), 0.01);
        }
        else
        {
            // onDataTransmission();
            onResourceAcquisition();
        }
      }


      void
      handleAttitudePacket(const mavlink_message_t* msg)
      {
        mavlink_attitude_t att;

        mavlink_msg_attitude_decode(msg, &att);
        // debug("Roll: %f, Pitch: %f, Yaw: %f \n\r", att.roll, att.pitch, att.yaw);

      }


      void
      handleRawGPSPacket(const mavlink_message_t* msg)
      {
        mavlink_gps_raw_int_t gps_raw;

        mavlink_msg_gps_raw_int_decode(msg, &gps_raw);

        if (m_args.Print_Converted_WGS84_GPS)
        {
          debug("RawLat: %d, RawLon: %d, RawAlt: %d \n\r", gps_raw.lat, gps_raw.lon, gps_raw.alt);
        }
        
      }

    };
  }
}

DUNE_TASK
