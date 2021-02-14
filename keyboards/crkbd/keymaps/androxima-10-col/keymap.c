#include QMK_KEYBOARD_H

enum layer_names { _QWERTY, _DVORAK, _LOWER, _RAISE, _ADJUST, _NUMBER, _LOL, _LOL_F};

#define QWERTY TO(_QWERTY)
#define DVORAK TO(_DVORAK)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define NUMBER MO(_NUMBER)

#define LOENT LT(_LOWER, KC_ENT)
#define RASPC LT(_RAISE, KC_SPC)
#define ADJSPC LT(_ADJUST, KC_SPC)
#define NUMESC LT(_NUMBER, KC_ESC)
#define LOWENT LT(_LOWER, KC_ENT)
#define ESCC LCTL_T(KC_ESC)
#define SFTENT KC_SFTENT
#define GUIC LCTL_T(KC_LGUI)
#define _LSFT KC_LSFT
#define COMM KC_COMM
#define ESCC LCTL_T(KC_ESC)
#define BSPC_A LALT_T(KC_BSPC)

// Left-hand home row mods
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define CTL_SCLN RCTL_T(KC_SCLN)

#define LOL TO(_LOL)
#define LOL_F LT(_LOL_F,KC_SPC)

#define CCTL LCTL_T(KC_C)
#define VALT LALT_T(KC_V)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(
		KC_NO,  KC_Q, 	KC_W, 	KC_E, 	KC_R, 	KC_T, 			KC_Y, 	KC_U, 	KC_I, 	KC_O, 	KC_P, 		KC_NO, 
		KC_NO, 	CTL_A,  ALT_S,  GUI_D,  SFT_F,  KC_G,           KC_H,   SFT_J,  GUI_K,  ALT_L,  CTL_SCLN, 	KC_NO, 
		KC_NO, 	KC_Z, 	KC_X, 	KC_C, 	KC_V, 	KC_B, 			KC_N, 	KC_M, 	COMM, 	KC_DOT, KC_SLSH, 	KC_NO,
									KC_LGUI,  LOWENT, SFTENT, KC_BSPC,  RASPC,  NUMESC
	),
	[_DVORAK] = LAYOUT(
		KC_TAB, KC_QUOT,KC_COMM,KC_DOT,	KC_P, 	KC_Y, 			KC_F, 	KC_G, 	KC_C, 	KC_R, 	KC_L, 		KC_BSPC, 
		ESCC, 	KC_A, 	KC_O, 	KC_E, 	KC_U, 	KC_I, 			KC_D, 	KC_H, 	KC_T, 	KC_N, 	KC_S, 		KC_SLSH, 
		_LSFT, 	KC_SCLN,KC_Q, 	KC_J, 	KC_K, 	KC_X, 			KC_B, 	KC_M, 	KC_W, 	KC_V, 	KC_Z, 		SFTENT, 
									KC_LGUI, 	LOWER, SFTENT, BSPC_A,  RASPC,  NUMBER
	),
	[_LOWER] = LAYOUT(
		KC_TILD, KC_NO, KC_7, 	KC_8, 	KC_9, 	KC_0, 		    KC_CIRC,    KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL, 
		KC_NO, KC_NO, KC_4, 	KC_5, 	KC_6, 	KC_NO, 			KC_NO,    KC_PLUS, KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE, 
		KC_NO, 	 KC_0, 	KC_1, 	KC_2, 	KC_3, 	KC_NO, 			KC_NO,      KC_MINS, KC_UNDS, KC_LBRC, KC_RBRC, SFTENT, 
									KC_LGUI, KC_TRNS, KC_LSFT, BSPC_A, ADJSPC, NUMBER
	),
	[_RAISE] = LAYOUT(
		KC_GRV,  KC_EXLM, KC_AT, 	KC_HASH, KC_DLR, KC_PERC, 		KC_CIRC, 	KC_AMPR, 	KC_ASTR, 	KC_LPRN, 	KC_RPRN, 	KC_DEL, 
		KC_LCTL, KC_TAB, KC_PGDN, 	KC_PGUP, KC_END, KC_NO, 		KC_LEFT, 	KC_DOWN, 	KC_UP, 		KC_RGHT, 	KC_QUOT, 	KC_BSLS,
		_LSFT, 	 KC_NO,   KC_NO, 	KC_NO, 	KC_NO, 	KC_L, 			KC_HOME, 	KC_PGDN, 	KC_PGUP, 	KC_END, 	KC_NO, 		KC_NO, 
									KC_LCTRL,LOWER,  KC_LALT,    BSPC_A, KC_TRNS, NUMBER
	),
	[_ADJUST] = LAYOUT(
		RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 		            KC_NO, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO, LOL, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,	 	            KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_NO, QWERTY, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 		            KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, DVORAK, 
								KC_LGUI, KC_TRNS,KC_LSFT,       BSPC_A, KC_TRNS, NUMBER
	),
	[_NUMBER] = LAYOUT(
		KC_TAB, KC_1, 	KC_2, 	KC_3, 	KC_4, 	KC_5, 			KC_6, 	KC_7, 	KC_8, 	KC_9, 	KC_0, 		KC_NO, 
		ESCC, 	KC_F1, 	KC_F2, 	KC_F3, 	KC_F4, 	KC_F5, 			KC_F6, 	KC_F7,   KC_8, 	KC_9, 	KC_F10, 	KC_NO, 
		_LSFT, 	KC_Z, 	KC_X, 	KC_C, 	KC_V,   KC_B, 	    	KC_N,   KC_M,   COMM, 	KC_DOT, KC_SLSH,	KC_NO, 
									GUIC, 	LOWER, KC_LSFT, BSPC_A,  RASPC,  KC_TRNS
	),
	[_LOL] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, 	KC_4,	KC_5, 				KC_Y, KC_NO, KC_NO, KC_NO, KC_P, QWERTY, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 					KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		_LSFT, 	KC_A, KC_S, KC_D, KC_F, KC_G, 					KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
									KC_LCTL, LOL_F, VALT, 	KC_NO, KC_NO, KC_NO
	),
	[_LOL_F] = LAYOUT(
		KC_NO, KC_6, KC_7, KC_NO, KC_6, KC_7, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_B, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
									KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	),
};
