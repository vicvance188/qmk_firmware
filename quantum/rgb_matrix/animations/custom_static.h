RGB_MATRIX_EFFECT(CUSTOM_STATIC)
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool CUSTOM_STATIC(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    for (uint8_t i = led_min; i < led_max; i++) {
        RGB_MATRIX_TEST_LED_FLAGS();
        uint8_t flag = g_led_config.flags[i];
        if (flag == 4) {
            rgb_matrix_set_color(i, 255, 31, 0);
        } else if (flag == 1) {
            rgb_matrix_set_color(i, 255, 0, 255);
        } else if (flag == 2) {
            rgb_matrix_set_color(i, 0, 0, 255);
        }
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
