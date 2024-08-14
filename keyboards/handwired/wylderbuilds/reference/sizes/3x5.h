//
// Created by Andrew Langton on 2/19/24.
//
#import "layers.h"

#ifndef VIAL_QMK_3X5_H
#define VIAL_QMK_3X5_H
#endif //VIAL_QMK_3X5_H


const uint16_t PROGMEM QWERTY_WHOLE[] = {
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH
};

const uint16_t PROGMEM LOWER_WHOLE[] = {
        _______,_______,_______,_______,KC_LBRC,                     KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,KC_PLUS,
        KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                     KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,
        _______,_______,_______,_______,_______,                     _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL
};

const uint16_t PROGMEM RAISE_WHOLE[] = {
        KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                      KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,
        _______,_______,_______,_______,KC_LBRC,                     KC_RBRC,_______,KC_NUM,KC_INS ,KC_SCRL,
        KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                     KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,KC_VOLD
};


