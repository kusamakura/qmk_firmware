#pragma once

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 40
#ifdef TAPPING_TERM
  #undef TAPPING_TERM
  #define TAPPING_TERM 160
#endif
#define IGNORE_MOD_TAP_INTERRUPT
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_NO_AUTO_REPEAT

// Mouse keys
#ifdef MOUSEKEY_DELAY
  #undef MOUSEKEY_DELAY
  #define MOUSEKEY_DELAY 16
#endif
#ifdef MOUSEKEY_INTERVAL
  #undef MOUSEKEY_INTERVAL
  #define MOUSEKEY_INTERVAL 16
#endif
#ifdef MOUSEKEY_MOVE_DELTA
  #undef MOUSEKEY_MOVE_DELTA
  #define MOUSEKEY_MOVE_DELTA 3
#endif
#ifdef MOUSEKEY_MAX_SPEED
  #undef MOUSEKEY_MAX_SPEED
  #define MOUSEKEY_MAX_SPEED 0
#endif
#ifdef MOUSEKEY_TIME_TO_MAX
  #undef MOUSEKEY_TIME_TO_MAX
  #define MOUSEKEY_TIME_TO_MAX 0
#endif
#ifdef MOUSEKEY_WHEEL_DELAY
  #undef MOUSEKEY_WHEEL_DELAY
  #define MOUSEKEY_WHEEL_DELAY 16
#endif
#ifdef MOUSEKEY_WHEEL_INTERVAL
  #undef MOUSEKEY_WHEEL_INTERVAL
  #define MOUSEKEY_WHEEL_INTERVAL 16
#endif
#ifdef MOUSEKEY_WHEEL_MAX_SPEED
  #undef MOUSEKEY_WHEEL_MAX_SPEED
  #define MOUSEKEY_WHEEL_MAX_SPEED 10
#endif
#ifdef MOUSEKEY_WHEEL_TIME_TO_MAX
  #undef MOUSEKEY_WHEEL_TIME_TO_MAX
  #define MOUSEKEY_WHEEL_TIME_TO_MAX 40
#endif
