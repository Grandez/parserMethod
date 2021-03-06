/* Main for calc++.   -*- C++ -*-

   Copyright (C) 2005--2015, 2018--2020 Free Software Foundation, Inc.

   This file is part of Bison, the GNU Compiler Compiler.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#include <driver.hpp>
#include <iostream>

int main (int argc, char *argv[]) {
  int res = 0;
  Driver drv;
  drv.trace_parsing = true;
  drv.trace_scanning = true;
  res = drv.parse (argv[1]);
  std::cout << "resultado: " << res << '\n';
  if (res == 0) {
        std::cout << "Parametros: " << drv.signature.size() << std::endl;
  }
    return res;
//  for (int i = 1; i < argc; ++i)
//    if (argv[i] == std::string ("-p"))
//      drv.trace_parsing = true;
//    else if (argv[i] == std::string ("-s"))
//      drv.trace_scanning = true;
//    else if (!drv.parse (argv[i]))
//      std::cout << drv.result << '\n';
//    else
//      res = 1;
//  return res;
}
