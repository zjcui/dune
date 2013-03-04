//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Main.cpp 5247 2012-12-04 07:54:46Z rasm                          $:*
//***************************************************************************

// Qt headers.
#include <QApplication>

// Local headers.
#include "MainWindow.hpp"

int
main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setStyle("fusion");

    MainWindow win;
    win.show();

    return app.exec();
}
