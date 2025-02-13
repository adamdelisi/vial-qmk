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
    _FN,
    _WINDOW
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_ortho_4x4(
    KC_MUTE,        KC_MPRV,            KC_MPLY,            KC_MNXT,
    RGUI(KC_INS),   RGUI(KC_PGDN),      RGUI(KC_HOME),      RGUI(KC_PGUP),
    MO(_FN),        LCTL(LSFT(KC_3)),   LCTL(LSFT(KC_4)),   KC_F14,
    MO(_WINDOW),    LCTL(LALT(KC_O)),   KC_MYCM,            LCTL(LSFT(LALT(KC_C)))
),

[_FN] = LAYOUT_ortho_4x4(
    RESET,     AU_TOG,    CK_TOGG,    CK_RST,
    KC_SLEP,   RGB_RMOD,  RGB_TOG,    RGB_MOD,
    KC_TRNS,   RGB_VAD,   KC_NO,      RGB_VAI,
    EEP_RST,   RGB_HUD,   KC_NO,      RGB_HUI
),

[_WINDOW] = LAYOUT_ortho_4x4(
    KC_NO,    KC_NO,          RGUI(KC_0),     KC_NO,
    KC_NO,    RGUI(KC_7),     RGUI(KC_8),     RGUI(KC_9),
    KC_NO,    RGUI(KC_4),     RGUI(KC_5),     RGUI(KC_6),
    KC_TRNS,  RGUI(KC_1),     RGUI(KC_2),     RGUI(KC_3)
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
      tap_code(KC_PGDN);
    } else {
      /* And likewise for the other direction, this time Page Down is pressed. */
      tap_code(KC_PGUP);
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