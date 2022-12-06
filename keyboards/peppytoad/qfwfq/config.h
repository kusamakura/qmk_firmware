/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 10

#define MATRIX_ROW_PINS {C7,C6,B6,B0,D0}
#define MATRIX_COL_PINS {F7,F6,F5,F4,F1,F0,B2,B3,E6,B7}
// col4 is either F4 or D4

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
