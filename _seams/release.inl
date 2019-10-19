/* Oregon-Cooler Client App @version 0.x
@link    https://github.com/kabuki-starship/oregoncooler.client.git
@file    /seams/01.bar.h
@author  Cale McCollough <https://calemccollough.github.io>
@license Copyright (C) 2019 Kabuki Starship <kabukistarship.com>.
This program is free software: you can redistribute it and/or modify it under 
the terms of the GNU General Public License as published by the Free Software 
Foundation, either version 3 of the License, or (at your option) any later 
version. This program is distributed in the hope that it will be useful, but 
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more 
details. You should have received a copy of the GNU General Public License 
along with this program.  If not, see <https://www.gnu.org/licenses/>. */

#pragma once
#include <_config.h>

#if SEAM == THEATER_0
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace oregoncooler { namespace client { 
inline const CHA* _1_Bar (CHA* seam_log, CHA* seam_end, const CHA* args) {
#if SEAM >= THEATER_0
  TEST_BEGIN;

  PRINT_HEADING ("Testing Foo fun.");

#endif
  return 0;
}
}  //< namespace client
}  //< namespace oregoncooler
