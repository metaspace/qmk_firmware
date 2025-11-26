// Copyright 2023 Idan Kamara (@idank)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include QMK_KEYBOARD_H
#include "users/holykeebs/holykeebs.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q,        KC_W,        KC_E,        KC_R,         KC_T,            KC_Y,            KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,        KC_S,        KC_D,        KC_F,         KC_G,            KC_H,            KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_Z,        KC_X,        KC_C,        KC_V,         KC_B,            KC_N,            KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    MO(3),       MO(1),       MO(2),       MO(3)
  ),

  [1] = LAYOUT(
    KC_CAPS,     KC_APP,      HK_S_MODE,   KC_BTN1,      KC_BTN2,         KC_NO,           KC_1,    KC_2,    KC_3,    KC_ESC,
    KC_TAB,      KC_LSFT,     KC_LGUI,     KC_LCTL,      KC_HOME,         KC_END,          KC_4,    KC_5,    KC_6,    KC_ENT,
    KC_LALT,     HK_S_MODE_T, HK_C_SCROLL, HK_D_MODE,    KC_PGDN,         KC_PGUP,         KC_7,    KC_8,    KC_9,    KC_0,
    KC_TRNS,     KC_TRNS,     KC_SPC,      KC_TRNS
  ),

  [2] = LAYOUT(
    KC_CAPS,     KC_APP,      KC_UP,       KC_BTN1,      KC_BTN2,         KC_NO,           KC_NO,   KC_QUOT, KC_DQUO, KC_ESC,
    KC_TAB,      KC_LEFT,     KC_DOWN,     KC_RGHT,      KC_HOME,         KC_END,          KC_RCTL, KC_RGUI, KC_RSFT, KC_ENT,
    KC_NO,       KC_NO,       KC_NO,       KC_NO,        KC_PGDN,         KC_PGUP,         KC_NO,   KC_NO,   KC_NO,   KC_RALT,
    KC_NO,       KC_BSPC,     KC_TRNS,     KC_NO
  ),

  [3] = LAYOUT(
    KC_EXLM,     KC_AT,       KC_HASH,     KC_DLR,       KC_PERC,         KC_CIRC,         KC_AMPR, KC_ASTR, KC_MINS, KC_EQL,
    KC_GRV,      KC_TILD,     KC_LPRN,     KC_RPRN,      MO(4),           KC_PIPE,         KC_LCBR, KC_RCBR, KC_UNDS, KC_PLUS,
    TG(5),       KC_NO,       KC_LBRC,     KC_RBRC,      TG(4),           KC_BSLS,         KC_LT,   KC_GT,   KC_NO,   KC_NO,
    KC_TRNS,     KC_NO,       KC_NO,       KC_TRNS
  ),

  [4] = LAYOUT(
    KC_NO,       KC_NO,       KC_NO,       KC_NO,        KC_NO,           DF(6),           KC_F1,   KC_F2,   KC_F3,   KC_F4,
    KC_NO,       KC_NO,       KC_NO,       KC_NO,        KC_TRNS,         KC_NO,           KC_F5,   KC_F6,   KC_F7,   KC_F8,
    KC_NO,       KC_NO,       KC_NO,       KC_NO,        TG(4),           KC_NO,           KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_NO,       KC_NO,       KC_NO,       KC_NO
  ),

  [5] = LAYOUT(
    HK_SAVE,     HK_RESET,    KC_NO,       HK_D_MODE_T,  QK_BOOT,         QK_BOOT,         KC_NO,   KC_NO,   KC_NO,   KC_NO,
    HK_I_SCROLL, HK_P_SET_D,  HK_P_SET_S,  HK_P_SET_BUF, QK_CLEAR_EEPROM, QK_CLEAR_EEPROM, KC_DOWN, KC_UP,   KC_NO,   KC_NO,
    TG(5),       KC_NO,       KC_NO,       KC_NO,        KC_NO,           KC_NO,           KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,       KC_LSFT,     KC_NO,       KC_NO
  ),

  [6] = LAYOUT(
    KC_Q,        KC_W,        KC_E,        KC_R,         KC_T,            KC_Y,            KC_U,    KC_I,    KC_O,    KC_P,
    KC_A,        KC_S,        KC_D,        KC_F,         KC_G,            KC_H,            KC_J,    KC_K,    KC_L,    KC_SCLN,
    KC_Z,        KC_X,        KC_C,        KC_V,         KC_B,            KC_N,            KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    MO(3),       MO(7),       MO(2),       MO(3)
  ),

  [7] = LAYOUT(
    KC_LCTL,     KC_1,        KC_2,        KC_3,         KC_TAB,          DF(0),           KC_1,    KC_2,    KC_3,    KC_ESC,
    KC_LSFT,     KC_NO,       KC_NO,       KC_H,         KC_ESC,          KC_END,          KC_4,    KC_5,    KC_6,    KC_ENT,
    KC_LALT,     KC_NO,       KC_NO,       KC_NO,        KC_NO,           KC_PGUP,         KC_7,    KC_8,    KC_9,    KC_0,
    KC_TRNS,     KC_TRNS,     KC_SPC,      KC_TRNS
  ),
};
