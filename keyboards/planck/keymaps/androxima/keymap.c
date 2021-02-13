/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"

layer_names{_QWERTY, _DVORAK, _LOWER, _RAISE, _ADJUST, _NUMBER, _LOL, _LOL_F};

#define QWERTY TO(_QWERTY)
#define DVORAK TO(_DVORAK)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define NUMBER MO(_NUMBER)

#define LOENT LT(_LOWER, KC_ENT)
#define RASPC LT(_RAISE, KC_SPC)
#define NUMLEFT LT(_NUMBER, KC_LEFT)
#define ADJSPC LT(_ADJUST, KC_SPC)
#define ESCC LCTL_T(KC_ESC)
#define SFTENT KC_SFTENT
#define GUIC LCTL_T(KC_LGUI)
#define _LSFT KC_LSFT
#define COMM KC_COMM
#define ESCC LCTL_T(KC_ESC)
#define BSPC_A LALT_T(KC_BSPC)

#define LOL TO(_LOL)
#define LOL_F LT(_LOL_F, KC_SPC)

#define CCTL LCTL_T(KC_C)
#define VALT LALT_T(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_planck_grid(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, ESCC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, _LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SFTENT, BACKLIT, KC_LCTL, KC_LALT, KC_LGUI, LOWER, SFTENT, BSPC_A, RASPC, NUMLEFT, KC_DOWN, KC_UP, KC_RGHT),
    [_DVORAK] = LAYOUT(KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_BSPC, ESCC, KC_A, KC_O, KC_E, KC_U, KC_I, KC_D, KC_H, KC_T, KC_N, KC_S, KC_SLSH, _LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, SFTENT, BACKLIT, KC_CTRL, KC_ALT, KC_LGUI, LOWER, SFTENT, BSPC_A, RASPC, NUMLEFT, KC_DOWN, KC_UP, KC_RIGHT),
    [_LOWER]  = LAYOUT(KC_TILD, KC_NO, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DEL, KC_LCTL, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_PLUS, KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE, _LSFT, KC_0, KC_1, KC_2, KC_3, KC_L, KC_NO, KC_MINS, KC_UNDS, KC_LBRC, KC_RBRC, SFTENT, KC_NO, KC_NO, KC_NO, KC_LGUI, KC_TRNS, KC_LSFT, BSPC_A, ADJSPC, NUMBER, KC_NO, KC_NO, KC_NO),
    [_RAISE]  = LAYOUT(KC_GRV, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, KC_LCTL, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_INS, KC_BSLS, _LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_L, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, LOWER, KC_LSFT, BSPC_A, KC_TRNS, NUMBER, KC_NO, KC_NO, KC_NO),
    [_ADJUST] = LAYOUT(RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, LOL, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_L, KC_NO, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, QWERTY, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_L, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, DVORAK, KC_NO, KC_NO, KC_NO, KC_LGUI, KC_TRNS, KC_LSFT, BSPC_A, KC_TRNS, NUMBER, KC_NO, KC_NO, KC_NO),
    [_NUMBER] = LAYOUT(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, ESCC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_NO, KC_QUOT, _LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, COMM, KC_DOT, KC_SLSH, SFTENT, KC_NO, KC_NO, KC_NO, GUIC, LOWER, KC_LSFT, BSPC_A, RASPC, KC_TRNS, KC_NO, KC_NO, KC_NO),
    [_LOL]    = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_Y, KC_NO, KC_NO, KC_NO, KC_P, QWERTY, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, _LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, LOL_F, VALT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
    [_LOL_F]  = LAYOUT(KC_NO, KC_6, KC_7, KC_NO, KC_6, KC_7, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

};

#ifdef AUDIO_ENABLE
float plover_song[][2]    = SONG(PLOVER_SOUND);
float plover_gb_song[][2] = SONG(PLOVER_GOODBYE_SOUND);
#endif

layer_state_t layer_state_set_user(layer_state_t state) { return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST); }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                print("mode just switched to qwerty and this is a huge string\n");
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
            break;
        case COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
            break;
        case DVORAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_DVORAK);
            }
            return false;
            break;
        case BACKLIT:
            if (record->event.pressed) {
                register_code(KC_RSFT);
#ifdef BACKLIGHT_ENABLE
                backlight_step();
#endif
#ifdef KEYBOARD_planck_rev5
                writePinLow(E6);
#endif
            } else {
                unregister_code(KC_RSFT);
#ifdef KEYBOARD_planck_rev5
                writePinHigh(E6);
#endif
            }
            return false;
            break;
        case PLOVER:
            if (record->event.pressed) {
#ifdef AUDIO_ENABLE
                stop_all_notes();
                PLAY_SONG(plover_song);
#endif
                layer_off(_RAISE);
                layer_off(_LOWER);
                layer_off(_ADJUST);
                layer_on(_PLOVER);
                if (!eeconfig_is_enabled()) {
                    eeconfig_init();
                }
                keymap_config.raw  = eeconfig_read_keymap();
                keymap_config.nkro = 1;
                eeconfig_update_keymap(keymap_config.raw);
            }
            return false;
            break;
        case EXT_PLV:
            if (record->event.pressed) {
#ifdef AUDIO_ENABLE
                PLAY_SONG(plover_gb_song);
#endif
                layer_off(_PLOVER);
            }
            return false;
            break;
    }
    return true;
}

bool     muse_mode      = false;
uint8_t  last_muse_note = 0;
uint16_t muse_counter   = 0;
uint8_t  muse_offset    = 70;
uint16_t muse_tempo     = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo += 1;
            } else {
                muse_tempo -= 1;
            }
        }
    } else {
        if (clockwise) {
#ifdef MOUSEKEY_ENABLE
            tap_code(KC_MS_WH_DOWN);
#else
            tap_code(KC_PGDN);
#endif
        } else {
#ifdef MOUSEKEY_ENABLE
            tap_code(KC_MS_WH_UP);
#else
            tap_code(KC_PGUP);
#endif
        }
    }
}

void dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0: {
#ifdef AUDIO_ENABLE
            static bool play_sound = false;
#endif
            if (active) {
#ifdef AUDIO_ENABLE
                if (play_sound) {
                    PLAY_SONG(plover_song);
                }
#endif
                layer_on(_ADJUST);
            } else {
#ifdef AUDIO_ENABLE
                if (play_sound) {
                    PLAY_SONG(plover_gb_song);
                }
#endif
                layer_off(_ADJUST);
            }
#ifdef AUDIO_ENABLE
            play_sound = true;
#endif
            break;
        }
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
        case RAISE:
        case LOWER:
            return false;
        default:
            return true;
    }
}
