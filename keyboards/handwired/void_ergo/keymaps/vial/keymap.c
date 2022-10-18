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

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY,
  LOWER,
  RAISE,
  ADJUST,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* OWERTY
 * |-----------------------------------------------------.                    .-----------------------------------------------------|
 * |KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC  |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT |
 * |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
 * |KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT |
 * |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
 *                         KC_NO, KC_NO, KC_LGUI,   LOWER,  KC_SPC|  |  KC_ENT,  RAISE,  KC_RALT, KC_NO, KC_NO
 *                                       |------------------------|  |--------------------------|
 */
// [_QWERTY] = LAYOUT_void_ergo(
//     KC_ESC,      KC_Q,     KC_W,      KC_E,       KC_R,     KC_T,                    KC_Y,       KC_U,     KC_I,       KC_O,     KC_P,       KC_BSPC,
//     KC_TAB,     KC_A,     KC_S,      MT(MOD_LCTL,KC_D),       KC_F,     KC_G,                     KC_H,       KC_J,     KC_K,       KC_L,     KC_SCLN,    KC_ENT,
//     KC_LALT,     KC_Z,     KC_X,      KC_C,        KC_V,      KC_B,                  KC_N,       KC_M,     KC_COMM,    KC_DOT,   KC_SLSH,    KC_QUOTE,
//                 KC_HYPR,  KC_SPC,  MO(_LOWER), KC_LCTL,   KC_LSFT,                   KC_LGUI,   KC_SPC,   MO(_RAISE),   TG(1),  MO(_MEDIA)
// ),

[_QWERTY] = LAYOUT_void_ergo(
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_F1,      KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,                    KC_F7,      KC_F8,    KC_F9,      KC_F10,   KC_F11,   KC_TRNS,
                KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  RESET,                    RESET,      KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS
),
[_LOWER] = LAYOUT_void_ergo(
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_F1,      KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,                    KC_F7,      KC_F8,    KC_F9,      KC_F10,   KC_F11,   KC_TRNS,
                KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  RESET,                    RESET,      KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS
),
[_RAISE] = LAYOUT_void_ergo(
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_F1,      KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,                    KC_F7,      KC_F8,    KC_F9,      KC_F10,   KC_F11,   KC_TRNS,
                KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  RESET,                    RESET,      KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS
),
[_ADJUST] = LAYOUT_void_ergo(
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_F1,      KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,                    KC_F7,      KC_F8,    KC_F9,      KC_F10,   KC_F11,   KC_TRNS,
                KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  RESET,                    RESET,      KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS
)
};

