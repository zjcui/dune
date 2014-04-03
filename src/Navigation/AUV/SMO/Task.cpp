//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Tiago Rodrigues                                                  *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "Model.hpp"
#include "GainMatrices.hpp"
#include "Aux.hpp"

namespace Navigation
{
  namespace AUV
  {
    namespace SMO
    {
      using DUNE_NAMESPACES;


      struct Arguments
      {
        //Sliding Matrix Gains
        float k1[6];
        float k2[6];
        float alfa1[6];
        float alfa2[6];

        //Attenuator for lateral estimation with rpm measures only
        float rpm_lateral_attenuator;

        //Boundary layer ize
        double boundary_layer;

        //RPM Multiplicative Factor
        double rpm_multiplicative_factor;

        // Resolve Entity string
        std::string imu_entities;
        std::string ahrs_entities;
        std::string Identification_entities;
        std::string dvl_entities;
        std::string rpm_entities;
      };

      struct Task: public DUNE::Tasks::Periodic
      {
         /*GPS variables*/
         double gps_initial_point[3];
         double gps_fix[3];
         double gps_treshold;
         double flag_initial_point;
         double flag_valid_pos;
         double depth;
         double x;
         double y;
         double z;
         double range;
         double bearing;

         /*Orientation variables*/
         double euler_angles[3];
         double flag_initial_orientation;

         /*Velocities variables*/
         double velocities[6];
         double velocities_ant[6];

         /*Rotation Matrix*/
         Math::Matrix J;

        /*Filter Variabls*/
        Math::Matrix acc_filter;
        Math::Matrix vel_filter;
        double filter_delta;
        DUNE::Time::Delta delta_filter;


         /*Task management variables*/
         double task_management;

         /*Position Matrix*/
         Math::Matrix nu;

         Arguments m_args;


        Task(const std::string& name, Tasks::Context& ctx):
          Periodic(name, ctx)
        {

         /*GPS variables*/
         memset (gps_initial_point,0,sizeof(gps_initial_point));
         memset (gps_fix,0,sizeof(gps_fix));
         gps_treshold = 0;
         flag_initial_point = 0;
         flag_valid_pos = 0;
         depth = 0;
         x = 0;
         y = 0;
         z = 0;
         range = 0;
         bearing = 0;

         /*Orientation variables*/
         memset(euler_angles,0,sizeof(euler_angles));
         flag_initial_orientation = 0;

         /*Velocities variables*/
         memset(velocities,0,sizeof(velocities));
         memset(velocities_ant,0,sizeof(velocities));

         /*Rotation Matrix*/
         J.resizeAndFill(6,6,0.0);

         /*Task Management Variables*/
         task_management = 0;

         /*Position Matrix*/
         nu.resizeAndFill(6,1,0.0);

         /*Filter Variables*/
         acc_filter.resizeAndFill(6,1,0.0);
         vel_filter.resizeAndFill(6,1,0.0);
         filter_delta = 0;
         

         //Register Consumers
         bind<IMC::GpsFix>(this);
         bind<IMC::Depth>(this);
         bind<IMC::EulerAngles>(this);
         bind<IMC::GroundVelocity>(this);
         //bind<IMC::AngularVelocity>(this);
        }


        void
        consume(const IMC::GpsFix* msg)
        { err("gps");

          if (flag_initial_point == 0 && gps_treshold < 50)
            gps_treshold = msg->hacc + 1;

          if (flag_initial_point != 0)
            gps_treshold = 15;

          if (msg->validity & IMC::GpsFix::GFV_VALID_POS)
          {
            if (msg->hacc < gps_treshold)
            {
              gps_fix[0] = msg->lat;
              gps_fix[1] = msg->lon;
              gps_fix[2] = msg->height;
              flag_valid_pos = 1;
            }

            if (flag_initial_point == 0)
            {
              gps_initial_point[0] = msg->lat;
              gps_initial_point[1] = msg->lon;
              gps_initial_point[2] = msg->height;
              flag_initial_point = 1;
            }

            if (msg->hacc >= gps_treshold || !(msg->validity & IMC::GpsFix::GFV_VALID_POS))
              flag_valid_pos = 0;
          }
        }

        void
        consume(const IMC::Depth* msg)
        {err("depth");
          depth = msg->value;
        }

          void
          consume(const IMC::EulerAngles* msg)
          {err("euler_angles");
            euler_angles[0] = msg->phi;
            euler_angles[1] = msg->theta;
            euler_angles[2] = msg->psi;

            if (flag_initial_orientation == 0)
            {
              flag_initial_orientation = 1;
              nu(3,0) = msg->phi;
              nu(4,0) = msg->theta;
              nu(5,0) = msg->psi;
            }
          }


          void
          consume(const IMC::GroundVelocity* msg)
          {err("velocities");
            if (msg->validity & IMC::GroundVelocity::VAL_VEL_X)
            {
              velocities[0] = msg->x;
              velocities_ant[0] = velocities[0];
            }
            if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_X))
              velocities[0] = velocities_ant[0];

            if (msg->validity & IMC::GroundVelocity::VAL_VEL_Y)
            {
              velocities[1] = msg->y;
              velocities_ant[1] = velocities[1];
            }
            if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_Y))
              velocities[1] = velocities_ant[1];

            if (msg->validity & IMC::GroundVelocity::VAL_VEL_Z)
            {
              velocities[2] = msg->z;
              velocities_ant[2] = velocities[2];
            }
            if (!(msg->validity & IMC::GroundVelocity::VAL_VEL_Z))
              velocities[2] = velocities_ant[2];
          }


          /***********************Task MANAGEMENT**********************/
          void
          state_management(void)
          {
            if(flag_initial_point == 0)
            {
              setEntityState(IMC::EntityState::ESTA_BOOT, Status::CODE_WAIT_GPS_FIX);
              task_management = 0;
            }

            if(flag_initial_point == 1)
            {
              setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
              task_management = 1;
            }

            return;
          }

          /************************************************************/


        void
        task(void)
        {

            /***********************Entity State Management**********************/

            state_management();

            /********************************************************************/

            if(task_management == 1)
            {

            /*******************GPS Signal Acquisition**************************/
            if (flag_valid_pos == 1)
            {
            Coordinates::WGS84::getNEBearingAndRange(gps_initial_point[0], gps_initial_point[1], gps_fix[0], gps_fix[1], &bearing, &range);

            x = range * std::cos(bearing);
            y = range * std::sin(bearing);
            z = depth;

            /*inf("Position");
            std::cout<<x<<std::endl;
            std::cout<<y<<std::endl;
            std::cout<<z<<std::endl;
            inf("GPS");
            std::cout<<gps_initial_point[0]<<std::endl;
            std::cout<<gps_initial_point[1]<<std::endl;*/
            }
            /********************************************************************/


            /*********************Position from measured Velocities**************/

            J = Aux::compute_J(euler_angles);

            //std::cout<<J<<std::endl;

            //Filters velocities measures
            filter_delta = delta_filter.getDelta();
            if(filter_delta == -1)
            {
            filter_delta = 0.05;
            }
            acc_filter = Aux::compute_acc(velocities,vel_filter, filter_delta);
            vel_filter = vel_filter + acc_filter * filter_delta;      
             /*std::cout<<velocities[0]<<std::endl;
             std::cout<<vel_filter<<std::endl;*/

            /********************************************************************/




         }
        }
      };
    }
  }
}

DUNE_TASK
