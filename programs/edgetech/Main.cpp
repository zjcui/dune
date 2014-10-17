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
// Author: Ricardo Martins                                                  *
//***************************************************************************

#include <DUNE/DUNE.hpp>
#include <Sensors/Edgetech2205/Constants.hpp>
#include <Sensors/Edgetech2205/Parser.hpp>

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QApplication>
#include <QPainter>

using DUNE_NAMESPACES;
using namespace Sensors;

size_t height  = 0;

double P1 = 40.0;
double P2 = 20.0;
double P3 = 1.0;
double SCALE = 100.0;
//! Tolerance for first echo detection.
double FIRST_ECHO_TOLERANCE = 0.01;

struct rgb
{
  uint8_t r;
  uint8_t g;
  uint8_t b;
};

QVector<QRgb> color_table;
std::vector<uint8_t> g_quantized;
QGraphicsScene* g_scene;

bool last_pos = false;
double last_latitude = 0;
double last_longitude = 0;
double last_delta = 0;
int last_shot = 0;
double delta_max = 0;
double repeat_avg = 0;
double repeat_max = 0;

void
loadColorMap(void)
{
  FILE* fd = fopen("/home/rasm/bronze.map", "r");
  if (fd == NULL)
    exit(1);

  for (size_t i = 0; i < 256; ++i)
  {
    unsigned r, g, b;
    fscanf(fd, "%u %u %u\n", &r, &g, &b);
    QColor rgb(r, g, b);
    color_table.push_back(rgb.rgb());
  }

  fclose(fd);
}

void
processShot(const Edgetech2205::Packet* packet)
{
  uint16_t u16 = 0;
  int16_t s16 = 0;
  uint32_t u32 = 0;
  int32_t s32 = 0;

  // Ping number.
  packet->get(u32, Edgetech2205::SDATA_IDX_PING_NUMBER);
  uint32_t ping_number = u32;

  // Altitude.
  packet->get(s32, Edgetech2205::SDATA_IDX_ALTITUDE);
  double altitude = s32 / 1000.0;

  // Longitude.
  packet->get(s32, Edgetech2205::SDATA_IDX_LONGITUDE);
  double longitude = s32 / 34377467.707849;

  // Latitude.
  packet->get(s32, Edgetech2205::SDATA_IDX_LATITUDE);
  double latitude = s32 / 34377467.707849;

  // Heading.
  packet->get(u16, Edgetech2205::SDATA_IDX_HEADING);
  double heading = (u16 / 100.0) - 360.0;

  // Data Samples.
  size_t data_samples = 0;
  packet->get(u16, Edgetech2205::SDATA_IDX_DATA_SAMPLES);
  data_samples = u16;
  packet->get(u16, Edgetech2205::SDATA_IDX_MSB);
  u16 = (u16 >> 8) & 0x0f;
  data_samples |= u16 << 16;
  g_quantized.resize(data_samples);

  // Sampling interval.
  double sampling_interval = 0;
  packet->get(u32, Edgetech2205::SDATA_IDX_SAMPLING_INTERVAL);
  sampling_interval = u32 / 1e9;

  // Range.
  double range = (sampling_interval * data_samples * 1500) / 2.0;

  // Weighting factor.
  double weighting_factor = 0;
  packet->get(s16, Edgetech2205::SDATA_IDX_WEIGHT_FACTOR);
  weighting_factor = std::pow(2, -s16);

  // Estimated pixel of the first echo.
  size_t first_echo = 0;
  if (altitude > 0)
  {
    first_echo = (altitude * data_samples) / range;
    first_echo *= 1 - FIRST_ECHO_TOLERANCE;
  }

  // Pixels per meter.
  double pixels_per_meter = data_samples / range;

  if (last_shot != ping_number)
  {
    double delta = 0;
    if (last_pos)
    {
      delta = Coordinates::WGS84::distance(last_latitude, last_longitude, 0.0, latitude, longitude, 0.0);
      if (delta > delta_max)
        delta_max = delta;

      if (delta == 0)
        delta = last_delta;
    }

    last_pos = true;
    last_shot = ping_number;
    last_latitude = latitude;
    last_longitude = longitude;
    last_delta = delta;
  }

  ssize_t top = 1;
  ssize_t factor = -1;
  float offset = data_samples + first_echo;
  size_t left = first_echo;
  size_t right = data_samples;

  if (packet->getChannel() == Edgetech2205::CHAN_PORT)
  {
    top = data_samples;
    factor = 1;
    offset = 0;
    left = 0;
    right = data_samples - first_echo;
  }

  for (size_t i = 0, j = 0; i < data_samples * 2; i += 2, ++j)
  {
    packet->get(s16, Edgetech2205::SDATA_IDX_TRACE_DATA + i);
    double sample = s16 * weighting_factor;
    double r = (range / data_samples) * j;
    if (r < 1.0)
      r = 1.0;

    double tvg = P1 * std::log(r) + P2 * r + P3;
    sample *= tvg;

    double dc = (sample / SCALE);
    g_quantized[top - (factor * j) - 1] = dc < 255 ? dc : 255;
  }

  QImage rgb(&g_quantized[left], right - left, 1, QImage::Format_Indexed8);
  rgb.setColorTable(color_table);
  QPixmap pixmap = QPixmap::fromImage(rgb);

  size_t repeat = last_delta * pixels_per_meter;
  if (repeat > repeat_max)
    repeat_max = repeat;

  for (size_t l = 0; l < repeat; ++l)
  {
    QGraphicsPixmapItem* imageItem = g_scene->addPixmap(pixmap);
    imageItem->setPos(QPointF(offset, height + l));
  }

  if (packet->getChannel() == Edgetech2205::CHAN_STARBOARD)
    height += repeat;
}

void
handlePacket(const Edgetech2205::Packet* packet)
{
  if (packet->getMessageType() != Edgetech2205::MSG_ID_SONAR_DATA)
    return;

  if (packet->getSubsystemNumber() != Edgetech2205::SUBSYS_SSH)
    return;

  processShot(packet);
}

int
main(int argc, char** argv)
{
  if (argc != 2)
  {
    std::cerr << "Usage: " << argv[0] << " Data.jsf" << std::endl;
    return 1;
  }

  QApplication a(argc, argv);

  g_scene = new QGraphicsScene();

  loadColorMap();

  uint8_t bfr[1024];
  Edgetech2205::Parser parser;

  size_t tile_number = 0;


  std::ifstream ifs(argv[1]);
  while (!ifs.eof())
  {
    ifs.read((char*)bfr, sizeof(bfr));
    for (size_t i = 0; i < ifs.gcount(); ++i)
    {
      if (parser.parse(bfr[i]))
      {
        handlePacket(parser.getPacket());
      }
    }

    if (height > 10000)
    {
      std::cerr << "max: " << delta_max << ": " << repeat_max << std::endl;
      height = 0;
      delta_max = 0;
      repeat_max = 0;

      g_scene->setSceneRect(g_scene->itemsBoundingRect());
      QSize size = g_scene->sceneRect().size().toSize();

      QImage image(size, QImage::Format_ARGB32);
      image.fill(Qt::transparent);
      QPainter painter(&image);
      g_scene->render(&painter);

      QImage scaled = image.scaledToWidth(1680, Qt::SmoothTransformation);
      scaled.save(String::str("image-%03d.png", tile_number++).c_str());

      delete g_scene;
      g_scene = new QGraphicsScene();
    }
  }

#if 0
  g_scene->setSceneRect(g_scene->itemsBoundingRect());
  QSize size = g_scene->sceneRect().size().toSize();

  QImage image(size, QImage::Format_ARGB32);
  image.fill(Qt::transparent);
  QPainter painter(&image);
  g_scene->render(&painter);

  QImage scaled = image.scaledToWidth(1680, Qt::SmoothTransformation);

  //  QImage scaled = image.scaled(image.width() / scale, image.height() / scale, Qt::KeepAspectRatio, Qt::SmoothTransformation);
  //scaled.save("image-scaled.png");

  scaled.save("image.png");
#endif

  return 0;
}
