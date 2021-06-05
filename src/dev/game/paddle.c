//
//  paddle.h
//  Steve ][
//
//  Created by Tamas Rudnai on 5/19/20.
//  Copyright © 2019, 2020 Tamas Rudnai. All rights reserved.
//
// This file is part of Steve ][ -- The Apple ][ Emulator.
//
// Steve ][ is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Steve ][ is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Steve ][.  If not, see <https://www.gnu.org/licenses/>.
//

#include "paddle.h"

uint64_t pdl_reset_time = 0;
uint64_t pdl_current_time = 0;
uint64_t pdl_elapsed_time = 0;

double pdl_value[4] = { 0.5, 0.5, 0.5, 0.5 };
double pdl_prev[4] = { 0.5, 0.5, 0.5, 0.5 };
double pdl_diff[4] = { 0.0, 0.0, 0.0, 0.0 };
double * pdl_valarr = pdl_value;
double * pdl_prevarr = pdl_prev;
double * pdl_diffarr = pdl_diff;

