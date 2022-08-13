/*
Copyright 2022 Stefan Sundin "4pplet" <mail@4pplet.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT_all(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// main layer
[0] = LAYOUT_wrapper(
    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS,
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_BSPC, KC_INS, KC_HOME, KC_PGUP,
    KC_TAB, ___LEFT_BASE_ROW2___, ___RGHT_BASE_ROW2___, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_END, KC_PGDN,
    KC_LGUI, ___LEFT_BASE_ROW3___, ___RGHT_BASE_ROW3___, KC_SCOLON, KC_BSLS, KC_ENT,
    KC_LSFT, KC_NUBS, ___LEFT_BASE_ROW4___, ___RGHT_BASE_ROW4___, KC_SLSH, KC_RSFT, MO(_NAV), KC_UP,
    KC_LCTL, KC_LGUI, KC_LALT, NAV_SPC, NAV_SPC, NAV_SPC, KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),
[1] = LAYOUT_wrapper(
    RESET,   XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    ___LEFT_NAV_ROW2___, ___RGHT_NAV_ROW2___,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    ___LEFT_NAV_ROW3___, ___RGHT_NAV_ROW3___,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    ___LEFT_NAV_ROW4___, ___RGHT_NAV_ROW4___,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                                    XXXX,    XXXX,    XXXX),
[2] = LAYOUT_wrapper(
    RESET,   XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    ___LEFT_SYM_ROW2___, ___RGHT_SYM_ROW2___,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    ___LEFT_SYM_ROW3___, ___RGHT_SYM_ROW3___,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    ___LEFT_SYM_ROW4___, ___RGHT_SYM_ROW4___,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                            XXXX,    XXXX,    XXXX),
[3] = LAYOUT_wrapper(
    RESET,   XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    ___LEFT_NUM_ROW2___, ___RGHT_NUM_ROW2___,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    ___LEFT_NUM_ROW3___, ___RGHT_NUM_ROW3___,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    ___LEFT_NUM_ROW4___, ___RGHT_NUM_ROW4___,    XXXX,    XXXX,    XXXX,    XXXX,
    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,                            XXXX,    XXXX,    XXXX)
};
