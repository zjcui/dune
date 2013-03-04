//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: HelpDialog.cpp 5247 2012-12-04 07:54:46Z rasm                    $:*
//***************************************************************************

// Qt headers.
#include <QVBoxLayout>
#include <QLabel>
#include <QTextBrowser>
#include <QDialogButtonBox>

// Local headers.
#include "HelpDialog.hpp"

HelpDialog::HelpDialog(QWidget* root):
  QDialog(root)
{
  QVBoxLayout* vbox = new QVBoxLayout;

  QLabel* title = new QLabel("<p align=\"center\"><b>SCRT Control Center v1.0.0</b><br/>Copyright &copy; 2013 - Universidade do Porto LSTS");
  vbox->addWidget(title);

  QTextBrowser* text = new QTextBrowser();
  text->setMinimumWidth(800);
  text->setMinimumHeight(600);
  text->setSource(QUrl("qrc:///Help.html"));
  vbox->addWidget(text);

  QDialogButtonBox* buttons = new QDialogButtonBox(QDialogButtonBox::Close);
  buttons->setOrientation(Qt::Horizontal);
  buttons->setCenterButtons(true);
  connect(buttons, SIGNAL(accepted()), this, SLOT(accept()));
  connect(buttons, SIGNAL(rejected()), this, SLOT(reject()));
  vbox->addWidget(buttons);

  setLayout(vbox);
}
