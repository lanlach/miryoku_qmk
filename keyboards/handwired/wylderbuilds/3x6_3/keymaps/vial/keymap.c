#include QMK_KEYBOARD_H

#include "3x6_3.h"

#define _QWERTY 0
#define _RAISE 1
#define _LOWER 2


#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define ____ KC_TRANSPARENT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x6_3(
        KC_ESC , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                     KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
        KC_TAB,  KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                     KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                     KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLS,
                                    RAISE,   KC_SPC,  KC_TAB,          KC_LCTRL, KC_ENT, LOWER
        ),
    [_RAISE] = LAYOUT_split_3x6_3(
        _______,_______,_______,_______,_______,KC_LBRC,                    KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
        QK_BOOT,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                    KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
        _______,_______,_______,_______,_______,_______,                    _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                                    _______,   _______,  _______,      _______, _______, _______
            ),

    [_LOWER] = LAYOUT_split_3x6_3(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                    KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
        _______,_______,_______,_______,_______,KC_LBRC,                    KC_RBRC,_______,KC_NUM,KC_INS ,KC_SCRL,QK_BOOT,
        _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                    KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,KC_VOLD,KC_VOLU,
                                    _______,   _______,  _______,      _______, _______, _______
        )
};

