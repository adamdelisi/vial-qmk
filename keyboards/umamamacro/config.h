#pragma once
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { B0 }
#define MATRIX_COL_PINS { B1, B2, B3, B4, B5, B6, E6, D7, C6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5
#define VIAL_KEYBOARD_UID {0xDC, 0x60, 0x57, 0xA7, 0x06, 0x03, 0xF7, 0xF8}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }