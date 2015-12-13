/*
 *  OpenBangla Keyboard
 *  Copyright (C) 2015  Muhammad Mominul Huque <nahidbinbaten1995@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* Logging functions */

#ifndef LOG_H
#define LOG_H

#include <cstdio>

#define LOG_INFO(a...) std::fprintf(stdout, "[OpenBangla-Info]: " a)
//#ifdef DEBUG
  #define LOG_DEBUG(a...) std::fprintf(stdout, "[OpenBangla-Debug]: " a)
//#endif
#define LOG_ERR(a...) std::fprintf(stderr, "[OpenBangla-Error]: " a)

#endif /* end of include guard: LOG_H */
