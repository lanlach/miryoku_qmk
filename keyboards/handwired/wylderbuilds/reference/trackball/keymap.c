
enum wyld_keycodes {
    WYLD_AUTO_MS_TOG = SAFE_RANGE
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [3] = LAYOUT_6x7_shift(
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,                                                                   _______,_______,_______,_______,
        _______, KC_BTN1,                                    _______,
        KC_BTN3, KC_BTN2,                                    _______,
        SNIPING, DRGSCRL,                           KC_MUTE, _______
        ),
    [4] = LAYOUT_6x7_shift(
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,                   _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,                                                                   _______,_______,_______,_______,
        _______, _______,                                    _______,
        _______, _______,                                    _______,
        _______, _______,                           KC_MUTE, _______
        )
};

void keyboard_post_init_user(void) {
    // Enable the LED layers
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

#ifdef RGBLIGHT_ENABLE
    rgblight_layers = my_rgb_layers;
#endif

#ifdef POINTING_DEVICE_COMBINED
    pointing_device_set_cpi_on_side(true, CHARYBDIS_DRAGSCROLL_DPI); // LEFT
    pointing_device_set_cpi_on_side(false, 2000);  // RIGHT
#endif
}

#ifdef POINTING_DEVICE_COMBINED
static void check_drag(report_mouse_t* mouse_report) {
    static int16_t scroll_buffer_x = 0;
    static int16_t scroll_buffer_y = 0;

#    ifdef CHARYBDIS_DRAGSCROLL_REVERSE_X
    scroll_buffer_x -= mouse_report->x;
#    else
    scroll_buffer_x += mouse_report->x;
#    endif  // CHARYBDIS_DRAGSCROLL_REVERSE_X
#    ifdef CHARYBDIS_DRAGSCROLL_REVERSE_Y
    scroll_buffer_y -= mouse_report->y;
#    else
    scroll_buffer_y += mouse_report->y;
#    endif  // CHARYBDIS_DRAGSCROLL_REVERSE_Y
    mouse_report->x = 0;
    mouse_report->y = 0;
    if (abs(scroll_buffer_x) > 6) {
        mouse_report->h = scroll_buffer_x > 0 ? 1 : -1;
        scroll_buffer_x = 0;
    }
    if (abs(scroll_buffer_y) > 6) {
        mouse_report->v = scroll_buffer_y > 0 ? 1 : -1;
        scroll_buffer_y = 0;
    }
}

report_mouse_t pointing_device_task_combined_user(report_mouse_t left_report, report_mouse_t right_report) {
    check_drag_scroll(&left_report); // updated in trackball.c
    return pointing_device_combine_reports(left_report, right_report);
}
#endif

#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
void pointing_device_init_user(void) {
    set_auto_mouse_enable(true);
}

// Ensures only the pointing device activates mouse layer on dual track builds
// And also prevents dragscroll from activating it
bool auto_mouse_activation(report_mouse_t mouse_report) {
    return mouse_report.x != 0 || mouse_report.y != 0 || mouse_report.buttons;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case WYLD_AUTO_MS_TOG:
            if (record->event.pressed) {
                set_auto_mouse_enable(!get_auto_mouse_enable());
            }
            return false; // Skip all further processing of this key
        default:
            return true; // Process all other keycodes normally
    }
}
#endif