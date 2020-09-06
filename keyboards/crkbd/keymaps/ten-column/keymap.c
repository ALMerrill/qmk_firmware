#include QMK_KEYBOARD_H


enum layer_names { _QWERTY, _LOWER, _RAISE, _ADJUST, _NUMBER, _LOL, _LOL_F};

// Mod Tap keys
#define RASPC LT(_RAISE, KC_SPC)
#define BACNUM LT(_NUMBER, KC_BSPC)
#define DELNUM LT(_NUMBER, KC_DEL)
#define GUIC LCTL_T(KC_LGUI)
#define ENTALT LALT_T(KC_ENT)
#define SFTA LSFT_T(KC_A)
#define SFTENT KC_SFTENT


// Toggle layers
#define QWERTY TO(_QWERTY)
#define LOL TO(_LOL)
#define LOL_F LT(_LOL_F,KC_SPC)

// Go to layer
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)
#define NUMBER MO(_NUMBER)

// For LoL
#define CCTL LCTL_T(KC_C)
#define VALT LALT_T(KC_V)


// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
//   LOWER,
//   RAISE,
//   ADJUST,
//   NUMBER,
//   LOL,
//   LOL_F,
// };

enum macro_keycodes {
  KC_SAMPLEMACRO,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,    KC_NO,  \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    SFTA,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,   KC_K,    KC_L,   SFTENT,  KC_NO,  \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_NO,  \
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          GUIC,   LOWER,  KC_LSFT,     ENTALT,  RASPC,  BACNUM \
                                      //`--------------------------'  `--------------------------'
  ),

  [_LOWER] = LAYOUT( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,    KC_TAB, KC_7,    KC_8,    KC_9,    KC_0,                         KC_SCLN, KC_MINS, KC_UNDS, KC_LPRN, KC_RPRN, KC_NO, \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_GRV, KC_4,    KC_5,    KC_6,    KC_NO,                        KC_COLN, KC_PLUS, KC_EQL,  KC_LCBR, KC_RCBR, KC_NO, \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,    KC_0,   KC_1,    KC_2,    KC_3,    KC_L,                         KC_NO,   KC_MINS, KC_UNDS, KC_LBRC, KC_RBRC, KC_NO, \
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, KC_TRNS,  KC_TRNS,     KC_ESC,   RAISE, DELNUM \
                                      //`--------------------------'  `--------------------------'
  ),

  [_RAISE] = LAYOUT( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,  KC_EXLM,  KC_AT,  KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,  KC_TILD,  KC_PIPE,XXXXXXX,  KC_ESC, XXXXXXX,                      KC_LEFT,  KC_DOWN, KC_UP, KC_RIGHT, KC_QUOT, KC_NO, \
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_L,                        KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_BSLS, KC_NO, \
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   LOWER,  KC_LSFT,     KC_TRNS,   KC_TRNS, KC_TRNS \
                                      //`--------------------------'  `--------------------------'
  ),

  [_ADJUST] = LAYOUT( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,    RESET,  KC_NO,  XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LOL,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_NO,   KC_NO,   KC_NO,  XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QWERTY,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_NO,   KC_NO,   KC_NO,  XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS,KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS \
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUMBER] = LAYOUT( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_NO,   KC_1,    KC_2,    KC_3,   KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NO,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,                        KC_F6,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,                       KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS,KC_TRNS,  KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS \
                                      //`--------------------------'  `--------------------------'
  ),
  [_LOL] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, 	KC_4,	KC_5, 				KC_Y, KC_NO, KC_NO, KC_NO, KC_P, QWERTY, 
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 					KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_LSFT,KC_A, KC_S, KC_D, KC_F, KC_G, 					KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
									KC_LCTL, LOL_F, VALT, 	KC_NO, KC_NO, KC_NO
  ),
  [_LOL_F] = LAYOUT(
		KC_NO, KC_6, KC_7, KC_NO, KC_6, KC_7, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_NO, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_B, KC_B, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
									KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),

  
};

