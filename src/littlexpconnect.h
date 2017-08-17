/*****************************************************************************
* Copyright 2015-2017 Alexander Barthel albar965@mailbox.org
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#ifndef LITTLEXPC_LITTLEXPCONNECT_H
#define LITTLEXPC_LITTLEXPCONNECT_H

#include "littlexpconnect_global.h"

/* Simple test mock up to be called from outside */
class LXPC_EXPORT LittleXpConnectTest
{

public:
  static void start();
  static void stop();
  static void enable();
  static void disable();
  static void callback();

};

#endif // LITTLEXPC_LITTLEXPCONNECT_H
