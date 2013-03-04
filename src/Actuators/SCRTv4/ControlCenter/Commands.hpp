//***************************************************************************
// Copyright (C) 2007-2012 Laboratório de Sistemas e Tecnologia Subaquática *
// Departamento de Engenharia Electrotécnica e de Computadores              *
// Rua Dr. Roberto Frias, 4200-465 Porto, Portugal                          *
//***************************************************************************
// Author: Ricardo Martins                                                  *
//***************************************************************************
// $Id:: Commands.hpp 5242 2012-12-04 07:31:08Z rasm                      $:*
//***************************************************************************

#ifndef SCRT_COMMANDS_HPP_INCLUDED_
#define SCRT_COMMANDS_HPP_INCLUDED_

enum Commands
{
  CMD_STATE                = 1,
  CMD_PARAMS_CON           = 2,
  CMD_PARAMS_FAC           = 3,
  CMD_PARAMS_EFF           = 4,
  CMD_PARAMS_CAL_FBK       = 5,
  CMD_PARAMS_CAL_FBK_START = 6,
  CMD_PARAMS_CAL_FBK_END   = 7,
  CMD_PARAMS_CAL_MID       = 8,
  CMD_SERVO_SET            = 9,
  CMD_SERVO_PWR            = 10,
  CMD_SELF_TEST            = 11,
  CMD_CHECK_FUSES          = 12
};

#endif
