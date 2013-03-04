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

#ifndef ACTUATORS_SCRTV4_CONTROL_PANEL_SERVO_HPP_INCLUDED_
#define ACTUATORS_SCRTV4_CONTROL_PANEL_SERVO_HPP_INCLUDED_

// Qt headers.
#include <QGroupBox>

// Forward declarations.
namespace Ui { class Servo; }
class CustomSlider;

class Servo: public QGroupBox
{
  Q_OBJECT

public:
  explicit Servo(unsigned number, QWidget* root = 0);
  ~Servo(void);

  void
  load(const quint8* data, unsigned data_size);

  void
  setExcursion(int min, int max);

  void
  setDemand(unsigned demand);

  void
  setPulseWidth(unsigned raw, double usec);

  void
  setPulseWidthMiddle(unsigned raw, double usec);

  void
  setPosition(int value);

  void
  setRawPosition(unsigned value);

  void
  setRawCurrent(unsigned value);

  void
  setCurrent(unsigned value);

  void
  setFeedbackMin(unsigned value);

  void
  setFeedbackMax(unsigned value);

  void
  setEffectivePulseWidthMinimum(unsigned value);

  void
  setEffectivePulseWidthMaximum(unsigned value);

signals:
  void
  changePosition(uint number, uint position);

  void
  changeState(uint number, bool state);

  void
  calibrate(quint8 number);

  void
  saveMiddle(quint8 number, quint16 value);

private slots:
  void
  sliderMoved(int value);

  void
  stateChanged(bool state);

  void
  calibrateClicked(void);

  void
  saveMiddleClicked(void);

private:
  Ui::Servo *ui;
  CustomSlider* m_slider;
  unsigned m_number;
  unsigned m_eff_pulse_width_min;
  unsigned m_eff_pulse_width_max;
};

#endif
