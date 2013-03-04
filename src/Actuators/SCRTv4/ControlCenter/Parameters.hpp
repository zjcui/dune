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

#ifndef ACTUATORS_SCRTV4_CONTROL_PANEL_PARAMETERS_HPP_INCLUDED_
#define ACTUATORS_SCRTV4_CONTROL_PANEL_PARAMETERS_HPP_INCLUDED_

// Qt headers.
#include <QVector>
#include <QGroupBox>

// Local headers.
#include <Actuators/SCRTv4/Messages.hpp>

// Forward declarations.
namespace Ui { class Parameters; }

class Parameters: public QGroupBox
{
  Q_OBJECT

public:
  Actuators::SCRTv4::ParamsEff eff;
  Actuators::SCRTv4::ParamsCon con;
  Actuators::SCRTv4::ParamsFac fac;

  Parameters(QWidget* root = 0);

  ~Parameters(void);

  QVector<quint8>
  pack(void) const;

  void
  unpack(const quint8* bfr, int bfr_size);

  void
  unpackConstant(const quint8* bfr, int bfr_size);

  void
  setFuseValidity(unsigned fuse_validity);

  void
  setVersion(const QString& version);

  unsigned
  getPulseWidthMinimum(void) const;

  unsigned
  getPulseWidthMaximum(void) const;

  unsigned
  getPulseWidthRange(void) const;

  unsigned
  getPulseWidthResolution(void) const;

  double
  convertTicksToUsec(unsigned ticks) const;

  unsigned
  convertUsecToTicks(double usec) const;

private:
  Ui::Parameters* m_ui;
  //! PWM frequency (Hz).
  unsigned m_pwm_frq;
  //! PWM period (ticks).
  double m_pwm_per;
  //! Pulse width resolution.
  unsigned m_pulse_width_res;

  void
  commit(void);

signals:
  void
  saveParameters(void);

  void
  clearParameters(void);

private slots:
  void
  refresh(void);

  // void
  // updateParamsEff(void)
  // {

  // }

  // void
  // updateParamsEff(void)
  // {

  // }


  void
  clearClicked(void)
  {
    emit clearParameters();
  }

  void
  saveClicked(void)
  {
    emit saveParameters();
  }
};

#endif
