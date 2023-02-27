#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT_split_2space(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_wrapper(
    ___LEFT_BASE_ROW2___, ___RGHT_BASE_ROW2___, KC_SCOLON,
    ___LEFT_BASE_ROW3___, ___RGHT_BASE_ROW3___,
    ___LEFT_BASE_ROW4___, ___RGHT_BASE_ROW4___, KC_SLASH,
           XXXX, NAV_SPC, NAV_SPC, XXXX
  ),

  [_NAV] = LAYOUT_wrapper(
    ___LEFT_NAV_ROW2___, ___RGHT_NAV_ROW2___, KC_WH_D, // Duplicate pinky pos for scrolling
    ___LEFT_NAV_ROW3___, ___RGHT_NAV_ROW3___,
    ___LEFT_NAV_ROW4___, ___RGHT_NAV_ROW4___, VVVV,
             VVVV, VVVV, VVVV, RESET
  ),

  [_SYM] = LAYOUT_wrapper(
    ___LEFT_SYM_ROW2___, ___RGHT_SYM_ROW2___, VVVV,
    ___LEFT_SYM_ROW3___, ___RGHT_SYM_ROW3___,
    ___LEFT_SYM_ROW4___, ___RGHT_SYM_ROW4___, VVVV,
             VVVV, VVVV, VVVV, VVVV
  ),

  [_NUM] = LAYOUT_wrapper(
    ___LEFT_NUM_ROW2___, ___RGHT_NUM_ROW2___, VVVV,
    ___LEFT_NUM_ROW3___, ___RGHT_NUM_ROW3___,
    ___LEFT_NUM_ROW4___, ___RGHT_NUM_ROW4___, VVVV,
             VVVV, VVVV, VVVV, VVVV
  )
};
