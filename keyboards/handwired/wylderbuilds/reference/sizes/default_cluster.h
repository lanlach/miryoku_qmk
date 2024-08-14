#import "layers.h"

const uint16_t PROGMEM QWERTY_RIGHT[3][] = {
    {
        RAISE, KC_SPC
    },
    {
        KC_TAB, KC_HOME
    },
    {
        KC_BSPC, KC_GRV
    }
};

const uint16_t PROGMEM QWERTY_LEFT[3][] = {
    {
        KC_ENT, LOWER
    },
    {
        KC_DEL,  KC_HOME
    },
    {
        KC_LGUI, KC_LALT
    }
};
