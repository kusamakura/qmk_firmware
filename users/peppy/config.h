#pragma once

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 40
#ifdef TAPPING_TERM
  #undef TAPPING_TERM
  #define TAPPING_TERM 200
#endif
#define IGNORE_MOD_TAP_INTERRUPT
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_NO_AUTO_REPEAT
