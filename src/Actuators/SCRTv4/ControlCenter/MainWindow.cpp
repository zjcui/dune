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
#include <QLabel>
#include <QTimer>
#include <QVBoxLayout>
#include <QDialogButtonBox>

// Local headers.
#include "Servo.hpp"
#include "ConnectionDialog.hpp"
#include "Parameters.hpp"
#include "Protocol.hpp"
#include "HelpDialog.hpp"
#include "Commands.hpp"
#include "SerialInput.hpp"
#include "MainWindow.hpp"
#include "ui_MainWindow.hpp"

using DUNE_NAMESPACES;

MainWindow::MainWindow(QWidget* root):
  QMainWindow(root),
  ui(new Ui::MainWindow),
  m_io(NULL),
  m_reconnect_count(0)
{
  ui->setupUi(this);
  ui->toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

  // Factory parameters box.
  m_params = new Parameters(this);
  connect(m_params, SIGNAL(saveParameters()), this, SLOT(saveParameters()));
  connect(m_params, SIGNAL(clearParameters()), this, SLOT(clearParameters()));
  ui->centralWidget->layout()->addWidget(m_params);

  // Servo calibration box.
  QGroupBox* calibrationBox = new QGroupBox("Calibration");
  QVBoxLayout* calibrationLayout = new QVBoxLayout;
  calibrationBox->setLayout(calibrationLayout);

  QGridLayout* calibrationGrid = new QGridLayout;
  calibrationLayout->addLayout(calibrationGrid);
  for (unsigned i = 0; i < 4; ++i)
  {
    Servo* servo = new Servo(i);
    connect(servo, SIGNAL(changePosition(uint, uint)), this, SLOT(updateServoPosition(uint,uint)));
    connect(servo, SIGNAL(changeState(uint, bool)), this, SLOT(updateServoState(uint,bool)));
    connect(servo, SIGNAL(calibrate(quint8)), this, SLOT(calibrateServo(quint8)));
    connect(servo, SIGNAL(saveMiddle(quint8, quint16)), this, SLOT(saveMiddle(quint8, quint16)));
    calibrationGrid->addWidget(servo, i / 2, i % 2);
    m_servos.push_back(servo);
  }

  ui->centralWidget->layout()->addWidget(calibrationBox);

  m_ptl = new Protocol;

  m_stats_timer = new QTimer(this);
  connect(m_stats_timer, SIGNAL(timeout()), this, SLOT(updateCommandsPerSecond()));
  m_stats_timer->start(1000);

  // Add spacer before help action.
  QWidget* spacer = new QWidget();
  spacer->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
  ui->toolBar->insertWidget(ui->openHelp, spacer);

  m_wdog = new QTimer(this);
  connect(m_wdog, SIGNAL(timeout()), this, SLOT(reconnect()));

  m_status_label = new QLabel(this);
  ui->statusBar->insertPermanentWidget(0, m_status_label);

  disableInterface();
}

MainWindow::~MainWindow(void)
{
  disableInterface();

  delete ui;
  delete m_ptl;
}

void
MainWindow::enableInterface(void)
{
  m_cmd_per_sec = 0;
  ui->actionConnect->setText("Disconnect");
  ui->centralWidget->setEnabled(true);
  ui->controlSelfTest->setEnabled(true);
  m_reconnect_count = 0;
  m_status_label->setText("");
}

void
MainWindow::disableInterface(void)
{
  m_wdog->stop();

  m_status_rx_count = 0;
  m_status_tx_count = 0;

  ui->statusBar->showMessage(tr("Not Connected"));
  ui->centralWidget->setEnabled(false);
  ui->actionConnect->setText("Connect");
  ui->controlSelfTest->setChecked(false);

  m_ptl->clear();

  ui->controlSelfTest->setEnabled(false);
}

void
MainWindow::closeConnection(void)
{
  if (ui->actionConnect->text() == "Disconnect")
  {
    if (m_io != NULL)
    {
      delete m_io;
      m_io = NULL;
    }

    if (m_uart != NULL)
    {
      delete m_uart;
      m_uart = NULL;
    }

    disableInterface();
  }
}

void
MainWindow::openConnection(void)
{
  closeConnection();

  ConnectionDialog dialog(this);
  if (dialog.exec() == QDialog::Rejected)
    return;

  if (dialog.useTcp())
  {
    // QTcpSocket* sock = new QTcpSocket;
    // sock->connectToHost(dialog.getTcpAddress(), dialog.getTcpPort());
    // m_io = sock;
  }
  else
  {
    QString device = dialog.getDevice();

    m_uart = new DUNE::Hardware::UCTK::InterfaceUART(device.toStdString());
    SerialInput* port = new SerialInput(m_uart);

    // QextSerialPort* port = new QextSerialPort(device, QextSerialPort::EventDriven);
    // port->setBaudRate(BAUD115200);
    // port->setFlowControl(FLOW_OFF);
    // port->setParity(PAR_NONE);
    // port->setDataBits(DATA_8);
    // port->setStopBits(STOP_1);

    // if (!port->open(QIODevice::ReadWrite))
    //   return;

    m_io = port;
    m_io->start();
  }

  connect(m_io, SIGNAL(readyRead()), this, SLOT(onSerialInput()));
  initializeCommunications();
}

void
MainWindow::reconnect(void)
{
  ++m_reconnect_count;

  m_status_label->setText(QString("Retrying connection (%1) ...").arg(m_reconnect_count));
  initializeCommunications();
}

void
MainWindow::initializeCommunications(void)
{
  disableInterface();

  updateStatusBar();

  m_wdog->start(2000);

  requestParameters();
}

void
MainWindow::requestParameters(void)
{
  onControlSelfTest(false);

  sendCommand(0x00, 0, 0);
  sendCommand(CMD_CHECK_FUSES, 0, 0);
  sendCommand(CMD_PARAMS_CON, 0, 0);
  sendCommand(CMD_PARAMS_FAC, 0, 0);
  sendCommand(CMD_PARAMS_EFF, 0, 0);
  sendCommand(CMD_PARAMS_CAL_FBK, 0, 0);
  sendCommand(CMD_PARAMS_CAL_MID, 0, 0);

  quint8 state_rate = 10;
  sendCommand(CMD_STATE, &state_rate, 1);

  sendCommand(0xFE, 0, 0);
}

void
MainWindow::openHelpDialog(void)
{
  HelpDialog dialog(this);
  dialog.exec();
}

void
MainWindow::handleFrame(UCTK::Frame* frame)
{
  switch (frame->getId())
  {
    case CMD_PARAMS_CON:
      break;

    case CMD_PARAMS_FAC:
      break;

    case CMD_PARAMS_EFF:
      break;
  }
}

void
MainWindow::handleCommand(Command* cmd)
{
  unsigned char* ptr = cmd->command.data;

  switch (cmd->command.code)
  {
    case CMD_PARAMS_CON:
      m_params->unpackConstant(ptr, cmd->command.size);
      break;

    case CMD_PARAMS_FAC:
      m_params->unpack(ptr, cmd->command.size);
      break;

    case CMD_PARAMS_CAL_MID:
      {
        for (unsigned i = 0; i < 4; ++i)
        {
          quint16 pwidth_raw = (ptr[i * 2 + 1] << 8) | ptr[i * 2 + 0];
          double pwidth_usec = m_params->convertTicksToUsec(pwidth_raw);
          m_servos[i]->setPulseWidthMiddle(pwidth_raw, pwidth_usec);
        }
      }

      break;

    case CMD_PARAMS_EFF:
      {
        ptr += 2;
        for (unsigned i = 0; i < 4; ++i)
        {
          quint16 min = (ptr[i * 2 + 1] << 8) | ptr[i * 2 + 0];
          quint16 max = (ptr[i * 2 + 9] << 8) | ptr[i * 2 + 8];
          quint16 exc_min = (ptr[i * 2 + 17] << 8) | ptr[i * 2 + 16];
          quint16 exc_max = (ptr[i * 2 + 25] << 8) | ptr[i * 2 + 24];

          m_servos[i]->setEffectivePulseWidthMinimum(min);
          m_servos[i]->setEffectivePulseWidthMaximum(max);
          m_servos[i]->setExcursion(-exc_min, exc_max);
        }
      }

      break;

    case CMD_PARAMS_CAL_FBK:
      {
        for (unsigned i = 0; i < 4; ++i)
        {
          quint16 min = (ptr[i * 2 + 1] << 8) | ptr[i * 2 + 0];
          quint16 max = (ptr[i * 2 + 9] << 8) | ptr[i * 2 + 8];
          m_servos[i]->setFeedbackMin(min);
          m_servos[i]->setFeedbackMax(max);
        }
      }
      break;

    case CMD_CHECK_FUSES:
      {
        unsigned validity = ptr[0];
        m_params->setFuseValidity(validity);
      }
      break;

    case CMD_SELF_TEST:
      {
        if (ptr[0] == 0xff)
          ui->controlSelfTest->setChecked(false);
      }
      break;

    case CMD_PARAMS_CAL_FBK_START:
      {
        unsigned servo = ptr[0];
        m_servos[servo]->setEnabled(false);
        ui->statusBar->showMessage(tr("Calibrating servo %1...").arg(servo));
      }
      break;

    case CMD_PARAMS_CAL_FBK_END:
      {
        unsigned servo = ptr[0];
        m_servos[servo]->setEnabled(true);
      }
      break;

    case CMD_STATE:
      {
        m_wdog->start();
        for (unsigned i = 0; i < 4; ++i)
        {
          quint16 pwidth_raw = (ptr[3] << 8) | ptr[2];
          double pwidth_usec = m_params->convertTicksToUsec(pwidth_raw);

          m_servos[i]->setDemand(ptr[1] << 8 | ptr[0]);
          m_servos[i]->setPulseWidth(pwidth_raw, pwidth_usec);
          m_servos[i]->setPosition(ptr[5] << 8 | ptr[4]);
          m_servos[i]->setRawPosition(ptr[7] << 8 | ptr[6]);
          m_servos[i]->setRawCurrent(ptr[9] << 8 | ptr[8]);
          m_servos[i]->setCurrent(ptr[11] << 8 | ptr[10]);
          ptr += 12;
        }
      }
      break;

    case CMD_SERVO_SET:
      break;

    default:
      qDebug() << "UNKNOWN COMMAND: " << cmd->command.code;
      break;
  }
}

void
MainWindow::updateCommandsPerSecond(void)
{
  m_cmd_per_sec = 0;
}

void
MainWindow::onSerialInput(void)
{
  DUNE::Hardware::UCTK::Frame* frame = NULL;

  while (frame = m_uart->pop())
  {
    m_uart->pop();
    qDebug() << "WOOWOO";
    delete frame;
  }

  // QByteArray bytes;
  // int a = m_io->bytesAvailable();
  // bytes.resize(a);
  // m_io->read(bytes.data(), bytes.size());
  // m_status_rx_count += bytes.size();
  // updateStatusBar();

  // Command cmd;
  // for (int i = 0; i < bytes.size(); ++i)
  // {
  //   CommandType type = m_ptl->parse(cmd, bytes.at(i));
  //   if (type == CommandTypeNone)
  //     continue;

  //   if (type == CommandTypeVersion)
  //   {
  //     m_params->setVersion(QString("%1.%2.%3")
  //                          .arg(cmd.version.major)
  //                          .arg(cmd.version.minor)
  //                          .arg(cmd.version.patch));
  //   }
  //   else if (type == CommandTypeName)
  //   {
  //     enableInterface();
  //     m_wdog->start(2000);
  //   }
  //   else if (type == CommandTypeNormal)
  //   {
  //     ++m_cmd_per_sec;
  //     handleCommand(&cmd);
  //   }
  //   else if (type == CommandTypeError)
  //   {
  //     qDebug() << "ERROR: " << cmd.error.code;
  //   }
  //   else
  //   {
  //     qDebug() << "UNHAND: " << type;
  //   }
  // }
}

void
MainWindow::updateServoPosition(uint servo, uint position)
{
  unsigned char data[] = {(quint8)servo, (quint8)position};
  sendCommand(CMD_SERVO_SET, data, sizeof(data));
}

void
MainWindow::updateServoState(uint servo, bool state)
{
  unsigned char data[] = {(quint8)servo, (quint8)state};
  sendCommand(CMD_SERVO_PWR, data, sizeof(data));
}

void
MainWindow::calibrateServo(quint8 servo)
{
  sendCommand(CMD_PARAMS_CAL_FBK, &servo, 1);
}

void
MainWindow::saveMiddle(quint8 servo, quint16 value)
{
  quint8 data[] = {(quint8)servo, (quint8)(value >> 8), (quint8)(value)};
  sendCommand(CMD_PARAMS_CAL_MID, data, sizeof(data));
}

void
MainWindow::sendCommand(quint8 cmd, const quint8* data, quint8 data_size)
{
  // unsigned char bfr[255];
  // unsigned size = Protocol::packCommand(cmd, data, data_size, bfr);
  // m_io->write((char*)bfr, size);
  // m_status_tx_count += size;
  // updateStatusBar();
}

void
MainWindow::updateStatusBar(void)
{
  ui->statusBar->showMessage(tr("Received %1 bytes / Transmitted %2 bytes")
                             .arg(m_status_rx_count)
                             .arg(m_status_tx_count));
}

void
MainWindow::onControlSelfTest(bool value)
{
  quint8 state = value ? 1 : 0;
  sendCommand(CMD_SELF_TEST, &state, 1);
}

void
MainWindow::saveParameters(void)
{
  QVector<quint8> data = m_params->pack();
  sendCommand(CMD_PARAMS_FAC, data.data(), data.size());
}

void
MainWindow::clearParameters(void)
{
  sendCommand(CMD_PARAMS_FAC, 0, 0);
}
