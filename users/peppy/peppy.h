#pragma once

#include "quantum.h"

enum layers {
  _BASE,
  _NAV,
  _SYM,
  _NUM,
  _GMR
};

#if defined(VIAL_ENABLED)
  #define CUSTOM_KEYCODE_RANGE USER00
#else
  #define CUSTOM_KEYCODE_RANGE SAFE_RANGE
#endif

enum userspace_custom_keycodes {
  VERSION = CUSTOM_KEYCODE_RANGE,
  LCK_SHIFT,
  LCK_CTRL,
  LCK_ALT,
  LCK_CMD,
  LCK_OFF,
  M_LARR, // <-
  M_RARR, // ->
  M_FLARR, // <=
  M_FRARR, // =>
  TD_PARENS,
  TD_BRACKS,
  TD_BRACES,
  TD_LARR,
  TD_RARR,
  TD_SLASH_COMMENT,
  TD_LMAGNET,
  TD_RMAGNET,
  NEW_SAFE_RANGE
};

// Tap dance
enum {
  _TD_PARENS, // Tap = (, double tap = )
  _TD_BRACKS, // Tap = [, double tap = ]
  _TD_BRACES, // Tap = {, double tap = }
  _TD_LARR, // Tap = <-, double tap = <=
  _TD_RARR, // Tap = ->, double tap = =>
  _TD_SLASH_COMMENT, // Tap = /, double tap = LGUI(KC_SLASH)
  _TD_LMAGNET, // Tap = left 1/3, double tap = left 1/2, triple tap = left 2/3
  _TD_RMAGNET, // Tap = right 1/3, double tap = right 1/2, triple tap = right 2/3
};

// General keycodes
#define XXXX      KC_NO
#define VVVV      KC_TRNS
#define MOD_A     LALT_T(KC_A)
#define MOD_R     LSFT_T(KC_R)
#define MOD_S     LCTL_T(KC_S)
#define MOD_T     LGUI_T(KC_T)
#define MOD_N     RGUI_T(KC_N)
#define MOD_E     RCTL_T(KC_E)
#define MOD_I     RSFT_T(KC_I)
#define MOD_O     RALT_T(KC_O)
#define MOD_Z     LSFT_T(KC_Z)
#define NAV_SPC   LT(_NAV, KC_SPC)
#define SYM_C     LT(_SYM, KC_C)
#define NUM_V     LT(_NUM, KC_V)
#define NUM_K     LT(_NUM, KC_K)
#define SYM_M     LT(_SYM, KC_M)
#define OSM_A     OSM(MOD_LALT)
#define OSM_R     OSM(MOD_LSFT)
#define OSM_S     OSM(MOD_LCTL)
#define OSM_T     OSM(MOD_LGUI)

#define TD_PARENS  TD(_TD_PARENS)
#define TD_BRACKS  TD(_TD_BRACKS)
#define TD_BRACES  TD(_TD_BRACES)
#define TD_LARR    TD(_TD_LARR)
#define TD_RARR    TD(_TD_RARR)
#define TD_SLASH_COMMENT TD(_TD_SLASH_COMMENT)
#define TD_LMAGNET       TD(_TD_LMAGNET)
#define TD_RMAGNET       TD(_TD_RMAGNET)

// Shortcuts
#define KC_BWORD          LALT(KC_BACKSPACE)
#define KC_BLINE          LGUI(KC_BACKSPACE)
#define KC_LWORD          LALT(KC_LEFT)
#define KC_RWORD          LALT(KC_RIGHT)
#define KC_BNAV           LGUI(KC_LEFT_BRACKET)
#define KC_FNAV           LGUI(KC_RIGHT_BRACKET)
#define KC_UNDO           LGUI(KC_Z)
#define KC_CUT            LGUI(KC_X)
#define KC_COPY           LGUI(KC_C)
#define KC_PASTE          LGUI(KC_V)
#define KC_ENDASH         LALT(KC_MINUS)
#define KC_EMDASH         LSA(KC_MINUS)
#define IJ_COMMENT        LGUI(KC_SLASH)
#define IJ_BUILD          LGUI(KC_F9)
#define IJ_CURSOR_TEST    LCTL(LSFT(KC_R))
#define IJ_CURRENT_TEST   LCTL(KC_R)
#define IJ_SELECT_MORE    LALT(KC_UP)
#define IJ_SELECT_LESS    LALT(KC_DOWN)
#define IJ_LINE_UP        LALT(LSFT(KC_UP))
#define IJ_LINE_DN        LALT(LSFT(KC_DOWN))
#define IJ_GOTO_PARENS    LCTL(KC_M)
#define IJ_CURSOR_ACTION  LALT(KC_ENTER)

// BASE
#define ___LEFT_BASE_ROW2___     KC_Q, KC_W, KC_F, KC_P, KC_G
#define ___LEFT_BASE_ROW3___     MOD_A, MOD_R, MOD_S, MOD_T, KC_D
#define ___LEFT_BASE_ROW4___     MOD_Z, KC_X, SYM_C, NUM_V, KC_B
#define ___RGHT_BASE_ROW2___        KC_J, KC_L, KC_U, KC_Y, KC_QUOTE
#define ___RGHT_BASE_ROW3___        KC_H, MOD_N, MOD_E, MOD_I, MOD_O
#define ___RGHT_BASE_ROW4___        NUM_K, SYM_M, KC_COMMA, KC_DOT

// NAV
#define ___LEFT_NAV_ROW2___      KC_PGUP, KC_LWORD, KC_UP,   KC_RWORD, IJ_GOTO_PARENS
#define ___LEFT_NAV_ROW3___      KC_PGDN, KC_LEFT,  KC_DOWN, KC_RIGHT, KC_BNAV
#define ___LEFT_NAV_ROW4___      XXXX,    KC_BTN3,  KC_BTN2, KC_BTN1,  KC_FNAV
// Mouse wheel keys are reversed to compensate for mac's natural scrolling direction
#define ___RGHT_NAV_ROW2___         IJ_CURSOR_ACTION, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_D
#define ___RGHT_NAV_ROW3___         IJ_SELECT_MORE,   KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U
#define ___RGHT_NAV_ROW4___         IJ_SELECT_LESS,   XXXX,    KC_BTN3, TD_SLASH_COMMENT

// SYM
#define ___LEFT_SYM_ROW2___      XXXX, XXXX, XXXX, XXXX, XXXX
#define ___LEFT_SYM_ROW3___      OSM_A, OSM_R, OSM_S, OSM_T, IJ_LINE_UP
#define ___LEFT_SYM_ROW4___      XXXX, XXXX, XXXX, XXXX, IJ_LINE_DN
#define ___RGHT_SYM_ROW2___         TD_BRACES, KC_ENDASH, KC_EMDASH, TD_LMAGNET, TD_RMAGNET
#define ___RGHT_SYM_ROW3___         TD_PARENS, KC_MINUS, KC_EQUAL, KC_GRAVE, KC_BACKSLASH
#define ___RGHT_SYM_ROW4___         TD_BRACKS, VVVV, TD_LARR, TD_RARR

// NUM
#define ___LEFT_NUM_ROW2___      XXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXX
#define ___LEFT_NUM_ROW3___      KC_1, KC_2, KC_3, KC_4, KC_5
#define ___LEFT_NUM_ROW4___      KC_6, KC_7, KC_8, KC_9, KC_0
#define ___RGHT_NUM_ROW2___         XXXX, XXXX, IJ_CURSOR_TEST, IJ_CURRENT_TEST, IJ_BUILD
#define ___RGHT_NUM_ROW3___         KC_F1, KC_F2, KC_F3, KC_F4, KC_F5
#define ___RGHT_NUM_ROW4___         KC_F6, KC_F7, KC_F8, KC_F9
