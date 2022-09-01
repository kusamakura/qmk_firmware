#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_wrapper(
      KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4,     KC_F5, KC_F6, KC_F7, KC_F8,     KC_F9, KC_F10, KC_F11, KC_F12,    KC_PSCR,   KC_SCRL, KC_PAUS,
      KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,    KC_INSERT, KC_HOME, KC_PGUP,       KC_NUMLOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
      KC_TAB,            ___LEFT_BASE_ROW2___, ___RGHT_BASE_ROW2___,               KC_LBRC, KC_RBRC, KC_BSPC,   KC_DEL,    KC_END,  KC_PGDN,       KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,
      KC_CAPS,           ___LEFT_BASE_ROW3___, ___RGHT_BASE_ROW3___,            KC_SCLN, KC_ENT,                                                   KC_KP_4, KC_KP_5, KC_KP_6,
      KC_LSFT,           ___LEFT_BASE_ROW4___, ___RGHT_BASE_ROW4___,         KC_SLSH, KC_RSFT, KC_RSFT,                   KC_UP,                   KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,
      KC_LCTRL, KC_LGUI, KC_LALT, XXXX, NAV_SPC, XXXX, XXXX, KC_RALT, KC_RGUI, KC_APP, KC_RCTRL,                KC_LEFT,  KC_DOWN, KC_RIGHT,       KC_KP_0,          KC_KP_DOT
  ),

  [_NAV] = LAYOUT_wrapper(
      RESET,  KC_F1, KC_F2, KC_F3, KC_F4,     KC_F5, KC_F6, KC_F7, KC_F8,     KC_F9, KC_F10, KC_F11, KC_F12,    KC_PSCR,   KC_SCRL, KC_PAUS,
      RESET,   KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,    KC_INSERT, KC_HOME, KC_PGUP,       KC_NUMLOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
      KC_TAB,             ___LEFT_NAV_ROW2___, ___RGHT_NAV_ROW2___,                KC_LBRC, KC_RBRC, KC_BSPC,   KC_DEL,    KC_END,  KC_PGDN,       KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,
      KC_CAPS,            ___LEFT_NAV_ROW3___, ___RGHT_NAV_ROW3___,             KC_SCLN, KC_ENT,                                                   KC_KP_4, KC_KP_5, KC_KP_6,
      KC_LSFT,            ___LEFT_NAV_ROW4___, ___RGHT_NAV_ROW4___,          KC_SLSH, KC_RSFT, KC_RSFT,                   KC_UP,                   KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,
      KC_LCTRL, KC_LGUI, KC_LALT, XXXX, NAV_SPC, XXXX, XXXX, KC_RALT, KC_RGUI, KC_APP, KC_RCTRL,               KC_LEFT,  KC_DOWN, KC_RIGHT,       KC_KP_0,          KC_KP_DOT
  ),

  [_SYM] = LAYOUT_wrapper(
      KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4,     KC_F5, KC_F6, KC_F7, KC_F8,     KC_F9, KC_F10, KC_F11, KC_F12,    KC_PSCR,   KC_SCRL, KC_PAUS,
      KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,    KC_INSERT, KC_HOME, KC_PGUP,       KC_NUMLOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
      KC_TAB,             ___LEFT_SYM_ROW2___, ___RGHT_SYM_ROW2___,                KC_LBRC, KC_RBRC, KC_BSPC,   KC_DEL,    KC_END,  KC_PGDN,       KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,
      KC_CAPS,            ___LEFT_SYM_ROW3___, ___RGHT_SYM_ROW3___,             KC_SCLN, KC_ENT,                                                   KC_KP_4, KC_KP_5, KC_KP_6,
      KC_LSFT,            ___LEFT_SYM_ROW4___, ___RGHT_SYM_ROW4___,          KC_SLSH, KC_RSFT, KC_RSFT,                   KC_UP,                   KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,
      KC_LCTRL, KC_LGUI, KC_LALT, XXXX, NAV_SPC, XXXX, XXXX, KC_RALT, KC_RGUI, KC_APP, KC_RCTRL,               KC_LEFT,  KC_DOWN, KC_RIGHT,       KC_KP_0,          KC_KP_DOT
  ),

  [_NUM] = LAYOUT_wrapper(
      KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4,     KC_F5, KC_F6, KC_F7, KC_F8,     KC_F9, KC_F10, KC_F11, KC_F12,    KC_PSCR,   KC_SCRL, KC_PAUS,
      KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,    KC_INSERT, KC_HOME, KC_PGUP,       KC_NUMLOCK, KC_KP_SLASH, KC_KP_ASTERISK, KC_KP_MINUS,
      KC_TAB,             ___LEFT_NUM_ROW2___, ___RGHT_NUM_ROW2___,                KC_LBRC, KC_RBRC, KC_BSPC,   KC_DEL,    KC_END,  KC_PGDN,       KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,
      KC_CAPS,            ___LEFT_NUM_ROW3___, ___RGHT_NUM_ROW3___,             KC_SCLN, KC_ENT,                                                   KC_KP_4, KC_KP_5, KC_KP_6,
      KC_LSFT,            ___LEFT_NUM_ROW4___, ___RGHT_NUM_ROW4___,          KC_SLSH, KC_RSFT, KC_RSFT,                   KC_UP,                   KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER,
      KC_LCTRL, KC_LGUI, KC_LALT, XXXX, NAV_SPC, XXXX, XXXX, KC_RALT, KC_RGUI, KC_APP, KC_RCTRL,               KC_LEFT,  KC_DOWN, KC_RIGHT,       KC_KP_0,          KC_KP_DOT
  )
};
