/* Copyright 2018 MechMerlin
 * Copyright 2018 Logan Huskins
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
   * |-----------------------------------------------------------------------------------------+
   * |  Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  BSPC  |    |      |
   * |-----------------------------------------------------------------------------------------+
   * |   EscC   |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |            |
   * |-----------------------------------------------------------------------------------------+
   * |   Shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |      EntS       |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  | Alt(GUI) | L1 |              Space              |  L2   |  L1   |L4(GUI)| Ctrl  |
   * `-----------------------------------------------------------------------------------------'
   */
  [0] = LAYOUT_60_ansi(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TRNS, KC_TRNS,
    LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_TRNS,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SFTENT,
    KC_LCTL, LALT_T(KC_LGUI), MO(1), LT(3,KC_SPC), MO(2), MO(1), LT(4, KC_RGUI), KC_RCTL
  ),

  /* Lower
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
   * |-----------------------------------------------------------------------------------------+
   * |    ~    |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  | Del |     |       |
   * |-----------------------------------------------------------------------------------------+
   * |   EscC   |Mute |VolD |VolU |     |     |     | -_  | =+  | [{  | ]}  | FREE  |          |
   * |-----------------------------------------------------------------------------------------+
   * |   Shift   |PrvSng|PlPs|NxSng|     |     |     |    |     |     |   \ |  |     EntS      |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  | Alt(GUI) | L1 |              Space              |  L2   |  L1   |L4(GUI)| Ctrl  |
   * `-----------------------------------------------------------------------------------------'
   */
  [1] = LAYOUT_60_ansi(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, KC_TRNS, KC_TRNS,
    LCTL_T(KC_ESC), KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINUS, KC_EQUAL, KC_LBRACKET, KC_RBRACKET, KC_TRNS, KC_TRNS,
    KC_LSFT, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLASH, KC_SFTENT,
    KC_LCTL, LALT_T(KC_LGUI), MO(1), LT(3,KC_SPC), MO(2), MO(1), LT(4, KC_RGUI), KC_RCTL
  ),

  /* Upper
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
   * |-----------------------------------------------------------------------------------------+
   * |  Tab   | F1  | F2  | F3  | F4  |     |Home |PgDn |PgUp |End  |PrtSc|  BSPC  |    |      |
   * |-----------------------------------------------------------------------------------------+
   * |   EscC   | F5  | F6  | F7  | F8  |     |Left |Down | Up  |Right|     |     |            |
   * |-----------------------------------------------------------------------------------------+
   * |   Shift   | F9  | F10 | F11 | F12 |     |     |     |     |     |     |      EntS       |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  | Alt(GUI) | L1 |              Space              |  L2   |  L1   |L4(GUI)| Ctrl  |
   * `-----------------------------------------------------------------------------------------'
   */
  [2] = LAYOUT_60_ansi(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TAB, KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_BSPC, KC_TRNS, KC_TRNS,
    LCTL_T(KC_ESC), KC_F5, KC_F6, KC_F7, KC_F8, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_LSFT, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SFTENT,
    KC_LCTL, LALT_T(KC_LGUI), MO(1), LT(3,KC_SPC), MO(2), MO(1), LT(4, KC_RGUI), KC_RCTL
  ),

    /* Numbers
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
   * |-----------------------------------------------------------------------------------------+
   * |  Tab   | 1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |BSPC|        |       |
   * |-----------------------------------------------------------------------------------------+
   * |   EscC   |     |     |     |     |     |     |  _  |  +  |  {  |  }  | FREE  |          |
   * |-----------------------------------------------------------------------------------------+
   * |   Shift   |     |     |     |     |     |     |     |     |     |     |      EntS       |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  | Alt(GUI) | L1 |              Space              |  L2   |  L1   |L4(GUI)| Ctrl  |
   * `-----------------------------------------------------------------------------------------'
   */
  [3] = LAYOUT_60_ansi(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_TRNS, KC_TRNS,
    LCTL_T(KC_ESC), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS,
    KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SFTENT,
    KC_LCTL, LALT_T(KC_LGUI), MO(1), LT(3,KC_SPC), MO(2), MO(1), LT(4, KC_RGUI), KC_RCTL
  ),

    /* RGB
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     |   Reset   |
   * |-----------------------------------------------------------------------------------------+
   * | BL Tog |BLInc|BLDec|BLStp|     |     |     |     |     |     |     |     |     |        |
   * |-----------------------------------------------------------------------------------------+
   * | RGB Tog |Mode |Hue I|Sat I|Val I|Spd I|Plain|Breat|Rnbow|Swirl|     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |RMode|Hue D|Sat D|Val D|Spd D|Snake|Knigh|Xmas |Gradi|     |                 |
   * |-----------------------------------------------------------------------------------------+
   * |       |       |       |                                 |       |       |       |       |
   * `-----------------------------------------------------------------------------------------'
   */
  [4] = LAYOUT_60_ansi(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
    BL_TOGG, BL_INC, BL_DEC, BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
};
