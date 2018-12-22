#include QMK_KEYBOARD_H
#define _BL 0
#define _FL0 1
#define _FL1 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Keymap _BL: (Base Layer) Default Layer
	*/
	[_BL] = LAYOUT_60_ansi(
			       KC_GRV,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC, \
			       KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS, \
			       KC_ESC, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         KC_ENT,  \
			       KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,         KC_RSFT, \
			       KC_LCTL, KC_LGUI,KC_LALT,                KC_SPC,                                 KC_RALT,MO(_FL0), MO(_FL1),KC_RCTL),

	/* Keymap _FL0: Function Layer
	*/
	[_FL0] = LAYOUT_60_ansi(
				KC_ESC, KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_DEL,  \
				_______,KC_MPRV,KC_MPLY,KC_MNXT,_______,_______,_______,_______,KC_UP,_______,KC_PSCR, KC_PGUP, KC_PGDN,_______, \
				KC_CAPS,_______,KC_VOLD,KC_VOLU,KC_MUTE,_______,KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT,KC_INS,KC_DEL,_______, \
				_______,KC_APP,_______,_______,_______,_______,KC_END,_______,_______,_______,_______,_______, \
				_______,_______,_______,                _______,                        _______,_______,_______,_______),

	/* Keymap _FL1: Function Layer
	*/
	[_FL1] = LAYOUT_60_ansi(
				_______, _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,  \
				_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, _______, _______,RESET, \
				_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
				_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______, \
				_______,_______,_______,                _______,                        _______,_______,_______,_______),
};

