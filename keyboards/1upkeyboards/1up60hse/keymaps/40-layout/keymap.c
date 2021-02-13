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

 enum layer_names { _QWERTY, _DVORAK, _LOWER, _RAISE, _ADJUST};



#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty
   * ,-----------------------------------------------------------------------------------------.
   * |GrvEsc|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |Backspace |
   * |-----------------------------------------------------------------------------------------+
   * |  Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * |   EscC  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * |   Shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |      Shift      | Tap Shift - Up Arrow
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  |  Alt(GUI)  |  Lwr  |          Space             |  Ras  |  GUI  |  L1   | Ctrl  | Tap Gui/L1/Ctrl - Left/Down/Right Arrow
   * `-----------------------------------------------------------------------------------------'
   */
  [_QWERTY] = LAYOUT_60_ansi(
    GRAVE_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_UP),
    KC_LCTL, LALT_T(KC_LGUI), MO(_LOWER), KC_SPC, MO(_RAISE), RGUI_T(KC_LEFT), LT(1, KC_DOWN), RCTL_T(KC_RIGHT)
  ),

  /* Dvorak
   * ,-----------------------------------------------------------------------------------------.
   * |GrvEsc|  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  [  |  ]  |Backspace |
   * |-----------------------------------------------------------------------------------------+
   * |  Tab   |  '  |  ,  |  .  |  P  |  Y  |  F  |  G  |  C  |  R  |  L  |  -  |  =  |    \   |
   * |-----------------------------------------------------------------------------------------+
   * |   EscC    |  A  |  O  |  E  |  U  |  I  |  D  |  H  |  T  |  N  |  S  |  /  |   Enter   |
   * |-----------------------------------------------------------------------------------------+
   * |   Shift     |  ;  |  Q  |  J  |  K  |  X  |  B  |  M  |  W  |  V  |  Z  |     Shift     | Tap Shift - Up Arrow
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  |  Alt(GUI)  |  Alt  |           Space            |  L3   |  GUI  |  L1   | Ctrl  | Tap Gui/L1/Ctrl - Left/Down/Right Arrow
   * `-----------------------------------------------------------------------------------------'
   */
  [_DVORAK] = LAYOUT_60_ansi(
    GRAVE_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_LBRC, KC_RBRC, KC_BSPC,
    KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_L, KC_MINS, KC_BSLS,
    LCTL_T(KC_ESC), KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, KC_ENT,
    KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, RSFT_T(KC_UP),
    KC_LCTL, LALT_T(KC_LGUI), MO(_LOWER), KC_SPC, MO(_RAISE), RGUI_T(KC_LEFT), LT(1, KC_DOWN), RCTL_T(KC_RIGHT)
  ),


  /* Function
   * ,-----------------------------------------------------------------------------------------.
   * |  `  | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |    Del    |
   * |-----------------------------------------------------------------------------------------+
   * |        |Prv | PlPs | Nxt |     |     |Home | PgDn |  PgUp  | End |PrtSc|ScrLk|Pause|      |
   * |-----------------------------------------------------------------------------------------+
   * |         |VolMu|VolDn|VolUp|     |     |Left | Down| Up |Right|BckSpc| Del   |         |
   * |-----------------------------------------------------------------------------------------+
   * |           |BrSch|BrtDn|BrtUp|     |     |     |     |     | Ins |      |                |
   * |-----------------------------------------------------------------------------------------+
   * |       |DskTpL |DskTpR |                                 | RAISE |  L2   |       |       |
   * `-----------------------------------------------------------------------------------------'
   */
  [_LOWER] = LAYOUT_60_ansi(
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
    KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS,
    KC_TRNS, KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_BSPC, KC_DEL, KC_TRNS,
    KC_TRNS, KC_WSCH, KC_BRID, KC_BRIU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_TRNS, KC_TRNS,
    KC_TRNS, C(G(KC_LEFT)), C(G(KC_RIGHT)), KC_TRNS, MO(_ADJUST), MO(_ADJUST), KC_TRNS, KC_TRNS
  ),


    /* Mouse/Number
   * ,-----------------------------------------------------------------------------------------.
   * |  `  | F1  | F2  | F3  | F4  | F5  | F6  |  F7  |  F8  |  F9  | F10 | F11 | F12 | BckSpc |
   * |-----------------------------------------------------------------------------------------+
   * |        |MwWhL|MsUp |MsWhR|MwWhu|     |     |      |      |  (  | )  |     |     |       |
   * |-----------------------------------------------------------------------------------------+
   * |            |MsLft|MsDn |MsRt |MsWhD|     |     |  +  |  =  |  {  |  }  |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |     |     |     |     |     |     |  -  |  _  |  [  |  ]   |                |
   * |-----------------------------------------------------------------------------------------+
   * |       | MsBt3 |ADJUST |MsBt2                            |       |  ADJUST |      |      |
   * `-----------------------------------------------------------------------------------------'
   */
  [_RAISE] = LAYOUT_60_ansi(
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSPC,
    KC_TRNS, KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS, KC_TRNS, KC_PLUS, KC_EQL, KC_LCBR, KC_RCBR, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_UNDS, KC_LBRC, KC_RBRC, KC_TRNS,
    KC_TRNS, KC_BTN3, MO(_ADJUST), KC_BTN2, KC_TRNS, MO(_ADJUST), KC_TRNS, KC_TRNS
  ),

  /* RGB
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     |   Reset   |
   * |-----------------------------------------------------------------------------------------+
   * | BL Tog |BLInc|BLDec|BLStp|     |     |     |     |     |     |     |     |     |        |
   * |-----------------------------------------------------------------------------------------+
   * | RGB Tog |Mode |Hue I|Sat I|Val I|Spd I|Plain|Breat|Rnbow|Swirl|     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |           |RMode|Hue D|Sat D|Val D|Spd D|Snake|Knigh|Xmas |Gradi|     |      Qwerty     |
   * |-----------------------------------------------------------------------------------------+
   * |       |       |       |                                 |       |       |       |Dvorak |
   * `-----------------------------------------------------------------------------------------'
   */
  [_ADJUST] = LAYOUT_60_ansi(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,
    BL_TOGG, BL_INC, BL_DEC, BL_STEP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, KC_TRNS, TO(_QWERTY),
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(_DVORAK)
  ),



};
