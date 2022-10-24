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

#define PRODUCT VOID ERGO SLIM


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

#define MATRIX_ROW_PINS { B1, B3, B2, B6 }
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5 }
#define UNUSED_PINS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
/* disable these deprecated features by default */

#define USE_SERIAL
#define SOFT_SERIAL_PIN D1
#define SELECT_SOFT_SERIAL_SPEED 0
#define SPLIT_USB_DETECT
