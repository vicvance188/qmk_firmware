RGB_MATRIX_EFFECT(STATIC_ZONES)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool STATIC_ZONES(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        uint8_t zone = zones[i];
        rgb_t rgb = rgb_z[zone-1];
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
