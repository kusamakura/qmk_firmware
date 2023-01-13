/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define MATRIX_ROW_PINS {A3,A4,A10,B9}
#define MATRIX_COL_PINS {B8,A14,A15,A13,A9,A8,B15,B14,B13,B12}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW
