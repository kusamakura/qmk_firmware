#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_wrapper(
    KC_TAB,  ___LEFT_BASE_ROW2___,      ___RGHT_BASE_ROW2___, KC_BSPC,
    KC_ESC,  ___LEFT_BASE_ROW3___,      ___RGHT_BASE_ROW3___, KC_SCLN,
    KC_LSFT, ___LEFT_BASE_ROW4___,      ___RGHT_BASE_ROW4___, KC_SLSH, KC_RSFT,
        MO(_SYM), NAV_SPC, KC_ENT, XXXX,      KC_BSPC, NAV_SPC, NAV_SPC, XXXX
  ),

  [_NAV] = LAYOUT_wrapper(
    VVVV, ___LEFT_NAV_ROW2___,       ___RGHT_NAV_ROW2___, VVVV,
    VVVV, ___LEFT_NAV_ROW3___,       ___RGHT_NAV_ROW3___, VVVV,
    VVVV, ___LEFT_NAV_ROW4___,       ___RGHT_NAV_ROW4___, VVVV, VVVV,
        VVVV, VVVV, VVVV, RESET,     VVVV, VVVV, VVVV, VVVV
  ),

  [_SYM] = LAYOUT_wrapper(
    VVVV, ___LEFT_SYM_ROW2___,       ___RGHT_SYM_ROW2___, VVVV,
    VVVV, ___LEFT_SYM_ROW3___,       ___RGHT_SYM_ROW3___, VVVV,
    VVVV, ___LEFT_SYM_ROW4___,       ___RGHT_SYM_ROW4___, VVVV, VVVV,
        VVVV, VVVV, VVVV, VVVV,      VVVV, VVVV, VVVV, VVVV
  ),

  [_NUM] = LAYOUT_wrapper(
    VVVV, ___LEFT_NUM_ROW2___,       ___RGHT_NUM_ROW2___, VVVV,
    VVVV, ___LEFT_NUM_ROW3___,       ___RGHT_NUM_ROW3___, VVVV,
    VVVV, ___LEFT_NUM_ROW4___,       ___RGHT_NUM_ROW4___, VVVV, VVVV,
        VVVV, VVVV, VVVV, VVVV,      VVVV, VVVV, VVVV, VVVV
  )
};
