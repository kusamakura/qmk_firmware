#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_wrapper(
    ___LEFT_BASE_ROW2___, XXXX, ___RGHT_BASE_ROW2___, KC_BSPC,
    ___LEFT_BASE_ROW3___, XXXX, ___RGHT_BASE_ROW3___, KC_ENT,
    ___LEFT_BASE_ROW4___, XXXX, ___RGHT_BASE_ROW4___, KC_SLSH,
       XXXX, MO(_NAV), NAV_SPC, NAV_SPC, XXXX, XXXX
  ),

  [_NAV] = LAYOUT_wrapper(
    ___LEFT_NAV_ROW2___, VVVV, ___RGHT_NAV_ROW2___, VVVV,
    ___LEFT_NAV_ROW3___, VVVV, ___RGHT_NAV_ROW3___, VVVV,
    ___LEFT_NAV_ROW4___, VVVV, ___RGHT_NAV_ROW4___, VVVV,
             VVVV, VVVV, VVVV, VVVV, VVVV, QK_BOOT
  ),

  [_SYM] = LAYOUT_wrapper(
    ___LEFT_SYM_ROW2___, VVVV, ___RGHT_SYM_ROW2___, VVVV,
    ___LEFT_SYM_ROW3___, VVVV, ___RGHT_SYM_ROW3___, VVVV,
    ___LEFT_SYM_ROW4___, VVVV, ___RGHT_SYM_ROW4___, VVVV,
             VVVV, VVVV, VVVV, VVVV, VVVV, VVVV
  ),

  [_NUM] = LAYOUT_wrapper(
    ___LEFT_NUM_ROW2___, VVVV, ___RGHT_NUM_ROW2___, VVVV,
    ___LEFT_NUM_ROW3___, VVVV, ___RGHT_NUM_ROW3___, VVVV,
    ___LEFT_NUM_ROW4___, VVVV, ___RGHT_NUM_ROW4___, VVVV,
             VVVV, VVVV, VVVV, VVVV, VVVV, VVVV
  )
};
