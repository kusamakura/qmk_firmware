// Default layout for WT60-D
#include QMK_KEYBOARD_H

#include "peppy.h"
#include "g/keymap_combo.h"

// clang-format off
#define LAYOUT_wrapper(...) LAYOUT_all(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BASE] = LAYOUT_wrapper(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
		KC_TAB,        ___LEFT_BASE_ROW2___, ___RGHT_BASE_ROW2___, XXXX, XXXX, XXXX,
		KC_LGUI,       ___LEFT_BASE_ROW3___, ___RGHT_BASE_ROW3___, XXXX, XXXX,
		KC_LSFT, XXXX, ___LEFT_BASE_ROW4___, ___RGHT_BASE_ROW4___, KC_SLSH, XXXX, TG(_GMR),
		KC_LCTL, KC_LGUI, KC_LALT, NAV_SPC, KC_RALT, KC_RGUI, XXXX, KC_RCTL
	),

	[_NAV] = LAYOUT_wrapper(
		QK_BOOT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, XXXX, XXXX,
		XXXX,       ___LEFT_NAV_ROW2___, ___RGHT_NAV_ROW2___, XXXX, XXXX, XXXX,
		XXXX,       ___LEFT_NAV_ROW3___, ___RGHT_NAV_ROW3___, XXXX, XXXX,
		XXXX, XXXX, ___LEFT_NAV_ROW4___, ___RGHT_NAV_ROW4___, XXXX, XXXX, XXXX,
		XXXX, XXXX, XXXX, VVVV, XXXX, XXXX, XXXX, XXXX
	),

	[_SYM] = LAYOUT_wrapper(
		XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX,
		XXXX,       ___LEFT_SYM_ROW2___, ___RGHT_SYM_ROW2___, XXXX, XXXX, XXXX,
		XXXX,       ___LEFT_SYM_ROW3___, ___RGHT_SYM_ROW3___, XXXX, XXXX,
		XXXX, XXXX, ___LEFT_SYM_ROW4___, ___RGHT_SYM_ROW4___, XXXX, XXXX, XXXX,
		XXXX, XXXX, XXXX, VVVV, XXXX, XXXX, XXXX, XXXX
	),

	[_NUM] = LAYOUT_wrapper(
		XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX, XXXX,
		XXXX,       ___LEFT_NUM_ROW2___, ___RGHT_NUM_ROW2___, XXXX, XXXX, XXXX,
		XXXX,       ___LEFT_NUM_ROW3___, ___RGHT_NUM_ROW3___, XXXX, XXXX,
		XXXX, XXXX, ___LEFT_NUM_ROW4___, ___RGHT_NUM_ROW4___, XXXX, XXXX, XXXX,
		XXXX, XXXX, XXXX, VVVV, XXXX, XXXX, XXXX, XXXX
	),

	[_GMR] = LAYOUT_wrapper(
		KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, TG(_GMR),
		KC_LCTL, KC_LCTL, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RCTL, MO(1),   KC_RCTL
	),
};
