VPATH += keyboards/gboards
COMBO_ENABLE = yes
AUTO_SHIFT_ENABLE = yes

ifeq ($(strip $(VIAL_ENABLE)), yes)
	VIA_ENABLE = yes
	OPT_DEFS += -DVIAL_ENABLED
endif

SRC += peppy.c
