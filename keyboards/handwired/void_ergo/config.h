/*
Copyright 2020 Victor Lucachi

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

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xF055
#define PRODUCT_ID 0x3535
#define DEVICE_VER 0x0001
#define MANUFACTURER Victor Lucachi
#define DESCRIPTION A handwired split keyboard inspired by the Corne

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 12


/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define USE_SERIAL
#define SOFT_SERIAL_PIN D1

//#define MASTER_LEFT
#define SPLIT_USB_DETECT
#define VIAL_KEYBOARD_UID {0x7F, 0x8D, 0x97, 0x06, 0xB4, 0xA4, 0x0D, 0xFA}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
