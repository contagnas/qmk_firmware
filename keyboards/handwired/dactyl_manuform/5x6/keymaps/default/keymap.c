/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _VIM 3

#define RSE MO(_RAISE)
#define LWR MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT_5x6(
                         KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,   /*|*/ KC_6,   KC_7,  KC_8,     KC_9,   KC_0,     KC_DEL,
                         KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,   /*|*/ KC_Y,   KC_U,  KC_I,     KC_O,   KC_P,     KC_BSLS,
                         KC_ESC,  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,   /*|*/ KC_H,   KC_J,  KC_K,     KC_L,   KC_BSPC,  KC_QUOT,
                         KC_LSFT, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,   /*|*/ KC_N,   KC_M,  KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
                                         KC_NO, KC_NO,                /*|*/                KC_NO,  KC_NO,
                                                       LWR,   KC_ENT, /*|*/ KC_SPC, RSE,
                                                   KC_LCTL,  KC_LGUI, /*|*/ KC_RGUI,  KC_RCTL,
                                                   KC_LALT, MO(_VIM), /*|*/ MO(_VIM), KC_RALT
  ),

  [_LOWER] = LAYOUT_5x6(
                        KC_F12,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,
                        KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,                   KC_6  ,  KC_7,  KC_8,  KC_9,  KC_0   ,  KC_DEL,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_EQL,  KC_LBRC,  KC_RBRC,  KC_MINS,  KC_SCLN,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
                        ),

  [_RAISE] = LAYOUT_5x6(
                        KC_F12,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LPRN,  KC_RPRN,  KC_TRNS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_UNDS,  KC_COLN,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                        KC_TRNS,  KC_TRNS, RESET,  KC_TRNS
                        ),

  [_VIM] = LAYOUT_5x6(
                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                      KC_TRNS,  KC_TRNS, LCTL(KC_RIGHT),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RGHT,  KC_TRNS,  KC_TRNS,
                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, LCTL(KC_LEFT),  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
                      )
};
