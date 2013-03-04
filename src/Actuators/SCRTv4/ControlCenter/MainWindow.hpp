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

#ifndef ACTUATORS_SCRTV4_CONTROL_PANEL_MAIN_WINDOW_HPP_INCLUDED_
#define ACTUATORS_SCRTV4_CONTROL_PANEL_MAIN_WINDOW_HPP_INCLUDED_

// ISO C++ 98 headers.
#include <vector>

// Qt headers.
#include <QMainWindow>

// DUNE headers.
#include <DUNE/Hardware/UCTK/InterfaceUART.hpp>

// Local headers.
#include "SerialInput.hpp"

namespace Ui {
  class MainWindow;
}

class QGridLayout;
class QLabel;
class Protocol;
class Command;
class Servo;
class QTimer;
class Parameters;

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget* root = 0);

  ~MainWindow(void);

private:
  Ui::MainWindow* ui;
  SerialInput* m_io;
  DUNE::Hardware::UCTK::InterfaceUART* m_uart;
  unsigned m_status_tx_count;
  unsigned m_status_rx_count;
  Protocol* m_ptl;
  std::vector<Servo*> m_servos;
  QTimer* m_stats_timer;
  unsigned m_cmd_per_sec;

  // Factory Parameters.
  Parameters* m_params;

  //! Watchdog.
  QTimer* m_wdog;
  QLabel* m_status_label;

  unsigned m_reconnect_count;

  void
  constructCalibrationBox(void);

  void
  updateStatusBar(void);

  void
  handleFrame(DUNE::Hardware::UCTK::Frame* frame);

  void
  handleCommand(Command* cmd);

  void
  sendCommand(quint8 cmd, const quint8* data, quint8 data_size);

  void
  enableInterface(void);

  void
  disableInterface(void);

  void
  initializeCommunications(void);

  void
  closeConnection(void);

private slots:
  void
  openConnection(void);

  void
  onSerialInput(void);

  void
  openHelpDialog(void);

  void
  updateCommandsPerSecond(void);

  void
  updateServoPosition(uint servo, uint position);

  void
  updateServoState(uint servo, bool state);

  void
  calibrateServo(quint8 servo);

  void
  saveMiddle(quint8 servo, quint16 value);

  void
  requestParameters(void);

  void
  onControlSelfTest(bool value);

  void
  saveParameters(void);

  void
  clearParameters(void);

  void
  reconnect(void);

signals:
  void
  closeProgress(void);

  // void
  // resetProgress(const QString& text);
};

#endif
