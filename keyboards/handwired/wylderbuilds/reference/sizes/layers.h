#include QMK_KEYBOARD_H

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

enum custom_layer {
    _QWERTY,
    _LOWER,
    _RAISE,
    _MOUSE
};

enum wyld_keycodes {
    WYLD_AUTO_MS_TOG = SAFE_RANGE,
    WYLD_DPI_UP,
    WYLD_DPI_DOWN,
    WYLD_DPI_RESET
};