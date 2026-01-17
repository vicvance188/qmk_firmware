RGB_MATRIX_EFFECT(STATIC_ZONES)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool STATIC_ZONES(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        uint8_t zone = zones[i];
        switch (zone) {
        case 1:
            rgb_matrix_set_color(i, 0xff, 0x2f, 0x00);
            break;
        case 2:
            rgb_matrix_set_color(i, 0xff, 0x00, 0xff);
            break;
        case 3:
            rgb_matrix_set_color(i, 0x00, 0x7f, 0xff);
            break;
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
