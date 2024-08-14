#if defined(ENCODER_ENABLE) && !defined(ENCODER_MAP_ENABLE)
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGUP);
        } else {
            tap_code(KC_PGDN);
        }
    }
    return false;
}
#endif

// ONE ENCODER
#if defined(ENCODER_MAP_ENABLE)
#if NUM_ENCODERS == 1
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] =   { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP) },
    [_LOWER] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_RAISE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#elif NUM_ENCODERS == 2
// TWO ENCODERS
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] =  { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_LOWER] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_RAISE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
};
#endif