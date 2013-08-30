//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Pedro Calado                                                     *
//***************************************************************************
// $Id:: user_signature.cpp 7411 2013-07-05 23:39:41Z pdcalado            $:*
//***************************************************************************

// ISO C++ 98 headers.
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

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
}

void
getFuelGauge(struct params_factory* pf, Parsers::Config* config, const std::string sec)
{
  std::vector<uint8_t> data;

  config->get(sec, "Fuel Gauge EEPROM", "", data);

  if (data.size() != sizeof(pf->fuel_gauge_eep))
    throw std::runtime_error("Wrong size for fuel gauge eeprom data");

  memcpy(&pf->fuel_gauge_eep[0], &data[0], sizeof(pf->fuel_gauge_eep));
}

void
getParams(struct params_factory* pf, Parsers::Config* config, const std::string sec)
{
  uint8_t version;
  config->get(sec, "Version", "0", version);
  pf->version = version;

  uint16_t serial;
  config->get(sec, "Serial", "0", serial);
  pf->serial = serial;

  uint32_t flash_size;
  config->get(sec, "Flash Size", "0", flash_size);
  pf->flash_size = flash_size;

  uint16_t emergency;
  config->get(sec, "Emergency Threshold (mV)", "0", emergency);
  pf->emergency_mv = emergency;

  uint16_t shutdown;
  config->get(sec, "Shutdown Threshold (mV)", "0", shutdown);
  pf->shutdown_mv = shutdown;

  getFuelGauge(pf, config, sec);
}

void
dump_binary(std::ostream& os, struct params_factory* pf)
{
  uint8_t* data = (uint8_t*)pf;

  for (unsigned i = 0; i < sizeof(struct params_factory); ++i)
    os << data[i];
}

int
main(int argc, char* argv[])
{
  if ((argc != 3) && (argc != 4))
  {
    std::cerr << "Usage ./" << argv[0]
              << " [path to .ini file] [path to .bin file] "
              << "[optional: serial number]"
              << std::endl;

    return -1;
  }

  std::ofstream ofs(argv[2], std::ios::binary);

  Parsers::Config config(argv[1]);

  struct params_factory params;

  getParams(&params, &config, "Factory");

  if (argc == 4)
  {
    uint8_t serial;
    if (!castLexical(std::string(argv[3]), serial))
    {
      std::cerr << "Failed to cast serial number" << std::endl;
      return -1;
    }

    std::cerr << "serial is " << (unsigned)serial << std::endl;
    params.serial = serial;
  }

  CRC8 csum(0x07);
  params.crc = csum.putArray((uint8_t*)&params,
                             sizeof(struct params_factory) - sizeof(params.crc));

  printFactoryParams(&params);
  
  dump_binary(ofs, &params);

  for (unsigned i = 0; i < 256 - sizeof(struct params_factory); i++)
    ofs << (uint8_t)0xff;

  ofs.close();

  IntelHEX ihex(argv[2], 256);

  ihex.dump(std::cerr);


  return 0;
}
