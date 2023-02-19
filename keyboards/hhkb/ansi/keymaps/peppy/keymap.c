#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

#define _GMR 4

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_wrapper(
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
    KC_TAB,  ___LEFT_BASE_ROW2___, ___RGHT_BASE_ROW2___, KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LGUI, ___LEFT_BASE_ROW3___, ___RGHT_BASE_ROW3___, KC_SCOLON, KC_ENT,
    KC_LSFT, ___LEFT_BASE_ROW4___, ___RGHT_BASE_ROW4___, KC_SLSH, TG(_GMR), MO(_NAV),
    KC_LCTL, KC_LALT, NAV_SPC, KC_RALT, KC_RCTL
  ),

	[_NAV] = LAYOUT_wrapper(
    RESET, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX,
    VVVV, ___LEFT_NAV_ROW2___, ___RGHT_NAV_ROW2___, XXXX, XXXX, VVVV,
    VVVV, ___LEFT_NAV_ROW3___, ___RGHT_NAV_ROW3___, XXXX, VVVV,
    VVVV, ___LEFT_NAV_ROW4___, ___RGHT_NAV_ROW4___, VVVV, VVVV, VVVV,
    VVVV, VVVV, VVVV, VVVV, VVVV
  ),

	[_SYM] = LAYOUT_wrapper(
    VVVV, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX,
    VVVV, ___LEFT_SYM_ROW2___, ___RGHT_SYM_ROW2___, XXXX, XXXX, VVVV,
    VVVV, ___LEFT_SYM_ROW3___, ___RGHT_SYM_ROW3___, XXXX, VVVV,
    VVVV, ___LEFT_SYM_ROW4___, ___RGHT_SYM_ROW4___, VVVV, VVVV, VVVV,
    VVVV, VVVV, VVVV, VVVV, VVVV
  ),

  [_NUM] = LAYOUT_wrapper(
    VVVV, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX,
    VVVV, ___LEFT_NUM_ROW2___, ___RGHT_NUM_ROW2___, XXXX, XXXX, VVVV,
    VVVV, ___LEFT_NUM_ROW3___, ___RGHT_NUM_ROW3___, XXXX, VVVV,
    VVVV, ___LEFT_NUM_ROW4___, ___RGHT_NUM_ROW4___, VVVV, VVVV, VVVV,
    VVVV, VVVV, VVVV, VVVV, VVVV
  ),

  [_GMR] = LAYOUT(
    KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LGUI, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, TG(_GMR), XXXX,
    KC_LCTL, KC_LALT, KC_SPC, KC_RALT, KC_RCTL
  )
};
