#include QMK_KEYBOARD_H

#define _MAIN 0
#define _NUMS 1
#define _FUNC 2
#define _NAVA 3
#define _NAVB 4

#define ____ KC_TRNS

// Left
#define LR2  KC_TAB
#define LR3  KC_ESC
#define LR4  KC_LSFT
#define LR5A MT(MOD_LCTL, KC_DEL)
#define LR5B MT(MOD_LALT, KC_BSPC)
#define LR5C LT(_NUMS, KC_SPC)

// Right
#define RR2  KC_BSPC
#define RR3  KC_ENT
#define RR4  MO(_NAVB)
#define RR4B MO(/*_NAVB*/_NUMS)
#define RR5A LT(/*_FUNC*/_NAVA, KC_SPC)
#define RR5B MO(_NAVA)
#define RR5C MOD_RALT
#define RR5D MOD_RCTL

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_MAIN] = LAYOUT_all(
        LR2,  KC_Q, KC_W, KC_F, KC_P, KC_G,        KC_J, KC_L, KC_U, KC_Y, KC_QUOT, RR2, \
        LR3,  ALT_T(KC_A), SFT_T(KC_R), CTL_T(KC_S), CMD_T(KC_T), KC_D,        KC_H, RGUI_T(KC_N), RCTL_T(KC_E), RSFT_T(KC_I), RALT_T(KC_O), RR3, \
        LR4,  KC_Z, KC_X, KC_C, KC_V, KC_B,  RR4B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, RR4, \
              LR5A,    LR5B,       LR5C,     RR5A,    RR5B,      RR5C,      RR5D \
    ),

    [_NUMS] = LAYOUT_all(
        ____,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,      KC_7,       KC_8,      KC_9,       KC_0, ____, \
        ____, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),           KC_MINS,    KC_EQL,    KC_GRV,    KC_BSLS,    KC_SCLN, ____,  \
        ____, S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0),  ____, S(KC_MINS), S(KC_EQL), S(KC_GRV), S(KC_BSLS), S(KC_SCLN), ____, \
                 ____,    ____,             ____,           ____,                  ____,                  ____,       ____ \
    ),

    [_FUNC] = LAYOUT_all(
        G(KC_TAB),  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,        ____, ____, ____, ____, ____, ____, \
        C(KC_TAB),  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10,        ____, ____, ____, ____, ____, ____,  \
             ____, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15,  ____, ____, ____, ____, ____, ____, ____, \
                     ____,   ____,           ____,          ____,       ____,       ____, ____ \
    ),

    [_NAVA] = LAYOUT_all(
        ____, KC_LCBR, KC_RCBR, KC_LABK, KC_RABK, ____,           ____, A(KC_LEFT),   KC_UP, A(KC_RGHT),   ____, ____, \
        ____, KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, ____,        KC_HOME,    KC_LEFT, KC_DOWN,    KC_RGHT, KC_END, ____,  \
        ____,    ____,    ____,    ____,    ____, ____,  ____,    ____,       ____,    ____,       ____,   ____, ____, \
                 ____,    ____,             ____,        ____,                ____,                ____,   ____ \
    ),

    [_NAVB] = LAYOUT_all(
        G(S(KC_TAB)), ____, ____, ____, ____, ____,         ____,    ____,    ____,    ____,   KC_UP, ____, \
        C(S(KC_TAB)), ____, ____, ____, ____, ____,         ____, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, ____,  \
                ____, ____, ____, ____, ____, ____,  DEBUG, ____,  KC_END, KC_PGDN, KC_DOWN,    ____, ____, \
                      ____, ____,       ____,        ____,          ____,             ____,   RESET \
    ),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        switch (biton32(layer_state)) {
            default:
                if (clockwise) {
                    tap_code(KC_LEFT);
                } else {
                    tap_code(KC_RIGHT);
                }
                break;

            case 1:
                if (clockwise) {
                    tap_code(KC_UP);
                } else {
                    tap_code(KC_DOWN);
                }
                break;
        }
    }

    return true;
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf(
        "KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n",
        keycode,
        record->event.key.col,
        record->event.key.row,
        record->event.pressed,
        record->event.time,
        record->tap.interrupted,
        record->tap.count
    );
#endif
  return true;
};
