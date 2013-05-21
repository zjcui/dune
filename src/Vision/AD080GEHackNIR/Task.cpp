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
// Author: Renato Caldas                                                    *
//***************************************************************************

// ISO C++ 98 headers.
#include <queue>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "GVCP.hpp"
#include "GVSP.hpp"

using DUNE_NAMESPACES;

namespace Vision
{
  //! This is a hacked around device driver for the JAI AD-080GE camera.
  //! It is based on the driver for the Imaging Source DFK 51BG02.H
  //! Camera by Ricardo Martins
  //!
  //! @author Renato Caldas

  namespace AD080GEHackNIR
  {
    //! %Task arguments.
    struct Arguments
    {
      //! Camera IP address.
      Address raddr;
      //! Local IP address.
      Address laddr;
      //! Stream port.
      unsigned port;
      //! Frames Per Second.
      unsigned fps;
      //! JPEG quality.
      unsigned jpeg_quality;
      //! Number of frame buffers.
      unsigned buffer_count;
      //! Store as raw
      bool store_raw;
    };

    //! Device driver task.
    struct Task: public DUNE::Tasks::Task
    {
      //! %Frame width.
      static const unsigned c_width = 1024;
      //! %Frame height.
      static const unsigned c_height = 768;
      //! Packets per frame.
      static const unsigned c_pkts_per_frame = 538;
      //! Configuration parameters.
      Arguments m_args;
      //! %GVCP.
      GVCP* m_gvcp;
      //! %GVSP.
      GVSP* m_gvsp;
      //! MONO8 buffer.
      uint8_t* m_mono8_bfr;
      //! Keep-alive counter.
      Counter<double> m_kalive;
      //! %Destination log folder.
      Path m_log_dir;
      //! Array of frames.
      std::queue<Frame*> m_frames;
      //! PGM header.
      std::string m_pgm_header;
      //! Compressor.
      JPEGCompressor m_jpeg;
      // Exposure time.
      double m_exposure;
      //! True if task is activating.
      bool m_activating;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_gvcp(NULL),
        m_gvsp(NULL),
        m_kalive(0.5),
        m_log_dir(ctx.dir_log),
        m_activating(false)
      {
        // Retrieve configuration values.
        paramActive(Tasks::Parameter::SCOPE_MANEUVER,
                    Tasks::Parameter::VISIBILITY_USER);

        param("Camera IPv4 Address", m_args.raddr)
        .defaultValue("192.168.106.86")
        .description("IPv4 address of the camera");

        param("Local IPv4 Address", m_args.laddr)
        .defaultValue("192.168.106.87")
        .description("Local IPv4 address");

        param("Frames Per Second", m_args.fps)
        .defaultValue("3")
        .description("Frames per second");

        param("Stream Port", m_args.port)
        .defaultValue("61200")
        .description("Local UDP port used to receive the video stream");

        param("Number of Buffers", m_args.buffer_count)
        .defaultValue("25")
        .description("Number of buffers");

        param("JPEG Quality", m_args.jpeg_quality)
        .defaultValue("80")
        .units(Units::Percentage)
        .minimumValue("0")
        .maximumValue("100")
        .description("JPEG image quality");

        param("Store Raw", m_args.store_raw)
        .defaultValue("false")
        .description("Store raw image data in PGM format");

        m_mono8_bfr = new uint8_t[c_width * c_height];

        // Initialize PGM header.
        m_pgm_header = String::str("P5 %u %u 255\n", c_width, c_height);

        bind<IMC::LoggingControl>(this);
      }

      //! Destructor.
      ~Task(void)
      {
        delete [] m_mono8_bfr;
      }

      //! Update internal parameters.
      void
      onUpdateParameters(void)
      {
      }

      //! Acquire resources and buffers.
      void
      onResourceAcquisition(void)
      {
        // Initialize JPEG compressor.
        m_jpeg.setInputDimensions(c_width, c_height);
        m_jpeg.setInputColorSpace(JPEGCompressor::CS_GRAYSCALE);
        m_jpeg.setOutputColorSpace(JPEGCompressor::CS_GRAYSCALE);

        m_gvcp = new GVCP(m_args.raddr);
        m_gvsp = new GVSP(m_args.port);
        m_gvsp->start();

        for (unsigned i = 0; i < m_args.buffer_count; ++i)
        {
          Frame* frame = new Frame(c_width * c_height * 3);
          m_gvsp->enqueueClean(frame);
          m_frames.push(frame);
        }
      }

      //! Release allocated resources.
      void
      onResourceRelease(void)
      {
        Memory::clear(m_gvcp);

        if (m_gvsp != NULL)
        {
          m_gvsp->stopAndJoin();
          delete m_gvsp;
          m_gvsp = NULL;
        }

        while (!m_frames.empty())
        {
          Frame* frame = m_frames.front();
          m_frames.pop();
          delete frame;
        }
      }

      //! Initialize resources and start capturing frames.
      void
      onResourceInitialization(void)
      {
        // Let the vis driver do its thing...
        Time::Delay::waitMsec(1000);

        debug("setting privileges");
        m_gvcp->setPrivilege(GVCP::PRIV_BV_CONTROL | GVCP::PRIV_BV_EXCLUSIVE);

        debug("setting pixel format");
        m_gvcp->setPixelFormat(GVCP::PIX_MONO8);

#if 0
        debug("enabling test pattern");
        m_gvcp->writeRegister(0xA13C, 5);
#else
        debug("disabling test pattern");
        m_gvcp->writeRegister(0xA13C, 0);
#if 0
        debug("setting exposure mode = eps");
        m_gvcp->writeRegister(0xA040, 1);

        debug("setting sync mode = sync");
        m_gvcp->writeRegister(0xA098, 0);
#endif
        debug("setting shutter mode = autoexposure");
        m_gvcp->writeRegister(0xA000, 3);

        debug("setting gain = auto");
        m_gvcp->writeRegister(0xA0B0, 1);

#endif

#if 0
        debug("setting packet size");
        m_gvcp->writeRegister(0x0D04, (1 << 30 | 1500));
#endif
        debug("setting destination stream address to '%s'", m_args.laddr.c_str());
        m_gvcp->setStreamAddress(m_args.laddr);

        debug("setting stream port to '%u'", m_args.port);
        m_gvcp->setStreamPort(m_args.port);

#if 0
        debug("setting frames per second to '%u'", m_args.fps);
        m_gvcp->setFPS(m_args.fps);
#endif

        debug("starting streaming");
        m_gvcp->startStreaming();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
        debug("streaming!");
      }

      void
      consume(const IMC::LoggingControl* msg)
      {
        if (!m_activating && (msg->getDestination() != getSystemId()))
          return;

        if (msg->op == IMC::LoggingControl::COP_CURRENT_NAME)
        {
          m_log_dir = m_ctx.dir_log / msg->name / "Photos";
          activate();
        }
      }

      void
      onRequestActivation(void)
      {
        m_activating = true;
        IMC::LoggingControl log_ctl;
        log_ctl.op = IMC::LoggingControl::COP_REQUEST_CURRENT_NAME;
        dispatch(log_ctl);
      }

      void
      onActivation(void)
      {
        m_activating = false;
        m_log_dir.create();
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      onDeactivation(void)
      {
        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_IDLE);
      }

      void
      onMain(void)
      {
        Frame* frame = NULL;

        while (!stopping())
        {
          if (m_kalive.overflow())
          {
            try
            {
              m_gvcp->keepAlive();
            }
            catch (...)
            {
              throw RestartNeeded(DTR("keep alive failed"), 4);
            }

            m_kalive.reset();
          }

          consumeMessages();

          frame = m_gvsp->dequeueDirty();
          if (frame == NULL)
          {
            m_gvsp->waitDirty(0.5);
            continue;
          }

          unsigned pkt_count = frame->getPacketCount();
          if (pkt_count < c_pkts_per_frame)
            war("lost at least %d packets", c_pkts_per_frame - pkt_count);

          if (isActive() || 1)
          {
            inf("got frame nir");

            double timestamp = frame->getTimeStamp();
            Path file = m_log_dir / String::str("%0.4f-nir.jpg", timestamp);
            {
              m_jpeg.compress(frame->getData(), m_args.jpeg_quality);
              std::ofstream jpg(file.c_str(), std::ios::binary);
              jpg.write((char*)m_jpeg.imageData(), m_jpeg.imageSize());
            }

            if (m_args.store_raw)
            {
              file = m_log_dir / String::str("%0.4f.pgm", timestamp);
              std::ofstream pgm(file.c_str(), std::ios::binary);
              pgm.write(m_pgm_header.c_str(), m_pgm_header.size());
              pgm.write((char*)frame->getData(), c_width * c_height);
            }
          }

          m_gvsp->enqueueClean(frame);
        }
      }
    };
  }
}

DUNE_TASK
