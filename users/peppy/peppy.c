#include "peppy.h"
#include "version.h"

void toggle_sticky_mod(uint16_t mod_keycode) {
  if (get_mods() & MOD_BIT(mod_keycode)) {
    unregister_mods(MOD_BIT(mod_keycode));
  }
  else {
    register_mods(MOD_BIT(mod_keycode));
  }
}

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case VERSION: // Prints firmware version
      if (record->event.pressed) {
        send_string_with_delay_P(PSTR(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION ", Built on: " QMK_BUILDDATE), TAP_CODE_DELAY);
      }
      break;
    case LCK_OFF:
      if (record->event.pressed) {
        clear_mods();
      }
      break;
    case LCK_SHIFT:
      if (record->event.pressed) {
        toggle_sticky_mod(KC_LSFT);
      }
      break;
    case LCK_CTRL:
      if (record->event.pressed) {
        toggle_sticky_mod(KC_LCTL);
      }
      break;
    case LCK_ALT:
      if (record->event.pressed) {
        toggle_sticky_mod(KC_LALT);
      }
      break;
    case LCK_CMD:
      if (record->event.pressed) {
        toggle_sticky_mod(KC_LGUI);
      }
      break;
    case M_LARR:
      if (record->event.pressed) {
        SEND_STRING("<-");
      }
      break;
    case M_RARR:
      if (record->event.pressed) {
        SEND_STRING("->");
      }
      break;
    case M_FLARR:
      if (record->event.pressed) {
        SEND_STRING("<=");
      }
      break;
    case M_FRARR:
      if (record->event.pressed) {
        SEND_STRING("=>");
      }
      break;
  }
  return process_record_keymap(keycode, record);
}
