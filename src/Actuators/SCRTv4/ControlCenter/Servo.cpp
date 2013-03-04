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

// ISO C++ 98 headers.
#include <cstdlib>

// Qt headers.
#include <QSlider>
#include <QDebug>

// Local headers.
#include "CustomSlider.hpp"
#include "Servo.hpp"
#include "ui_Servo.hpp"

Servo::Servo(unsigned number, QWidget* root):
  QGroupBox(QString("Servo #%1").arg(number), root),
  ui(new Ui::Servo),
  m_number(number)
{
  ui->setupUi(this);

  m_slider = new CustomSlider(this);
  ui->sliderLayout->addWidget(m_slider);

  connect(this, SIGNAL(toggled(bool)), this, SLOT(stateChanged(bool)));
  connect(ui->calibrate, SIGNAL(clicked()), this, SLOT(calibrateClicked()));
  connect(ui->saveMiddle, SIGNAL(clicked()), this, SLOT(saveMiddleClicked()));
  connect(m_slider, SIGNAL(sliderMoved(int)), this, SLOT(sliderMoved(int)));
}

Servo::~Servo(void)
{
  delete ui;
}

void
Servo::setExcursion(int min, int max)
{
  int diff = std::abs(min) - std::abs(max);

  if (diff < 0)
    ui->min_exc->setStyleSheet("QSpinBox { background-color: red; }");
  else
    ui->min_exc->setStyleSheet("QSpinBox { background-color: white; }");

  if (diff > 0)
    ui->max_exc->setStyleSheet("QSpinBox { background-color: red; }");
  else
    ui->max_exc->setStyleSheet("QSpinBox { background-color: white; }");

  ui->min_exc->setValue(min);
  ui->max_exc->setValue(max);
}

void
Servo::setDemand(unsigned demand)
{
  m_slider->blockSignals(true);
  m_slider->setValue(demand);
  m_slider->blockSignals(false);
}

void
Servo::setPulseWidth(unsigned raw, double usec)
{
  ui->pulse_width_raw->setValue(raw);
  ui->pulse_width->setValue(usec);
}

void
Servo::setPulseWidthMiddle(unsigned raw, double usec)
{
  ui->pulse_width_mid_raw->setValue(raw);
  ui->pulse_width_mid->setValue(usec);
}

void
Servo::setPosition(int value)
{
  int value_signed = value + ui->min_exc->value();
  ui->position->setValue(value_signed);
}

void
Servo::setRawPosition(unsigned value)
{
  ui->position_raw->setValue(value);
}

void
Servo::setRawCurrent(unsigned value)
{
  ui->current_raw->setValue(value);
}

void
Servo::setCurrent(unsigned value)
{
  ui->current->setValue(value);
}

void
Servo::setFeedbackMin(unsigned value)
{
  ui->feedback_min->setValue(value);
}

void
Servo::setFeedbackMax(unsigned value)
{
  ui->feedback_max->setValue(value);
}

void
Servo::setEffectivePulseWidthMinimum(unsigned value)
{
  m_eff_pulse_width_min = value;
}

void
Servo::setEffectivePulseWidthMaximum(unsigned value)
{
  m_eff_pulse_width_max = value;
}

void
Servo::sliderMoved(int value)
{
  emit changePosition(m_number, (uint)value);
}

void
Servo::stateChanged(bool state)
{
  emit changeState(m_number, state);

  if (state)
    emit changePosition(m_number, (uint)m_slider->value());
}

void
Servo::calibrateClicked(void)
{
  emit calibrate(m_number);
}

void
Servo::saveMiddleClicked(void)
{
  emit saveMiddle((quint8)m_number, (quint16)ui->pulse_width_raw->value());
}
