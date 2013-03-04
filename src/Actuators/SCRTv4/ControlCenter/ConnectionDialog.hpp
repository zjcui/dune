//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: ConnectionDialog.hpp 5273 2012-12-06 04:03:47Z rasm              $:*
//***************************************************************************

#ifndef SERIALPORTDIALOG_H
#define SERIALPORTDIALOG_H

#include <QDialog>

namespace Ui {
  class ConnectionDialog;
}

class ConnectionDialog : public QDialog
{
  Q_OBJECT

public:
  ConnectionDialog(QWidget* parent = 0);

  ~ConnectionDialog(void);

  bool
  useTcp(void) const;

  QString
  getTcpAddress(void) const;

  unsigned
  getTcpPort(void) const;

  QString
  getDevice(void) const;

private:
  Ui::ConnectionDialog *ui;
};

#endif
