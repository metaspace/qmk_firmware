#include QMK_KEYBOARD_H

static
void ctrl_gui_tap(uint16_t keycode) {
    register_code(KC_LCTRL);
    register_code(KC_LGUI);
    tap_code(keycode);
    unregister_code(KC_LGUI);
    unregister_code(KC_LCTRL);
}

static
void alt_gui_tap(uint16_t keycode) {
    register_code(KC_LALT);
    register_code(KC_LGUI);
    tap_code(keycode);
    unregister_code(KC_LGUI);
    unregister_code(KC_LALT);
}

static
void gui_tap(uint16_t keycode) {
    register_code(KC_LGUI);
    tap_code(keycode);
    unregister_code(KC_LGUI);
}

void encoder_update_user(uint8_t index, bool clockwise) {
    // Move focus to next/prev client
    if (IS_LAYER_ON(5)) {
        if (clockwise) {
            gui_tap(KC_J);
        } else {
            gui_tap(KC_K);
        }
    }
    // Move client to next/prev screen
    else if (IS_LAYER_ON(4)) {
        if (clockwise) {
            ctrl_gui_tap(KC_RIGHT);
        } else {
            ctrl_gui_tap(KC_LEFT);
        }
    }
    // Move client to next/prev tag
    else if (IS_LAYER_ON(3)) {
        if (clockwise) {
            alt_gui_tap(KC_RIGHT);
        } else {
            alt_gui_tap(KC_LEFT);
        }
    }
    // Move focus to next/prev tag
    else if (IS_LAYER_ON(2)) {
        if (clockwise) {
            gui_tap(KC_RIGHT);
        } else {
            gui_tap(KC_LEFT);
        }
    }
    // Move focus to next/prev screen
    else if (IS_LAYER_ON(1)) {
        if (clockwise) {
            ctrl_gui_tap(KC_J);
        } else {
            ctrl_gui_tap(KC_K);
        }
    }
    // Mouse wheel up/down
    else if (IS_LAYER_ON(0)) {
        if (clockwise) {
          tap_code(KC_MS_WH_DOWN);
        } else {
          tap_code(KC_MS_WH_UP);
        }
    }
}
