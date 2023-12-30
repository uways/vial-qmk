// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1,    KC_2,    KC_C,    KC_D,    KC_E,    KC_F, RGB_TOG,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,    KC_M,    KC_N,
        KC_3,    KC_4,    KC_C,    KC_D,    KC_E,    KC_F, RGB_MOD,RGB_RMOD,    KC_I,    KC_J,    KC_K,    KC_L,    KC_M,    KC_N,
        KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K,    KC_L,    KC_M,    KC_N,
                                   KC_D,    KC_E,    KC_F,    KC_G,    KC_H,    KC_I,    KC_J,    KC_K
    )
};
