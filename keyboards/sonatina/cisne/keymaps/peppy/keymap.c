#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT_all(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_wrapper(
    XXXX, ___LEFT_BASE_ROW2___, ___RGHT_BASE_ROW2___, XXXX,
    KC_Q, ___LEFT_BASE_ROW3___, ___RGHT_BASE_ROW3___, KC_QUOTE,
    XXXX, ___LEFT_BASE_ROW4___, XXXX, ___RGHT_BASE_ROW4___, KC_SLSH, XXXX,
           XXXX, XXXX, NAV_SPC, XXXX, NAV_SPC, KC_SPC, XXXX
  ),
  [_NAV] = LAYOUT_wrapper(
    XXXX, ___LEFT_NAV_ROW2___, ___RGHT_NAV_ROW2___, XXXX,
    VVVV, ___LEFT_NAV_ROW3___, ___RGHT_NAV_ROW3___, VVVV,
    XXXX, ___LEFT_NAV_ROW4___, XXXX, ___RGHT_NAV_ROW4___, VVVV, XXXX,
             XXXX, XXXX, VVVV, XXXX, VVVV, VVVV, QK_BOOT
  ),
  [_SYM] = LAYOUT_wrapper(
    XXXX, ___LEFT_SYM_ROW2___, ___RGHT_SYM_ROW2___, XXXX,
    VVVV, ___LEFT_SYM_ROW3___, ___RGHT_SYM_ROW3___, VVVV,
    XXXX, ___LEFT_SYM_ROW4___, XXXX, ___RGHT_SYM_ROW4___, VVVV, XXXX,
             XXXX, XXXX, VVVV, XXXX, VVVV, VVVV, XXXX
  ),
  [_NUM] = LAYOUT_wrapper(
    XXXX, ___LEFT_NUM_ROW2___, ___RGHT_NUM_ROW2___, XXXX,
    VVVV, ___LEFT_NUM_ROW3___, ___RGHT_NUM_ROW3___, VVVV,
    XXXX, ___LEFT_NUM_ROW4___, XXXX, ___RGHT_NUM_ROW4___, VVVV, XXXX,
             XXXX, XXXX, VVVV, XXXX, VVVV, VVVV, XXXX
  ),
};
