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
// Author: Ricardo Martins                                                  *
//***************************************************************************

// Qt headers.
#include <QDebug>

// Local headers.
#include "Parameters.hpp"
#include "ui_Parameters.hpp"

Parameters::Parameters(QWidget* root):
  QGroupBox(root),
  m_ui(new Ui::Parameters)
{
  m_ui->setupUi(this);
}

Parameters::~Parameters(void)
{
  delete m_ui;
}

void
Parameters::refresh(void)
{
  m_ui->serial->setValue(fac.serial);
  m_ui->prod_date->setDate(QDate(fac.prod_year + 2000, fac.prod_month, fac.prod_day));
  m_ui->pulse_width_min->setValue(convertTicksToUsec(fac.pulse_width_min));
  m_ui->pulse_width_max->setValue(convertTicksToUsec(fac.pulse_width_max));
  m_ui->exc_max->setValue(fac.exc_max);
  m_ui->exc_eff->setValue(fac.exc_eff);
  m_ui->amp_fac->setValue(fac.amp_fac / 1000.0);
  m_ui->amp_off->setValue(fac.amp_off / 1000.0);
}

void
Parameters::commit(void)
{
  fac.serial = m_ui->serial->value();
  fac.prod_year = m_ui->prod_date->date().year() - 2000;
  fac.prod_month = m_ui->prod_date->date().month();
  fac.prod_day = m_ui->prod_date->date().day();
  fac.pulse_width_min = convertUsecToTicks(m_ui->pulse_width_min->value());
  fac.pulse_width_max = convertUsecToTicks(m_ui->pulse_width_max->value());
  fac.exc_max = m_ui->exc_max->value();
  fac.exc_eff = m_ui->exc_eff->value();
  fac.amp_fac = m_ui->amp_fac->value() * 1000;
  fac.amp_off = m_ui->amp_off->value() * 1000;
}

QVector<quint8>
Parameters::pack(void) const
{
  QVector<quint8> bfr;

  // Serial Number.
  bfr.push_back(m_ui->serial->value());

  // Date.
  QDate date = m_ui->prod_date->date();
  bfr.push_back(date.year() - 2000);
  bfr.push_back(date.month());
  bfr.push_back(date.day());

  // Pulse width minimum.
  quint16 pwidth_min = convertUsecToTicks(m_ui->pulse_width_min->value());
  bfr.push_back(pwidth_min & 0xff);
  bfr.push_back(pwidth_min >> 8);

  // Pulse width maximum.
  quint16 pwidth_max = convertUsecToTicks(m_ui->pulse_width_max->value());
  bfr.push_back(pwidth_max & 0xff);
  bfr.push_back(pwidth_max >> 8);

  // Maximum excursion.
  bfr.push_back(m_ui->exc_max->value());

  // Effective excursion.
  bfr.push_back(m_ui->exc_eff->value());

  // Current Conversion - Multiplication Factor (x1000).
  quint16 amp_fac = m_ui->amp_fac->value() * 1000;
  bfr.push_back(amp_fac & 0xff);
  bfr.push_back(amp_fac >> 8);

  // Current Conversion - Offset.
  quint16 amp_off = m_ui->amp_off->value() * 1000;
  bfr.push_back(amp_off & 0xff);
  bfr.push_back(amp_off >> 8);

  return bfr;
}

void
Parameters::unpack(const quint8* bfr, int bfr_size)
{
  m_ui->serial->setValue(bfr[0]);
  m_ui->prod_date->setDate(QDate(bfr[1] + 2000, bfr[2], bfr[3]));

  unsigned tmp = bfr[5] << 8 | bfr[4];

  m_ui->pulse_width_min->setValue(convertTicksToUsec(tmp));
  tmp = bfr[7] << 8 | bfr[6];
  m_ui->pulse_width_max->setValue(convertTicksToUsec(tmp));

  m_ui->exc_max->setValue(bfr[8]);
  m_ui->exc_eff->setValue(bfr[9]);
  m_ui->amp_fac->setValue((bfr[11] << 8 | bfr[10]) / 1000.0);
  m_ui->amp_off->setValue((bfr[13] << 8 | bfr[12]) / 1000.0);
}

void
Parameters::unpackConstant(const quint8* bfr, int bfr_size)
{
  m_pwm_frq = (bfr[1] << 8) | bfr[0];
  m_pwm_per = (bfr[3] << 8) | bfr[2];
  m_pulse_width_res = bfr[6];

  m_ui->pwm_frq->setValue(m_pwm_frq);
}

void
Parameters::setVersion(const QString& version)
{
  m_ui->firmware_version->setText(version);
}

void
Parameters::setFuseValidity(unsigned fuse_validity)
{
  if (fuse_validity == 0)
    m_ui->fuses->setPixmap(QPixmap(":/icons/ok.png"));
  else
    m_ui->fuses->setPixmap(QPixmap(":/icons/error.png"));
}

double
Parameters::convertTicksToUsec(unsigned ticks) const
{
  return ((ticks / (m_pwm_frq * m_pwm_per))) * 1000000;
}

unsigned
Parameters::convertUsecToTicks(double time_usec) const
{
  return (time_usec * m_pwm_per * m_pwm_frq) / 1000000;
}

unsigned
Parameters::getPulseWidthMinimum(void) const
{
  return m_ui->pulse_width_min->value();
}

unsigned
Parameters::getPulseWidthMaximum(void) const
{
  return m_ui->pulse_width_max->value();
}

unsigned
Parameters::getPulseWidthRange(void) const
{
  return getPulseWidthMaximum() - getPulseWidthMinimum();
}
