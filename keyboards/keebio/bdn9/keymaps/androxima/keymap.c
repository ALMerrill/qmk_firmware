/* Copyright 2019 Danny Nguyen <danny@keeb.io>
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

enum encoder_names {
  _LEFT = 0,
  _RIGHT,
  _MIDDLE,
};

enum custom_keycodes {
    SNIP = SAFE_RANGE,
    LOCK,
    CAD,
    TASK,
    DSK_L,
    DSK_R,
    DSK,
};

#define TASK1 LT(1, CAD)

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case SNIP:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_S))));
        }
        break; 
    case LOCK:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_L)));
        }
        break;
    case CAD:
        if (record->event.pressed) {
            SEND_STRING(SS_LCTL(SS_LALT(SS_TAP(X_DELETE))));
        }
        break;
    case TASK:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_TAB)));
        }
        break;
    case DSK_L:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_LCTL(SS_TAP(X_LEFT))));
        }
        break;
    case DSK_R:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_LCTL(SS_TAP(X_RIGHT))));
        }
        break;
    case DSK:
        if (record->event.pressed) {
            SEND_STRING(SS_LGUI(SS_TAP(X_D)));
        }
        break;
    }
    return true;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
        | Knob 1: Vol Dn/Up |      | Knob 2: Page Dn/Up |
        | Press: Mute       | Home | Press: Play/Pause  |
        | Hold: Layer 2     | Up   | RGB Mode           |
        | Left              | Down | Right              |
     */
    [0] = LAYOUT(
        KC_MUTE, LOCK,    KC_MPLY,
        CAD,     TASK,    SNIP,
        DSK_L,   DSK,     DSK_R
    ),
    /*
        | RESET          | N/A  | Media Stop |
        | Held: Layer 2  | Home | RGB Mode   |
        | Media Previous | End  | Media Next |
     */
    [1] = LAYOUT(
        RESET  , BL_STEP, KC_STOP,
        _______, KC_HOME, RGB_MOD,
        KC_MPRV, KC_END , KC_MNXT
    ),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == _LEFT) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
    //else if (index == _MIDDLE) {
    //    if (clockwise) {
    //        tap_code(KC_A);
    //    } else {
    //        tap_code(KC_B);
    //    }
    //}
    else if (index == _RIGHT) {
        if (clockwise) {
            tap_code16(C(KC_TAB));
        } else {
            tap_code16(C(S(KC_TAB)));
        }
    }
}
