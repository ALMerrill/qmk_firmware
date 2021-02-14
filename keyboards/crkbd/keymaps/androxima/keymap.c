#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
		LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_SFTENT, 
		LCTL_T(KC_LGUI), MO(LOWER), LSFT_T(KC_ENT), KC_SPC, MO(RAISE), KC_RALT
	),
	[_LOWER] = LAYOUT(
		KC_GRV, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_PSCR, KC_DEL, 
		KC_LCTL, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_INS, KC_BSLS, 
		KC_LSFT, KC_0, KC_1, KC_2, KC_3, KC_L, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_LGUI, KC_TRNS, LSFT_T(KC_ENT), KC_SPC, MO(ADJUST), KC_RALT
	),
	[_RAISE] = LAYOUT(
		KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, 
		KC_LCTL, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_UNDS, KC_PLUS, KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE, 
		KC_LSFT, KC_F6, KC_7, KC_8, KC_9, KC_F10, KC_NO, KC_MINS, KC_UNDS, KC_RBRC, KC_BSLS, KC_TILD, 
		KC_LGUI, MO(ADJUST), LSFT_T(KC_ENT), KC_SPC, KC_TRNS, KC_RALT
	),
	[_ADJUST] = LAYOUT(
		RESET, KC_NO, KC_NO, KC_NO, KC_NO, 	KC_NO, 				KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, LOL, 
		RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_L, KC_NO,	 	KC_WSCH, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, 
		RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_NO, KC_L, 		KC_WBAK, KC_WFWD, KC_BRID, KC_BRIU, KC_NO, KC_NO, 
									KC_LGUI, KC_TRNS,SFTENT, KC_SPC, KC_TRNS, KC_RALT
	),
	[_LOL] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, 	KC_4,	KC_5, 				KC_Y, KC_NO, KC_NO, KC_P, KC_NO, QWERTY, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 					KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, _TYPE, 
		_LSFT, 	KC_A, KC_S, KC_D, KC_F, KC_G, 					KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
									KC_LCTL, LOL_F, VALT, 	KC_NO, KC_NO, KC_NO
	),
	[_LOL_F] = LAYOUT(
		KC_NO, KC_6, KC_7, KC_NO, KC_6, KC_7, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_NO, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
									KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	),
	[_LOL_TYPE] = LAYOUT(
		KC_TAB, KC_Q, 	KC_W, 	KC_E, 	KC_R, 	KC_T, 			KC_Y, 	KC_U, 	KC_I, 	KC_O, 	KC_P, 		KC_BSPC, 
		ESCC, 	KC_A, 	KC_S, 	KC_D, 	KC_F, 	KC_G, 			KC_H, 	KC_J, 	KC_K, 	KC_L, 	KC_SCLN, 	KC_TRNS, 
		_LSFT, 	KC_Z, 	KC_X, 	KC_C, 	KC_V, 	KC_B, 			KC_N, 	KC_M, 	COMM, 	KC_DOT, KC_SLSH, 	SFTENT, 
									GUIC, 	KC_NO, SFTENT, 	KC_SPC, KC_NO, 	LOL
	),
	[_LOL_TYPE_2] = LAYOUT(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LOL, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
									KC_NO, KC_NO, KC_NO, 	KC_NO, KC_TRNS, KC_NO
	),
};
