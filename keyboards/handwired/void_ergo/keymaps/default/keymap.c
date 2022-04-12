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
  _QWERTY,
_COLEMAK,
  _RAISE,
  _LOWER,
  _MEDIA,
  _ADJUST

};

#define SAVE  LCTL(KC_S)
#define OPEN  LCTL(KC_O)
#define COPY  LCTL(KC_C)
#define PAST  LCTL(KC_V)
#define CUNDO LCTL(LALT(KC_Z))
#define INVERT LCTL(LSFT(KC_I))
#define NLAYER LSFT(LCTL(KC_N))
#define UNDO LCTL(KC_Z)
#define TRANS LCTL(KC_T)
#define ALIGNL LCTL(LSFT(KC_L))
#define ALIGNC LCTL(LSFT(KC_C))
#define ALIGNR LCTL(LSFT(KC_R))
#define BRINGF LCTL(KC_RBRC)
#define BRINGB LCTL(KC_LBRC)
#define BRINGFF LCTL(LSFT(KC_RBRC))
#define BRINGBB LCTL(LSFT(KC_LBRC))
#define SCRNREC LCTL(LSFT(KC_5))
#define SCRNSHT LCTL(LSFT(KC_4))

// Illustrator layer shortcuts.
#define SHAPE LSFT(KC_M)
#define RULER LCTL(LALT(KC_R))

// Premiere layer shortcuts.
#define REDO LCTL(LSFT(KC_Z))
#define EXPORT LCTL(KC_M)
#define IMPORT LCTL(KC_I)
#define PCOPY LCTL(KC_V)
#define PPASTE LCTL(LSFT(KC_V))

// Experience Design layer shortcuts. (can be used with others too.)
#define NEW LCTL(KC_N)
#define LOCK LCTL(KC_L)
#define SYMB LCTL(KC_K)
#define HIDE LCTL(KC_SCLN)
#define REPEAT LCTL(KC_R)
#define MASK LCTL(LSFT(KC_M))
#define GROUP LCTL(KC_G)
#define UNGRP LCTL(LSFT(KC_G))
#define VIEW LCTL(KC_TAB)
#define HORZ LSFT(KC_C)
#define VERT LSFT(KC_M)

#define _QWERTY 0
#define _COLEMAK 1

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
[_QWERTY] = LAYOUT_void_ergo(
    KC_ESC,      KC_Q,     KC_W,      KC_E,       KC_R,     KC_T,                    KC_Y,       KC_U,     KC_I,       KC_O,     KC_P,       KC_BSPC,
    KC_TAB,     KC_A,     KC_S,      KC_D,       KC_F,     KC_G,                     KC_H,       KC_J,     KC_K,       KC_L,     KC_SCLN,    KC_ENT,
    KC_LALT,     KC_Z,     KC_X,      KC_C,        KC_V,      KC_B,                  KC_N,       KC_M,     KC_COMM,    KC_DOT,   KC_SLSH,    KC_QUOTE,
                KC_HYPR,  KC_SPC,  MO(_LOWER), KC_LCTL,   KC_LSFT,                   KC_LGUI,   KC_SPC,   MO(_RAISE),   TG(1),  MO(_MEDIA)
),

[_COLEMAK] = LAYOUT_void_ergo(
    KC_ESC,     KC_Q,     KC_W,      KC_F,       KC_P,     KC_B,                    KC_J,       KC_L,     KC_U,       KC_Y,     KC_SCLN,       KC_BSPC,
    KC_TAB,     KC_A,     KC_R,      KC_S,       KC_T,     KC_G,                    KC_M,       KC_N,     KC_E,       KC_I,     KC_O,    KC_ENT,
    KC_LALT,    KC_Z,     KC_X,      KC_C,       KC_D,      KC_V,                 KC_K,       KC_H,     KC_COMM,    KC_DOT,   KC_SLSH,    KC_QUOTE,
                KC_HYPR,  KC_SPC,  MO(_LOWER), KC_LCTL,   KC_LSFT,                  KC_LGUI,   KC_SPC,   MO(_RAISE),  TG(1),  MO(_MEDIA)
),

[_LOWER] = LAYOUT_void_ergo(
    KC_ESC,     KC_1,     KC_2,     KC_3,       KC_4,     KC_5,                     KC_6,       KC_7,      KC_8,        KC_9,     KC_0,     KC_BSPC,
    KC_TRNS,    BRINGBB,  BRINGB,    KC_UP,    BRINGF, BRINGFF,                     KC_TRNS,    KC_TRNS,    KC_UP,     KC_TRNS,   KC_TRNS,  KC_TRNS,
    KC_LSFT,    KC_TRNS,  KC_LEFT,   KC_DOWN,    KC_RIGHT,  KC_TRNS,                KC_TRNS,    KC_LEFT,     KC_DOWN,    KC_RIGHT,   KC_TRNS,   KC_TRNS,
                KC_TRNS,  SCRNSHT,  MO(_LOWER), KC_SPC,   SCRNREC,                  KC_TRNS,    KC_ENT,      MO(_RAISE), KC_RALT,  KC_TRNS
),

[_RAISE] = LAYOUT_void_ergo(
    KC_ESC,     KC_EXLM,  KC_AT,    KC_HASH,    KC_DLR,   KC_PERC,                  KC_CIRC,    KC_AMPR,     KC_ASTR,    KC_LPRN,  KC_RPRN,  KC_BSPC,
    KC_TRNS,    KC_LCBR,  KC_RCBR,  KC_LBRC,    KC_RBRC,  KC_TRNS,                  KC_MINS,    KC_EQL,   KC_LCBR,    KC_RCBR,  KC_PIPE,  KC_GRV,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_UNDS,    KC_PLUS,  KC_LBRC,    KC_RBRC,  KC_BSLS,  KC_TILD,
                KC_TRNS,  KC_LGUI,  MO(_LOWER), KC_SPC,   KC_TRNS,                  KC_TRNS,    KC_ENT,   MO(_RAISE), KC_RALT,  KC_TRNS
),

[_MEDIA] = LAYOUT_void_ergo(
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_MPLY,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_MNXT,
    KC_F1,      KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,                    KC_F7,      KC_F8,    KC_F9,      KC_F10,   KC_F11,   KC_MPRV,
                KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  RESET,                    RESET,      KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS
),

[_ADJUST] = LAYOUT_void_ergo(
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,                  KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_F1,      KC_F2,    KC_F3,    KC_F4,      KC_F5,    KC_F6,                    KC_F7,      KC_F8,    KC_F9,      KC_F10,   KC_F11,   KC_TRNS,
                KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  RESET,                    RESET,      KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS
)
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
