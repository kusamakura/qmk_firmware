#pragma once

// Slower term settings due to tactility

#ifdef TAPPING_TERM
#  undef TAPPING_TERM
#  define TAPPING_TERM 180
#endif

#ifdef COMBO_TERM
#  undef COMBO_TERM
#  define COMBO_TERM 40
#endif
