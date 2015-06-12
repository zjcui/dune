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
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Zhengjie_Cui                                                     *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Standard C++/C includes
#include <cstdio>
#include <cstdlib>
#include <cstring>

// MYSQL includes
#include <mysql_connection.h>
#include <driver.h>
#include <resultset.h>
#include <statement.h>

namespace Sensors
{
  namespace Vicon
  {
    using DUNE_NAMESPACES;

    struct Arguments
    {
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
    };

    struct Task: public DUNE::Tasks::Periodic
    {
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.

      IMC::EstimatedState e_state;

      Arguments m_args;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Periodic(name, ctx)
      {
        // Define configuration parameters
        param("Database Address", m_args.db_address)
        .defaultValue("127.0.0.1")
        .description("Database Address");

        param("Database Password", m_args.db_password)
        .defaultValue("password")
        .description("Database Password");

        param("Database Name", m_args.db_name)
        .defaultValue("test_db")
        .description("Database Name");

        param("Database User Name", m_args.db_user)
        .defaultValue("root")
        .description("Database User Name");

        param("Get Data Command", m_args.db_get_data_command)
        .defaultValue("")
        .description("MYSQL Command to get data");

        param("Frequency", m_args.db_freq)
        .defaultValue("1.0")
        .description("Database Query Frequecy");

        param("Latitude", e_state.lat)
        .defaultValue("42.2918731")
        .description("EstimatedState Latitude");

        param("Longitude", e_state.lon)
        .defaultValue("-83.7116587")
        .description("EstimatedState Longitude");

        param("Height", e_state.height)
        .defaultValue("17")
        .description("EstimatedState Height");


        m_args.db_address = "127.0.0.1";
        m_args.db_password = "password";
        m_args.db_user = "root";
        m_args.db_name = "test_db";

        // Initialization:  Connecting to the database
        inf("Connecting to MYSQL Database\n");
        m_args.driver = get_driver_instance();
        m_args.con = m_args.driver->connect(m_args.db_address, m_args.db_user, m_args.db_password);
        inf("MYSQL Database Connected!\n");

        /* Connect to the MySQL test database */
        m_args.con->setSchema(m_args.db_name); 

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
        // inf("%s \n", m_args.db_address.c_str());
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
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
      }

      //! Main loop.
      void
      task(void)
      {
        setFrequency(m_args.db_freq);

        // Show botpose data
        m_args.stmt = m_args.con->createStatement();
        m_args.res = m_args.stmt->executeQuery(m_args.db_get_data_command);
        while (m_args.res->next()) 
        {
          e_state.x = atof(m_args.res->getString(2)->c_str());
          e_state.y = atof(m_args.res->getString(3)->c_str());
          e_state.z = atof(m_args.res->getString(4)->c_str());
          e_state.phi = atof(m_args.res->getString(5)->c_str());
          e_state.theta = atof(m_args.res->getString(6)->c_str());
          e_state.psi = atof(m_args.res->getString(7)->c_str());
          inf("id: %d x:%f y:%f z:%f roll:%f pitch:%f yaw:%f \n", 
              m_args.res->getInt(1),
              e_state.x,
              e_state.y,
              e_state.z,
              e_state.phi,
              e_state.theta,
              e_state.psi);

          // inf("Current Freq: %f \n", getFrequency());
        }
        dispatch(e_state);
        delete m_args.res;
        delete m_args.stmt;
        
      }
    };
  }
}

DUNE_TASK
