#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_wrapper(
    ___LEFT_BASE_ROW2___, ___RGHT_BASE_ROW2___,
    ___LEFT_BASE_ROW3___, ___RGHT_BASE_ROW3___,
    ___LEFT_BASE_ROW4___, ___RGHT_BASE_ROW4___,
          XXXX, XXXX, NAV_SPC, XXXX, XXXX
  ),

  [_NAV] = LAYOUT_wrapper(
    ___LEFT_NAV_ROW2___, ___RGHT_NAV_ROW2___,
    ___LEFT_NAV_ROW3___, ___RGHT_NAV_ROW3___,
    ___LEFT_NAV_ROW4___, ___RGHT_NAV_ROW4___,
          VVVV, VVVV, VVVV, VVVV, RESET
  ),

  [_SYM] = LAYOUT_wrapper(
    ___LEFT_SYM_ROW2___, ___RGHT_SYM_ROW2___,
    ___LEFT_SYM_ROW3___, ___RGHT_SYM_ROW3___,
    ___LEFT_SYM_ROW4___, ___RGHT_SYM_ROW4___,
          VVVV, VVVV, VVVV, VVVV, VVVV
  ),

  [_NUM] = LAYOUT_wrapper(
    ___LEFT_NUM_ROW2___, ___RGHT_NUM_ROW2___,
    ___LEFT_NUM_ROW3___, ___RGHT_NUM_ROW3___,
    ___LEFT_NUM_ROW4___, ___RGHT_NUM_ROW4___,
       KC_MPRV, KC_MNXT, VVVV, VVVV, VVVV
  )
};
