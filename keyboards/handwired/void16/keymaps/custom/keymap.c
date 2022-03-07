
/* Copyright 2020 Victor Lucachi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base
 * ,---------------------------.
 * |   7  |   8  |   9  | click|
 * |------+------+------+------|
 * |   4  |   5  |   6  | ENTER|
 * |------+------+------+------|
 * |   1  |   2  |   3  | TAB  |
 * |------+------+------+------|
 * |  BCSP|   0  |   .  | FN1  |
 * `---------------------------'
 */
[_BASE] = LAYOUT_ortho_4x4(
    KC_P7,    KC_P8,    KC_P9,   	KC_MS_L,
    KC_P4,    KC_P5,    KC_P6,    KC_PENT,
    KC_P1,    KC_P2,    KC_P3,    KC_TAB,
    KC_BSPC,  KC_P0,    KC_PDOT,  TT(_FN1)
),

/* FN1
 * ,---------------------------.
 * | RESET|   +  |      |  play|
 * |------+------+------+------|
 * |   /  |   =  |   *  |      |
 * |------+------+------+------|
 * |      |   -  |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * `---------------------------'
 */
[_FN1] = LAYOUT_ortho_4x4(
    RESET,     KC_PPLS,   KC_TRNS,    KC_MPLY,
    KC_PSLS,   KC_PEQL,   KC_PAST,    KC_TRNS,
    KC_TRNS,   KC_PMNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS
),

/* FN2
 * ,---------------------------.
 * |      |      |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * `---------------------------'
 */
[_FN2] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS
),

/* FN3
 * ,---------------------------.
 * |      |      |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * |------+------+------+------|
 * |      |      |      |      |
 * `---------------------------'
 */
[_FN3] = LAYOUT_ortho_4x4(
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS,
    KC_TRNS,   KC_TRNS,   KC_TRNS,    KC_TRNS
)
};


bool encoder_update_user(uint8_t index, bool clockwise) {
  /* With an if statement we can check which encoder was turned. */
  if (index == 0) { /* First encoder */
    /* And with another if statement we can check the direction. */
    if (clockwise) {
      /* This is where the actual magic happens: this bit of code taps on the
         Page Down key. You can do anything QMK allows you to do here.
         You'll want to replace these lines with the things you want your
         encoders to do. */
      tap_code(KC_WH_U);
    } else {
      /* And likewise for the other direction, this time Page Down is pressed. */
      tap_code(KC_WH_D);
    }
  /* You can copy the code and change the index for every encoder you have. Most
     keyboards will only have two, so this piece of code will suffice. */
  } else if (index == 1) { /* Second encoder */
    if (clockwise) {
      tap_code(KC_UP);
    } else {
      tap_code(KC_DOWN);
    }
  }
  return false;
}


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

#define MOUSEKEY_INTERVAL 16

#define MOUSEKEY_DELAY 0

#define MOUSEKEY_TIME_TO_MAX 60

#define MOUSEKEY_MAX_SPEED 7

#define MOUSEKEY_WHEEL_DELAY 0