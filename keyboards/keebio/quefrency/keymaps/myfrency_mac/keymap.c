// My Quefrency layout for Mac
// by Jin Kim, Jan 2024


#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum custom_layer {
    _BASE,
    _FN1,
    _FN2,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  _______, KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, 
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, _______,
    KC_LCTL, KC_LALT, KC_LGUI, KC_LCTL, MO(_FN1),         _______, KC_SPC,  KC_RALT, MO(_FN1), _______,MO(_FN2), KC_RCTL
  ),

  [_FN1] = LAYOUT_60(
    KC_ESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_DEL,
    _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, KC_UP, _______, KC_PSCR,  KC_PGUP,  KC_PGDN, _______, 
    KC_CAPS, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_INS, KC_DEL, _______, 
    _______, _______, _______, _______, _______, _______, KC_END, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______,  _______,         _______,  _______, _______, _______, _______, _______, _______
  ),

  [_FN2] = LAYOUT_60(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    RGB_TOG, RGB_MOD, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, QK_BOOT, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_BRID, _______, KC_BRIU, _______,  _______,         _______,  _______, _______, _______, _______, _______, _______
  )
};
