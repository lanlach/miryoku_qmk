#include QMK_KEYBOARD_H
#include "5x7_full_carbonfet.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x7(
        KC_ESC , KC_1, KC_2, KC_3, KC_4, KC_5, KC_LBRC,                 KC_RBRC, KC_6, KC_7, KC_8,   KC_9,   KC_0,    KC_MINS,
        KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LPRN,                 KC_RPRN, KC_Y, KC_U, KC_I,   KC_O,   KC_P,    KC_BSLS,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_PLUS,                 KC_EQL,  KC_H, KC_J, KC_K,   KC_L,   KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,                                   KC_N, KC_M, KC_COMM,KC_DOT ,KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_LGUI, KC_LBRC,KC_RBRC,                                    KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_RCTL,
                                            RAISE, KC_SPC, KC_HOME,     KC_END, KC_ENT, LOWER,
                                            KC_TAB, KC_BSPC,KC_GRV,     KC_RALT, KC_RGUI, KC_DEL
        ),

    [_LOWER] = LAYOUT_5x7(
        _______,KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                  KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,_______,
        _______,_______,_______,_______,_______,_______,KC_LBRC,                  KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,_______,
        _______,_______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                  KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,_______,
        _______,RGB_VAI,RGB_SAI,RGB_HUI,RGB_MOD,RGB_TOG,                                   KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,_______,
        _______,_______,_______,_______,KC_PSCR,                                                 _______, KC_P0,_______,_______,_______,
                                             _______,_______,_______,          _______,_______,_______,
                                             _______,_______,_______,          QK_BOOT,_______,_______
        ),

    [_RAISE] = LAYOUT_5x7(
        _______,KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_LBRC,                    KC_RBRC, KC_F6, KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
        _______,_______,_______,_______,_______,_______,KC_LPRN,                    KC_RPRN,_______,KC_NUM,KC_INS ,KC_SCRL,KC_MUTE,KC_F12,
        _______,KC_LEFT,KC_UP,KC_DOWN,KC_RGHT,  _______,_______,                    _______,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,_______,
        _______,_______,_______,_______,_______,_______,                                   _______,_______,_______,_______,KC_VOLD,_______,
        _______,_______,_______,_______,_______,                                                   KC_EQL ,_______,_______,_______,_______,
                                             _______,_______,_______,           _______,_______,_______,
                                             _______,_______,QK_BOOT,           _______,_______,_______
         )
};

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM querty_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 3, HSV_RED},       // Light 4 LEDs, starting with LED 6
    {33, 3, HSV_RED}      // Light 4 LEDs, starting with LED 6
);
const rgblight_segment_t PROGMEM lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 3, HSV_BLUE},
    {33, 3, HSV_BLUE}
);
const rgblight_segment_t PROGMEM raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 3, HSV_YELLOW},
    {33, 3, HSV_YELLOW}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    querty_layer,    // Overrides caps lock layer
    lower_layer,    // Overrides other layers
    raise_layer     // Overrides other layers
);

//bool led_update_user(led_t led_state) {
//    rgblight_set_layer_state(0, led_state.caps_lock);
//    return true;
//}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _LOWER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _RAISE));
    return state;
}
#endif

void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_layers = my_rgb_layers;
#endif
#ifdef CONSOLE_ENABLE
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
    debug_mouse=true;
#else
    debug_enable=false;
    debug_matrix=false;
    debug_keyboard=false;
    debug_mouse=false;
#endif
}
