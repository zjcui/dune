//***************************************************************************
// Copyright 2007-2014 Universidade do Porto - Faculdade de Engenharia      *
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
// Author: Pedro Calado                                                     *
//***************************************************************************
// Utility to replay the fuel filter using a log file.                      *
//***************************************************************************

// ISO C++ 98 headers.
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

// DUNE headers.
#include <DUNE/DUNE.hpp>
#include "assist/assist.hpp"

void
readArgs(char* file, Assist::Arguments& args)
{
  Config cfg(file);
  std::string sec = "Supervisors.AUV.Assist";

  cfg.get(sec, "Dislodging RPMs", "1600.0", args.dislodge_rpm);
  cfg.get(sec, "Depth Threshold", "0.2", args.depth_threshold);
  cfg.get(sec, "Minimum Ascent Rate", "0.2", args.min_ascent_rate);
  cfg.get(sec, "Ascent Rate Window Size", "5", args.ascent_wsize);
  cfg.get(sec, "Stuck Trigger Time", "30.0", args.trigger_time);
}

struct PseudoTimer
{
  //! Is timer valid
  bool valid;
  //! Time
  double time;

  PseudoTimer(void):
    valid(false)
  { }

  void
  update(double t)
  {
    time = t;

    if (!valid)
      valid = true;
  }

  bool
  isValid(void) const
  {
    return valid;
  }

  double
  getTime(void) const
  {
    return time;
  }
};

struct PeriodicRun
{
  //! Has run yet
  bool active;
  //! Last time it was run
  double last_time;
  //! Period
  double period;

  PeriodicRun(double p):
    active(false),
    last_time(0.0),
    period(p)
  { }

  bool
  doRun(double t)
  {
    if (!active)
    {
      active = true;
      last_time = t;
      return false;
    }

    if (t - last_time >= period)
    {
      last_time = t;
      return true;
    }

    return false;
  }
};

int
main(int32_t argc, char** argv)
{
  if (argc != 3)
  {
    std::cerr << "Usage: " << argv[0] << " <config ini file> <path_to_log.lsf[.gz]>"
              << std::endl;
    return 1;
  }

  Assist::Arguments m_args;

  readArgs(argv[1], m_args);

  PseudoTimer timer;
  PeriodicRun pr(1.0);

  Assist* m_assist = NULL;
  bool got_first = false;

  ByteBuffer buffer;

  std::ofstream lsf("NewFuel.lsf", std::ios::binary);

  std::istream* is = 0;
  DUNE::Compression::Methods method = DUNE::Compression::Factory::detect(argv[2]);
  if (method == DUNE::Compression::METHOD_UNKNOWN)
    is = new std::ifstream(argv[2], std::ios::binary);
  else
    is = new DUNE::Compression::FileInput(argv[2], method);

  if (!is)
  {
    std::cerr << "bad file" << std::endl;
    return 1;
  }

  is->seekg(0, is->end);
  unsigned file_length = is->tellg();
  is->seekg(0, is->beg);
  Time::Counter<float> prog_timer(5.0);

  DUNE::IMC::Message* msg = NULL;

  try
  {
    while ((msg = DUNE::IMC::Packet::deserialize(*is)) != 0)
    {
      bool log_it = false;

      timer.update(msg->getTimeStamp());

      if (!got_first)
      {
        got_first = true;

        m_assist = new Assist(&m_args, msg->getTimeStamp());
      }

      if (msg->getId() == DUNE_IMC_VEHICLEMEDIUM)
      {
        m_assist->onVehicleMedium(static_cast<IMC::VehicleMedium*>(msg));
        log_it = true;
      }
      else if (msg->getId() == DUNE_IMC_ESTIMATEDSTATE)
      {
        m_assist->onEstimatedState(static_cast<IMC::EstimatedState*>(msg));
        log_it = true;
      }
      else if (msg->getId() == DUNE_IMC_VEHICLESTATE)
      {
        m_assist->onVehicleState(static_cast<IMC::VehicleState*>(msg));
        log_it = true;
      }

      if (timer.isValid() && pr.doRun(timer.getTime()))
      {
        m_assist->onPeriodic();
      }

      if (log_it)
      {
        IMC::Packet::serialize(msg, buffer);
        lsf.write(buffer.getBufferSigned(), buffer.getSize());
      }

      if (prog_timer.overflow())
      {
        std::cerr << (float)is->tellg() / file_length * 100.0 << "%" << std::endl;
        prog_timer.reset();
      }

      delete msg;
    }
  }
  catch (std::runtime_error& e)
  {
    std::cerr << "ERROR: " << e.what() << std::endl;
  }

  delete is;

  Memory::clear(m_assist);

  return 0;
}
