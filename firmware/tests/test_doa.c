#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <assert.h>
#include "doa_engine.h"

#define PI 3.14159265358979323846
#define SPEED_OF_SOUND 343.0 // m/s

void generate_test_buffers(int16_t* left, int16_t* right, size_t N, float target_angle_deg, float d_mm, uint32_t fs) {
    float freq = 1000.0; // 1kHz test tone
    float d_m = d_mm / 1000.0;
    
    // Time delay: delta_t = (d * sin(theta)) / v
    float target_rad = target_angle_deg * (PI / 180.0);
    float delta_t = (d_m * sin(target_rad)) / SPEED_OF_SOUND;

    for (size_t i = 0; i < N; i++) {
        float t = (float)i / fs;
        left[i] = (int16_t)(10000 * sin(2 * PI * freq * t));
        right[i] = (int16_t)(10000 * sin(2 * PI * freq * (t - delta_t)));
    }
}

int main() {
    uint32_t fs = 48000;
    size_t N = 1024;
    float d_mm = 50.0;
    int16_t* mic_L = malloc(N * sizeof(int16_t));
    int16_t* mic_R = malloc(N * sizeof(int16_t));

    // Test Case: 30 Degrees
    int8_t expected = 30;
    generate_test_buffers(mic_L, mic_R, N, (float)expected, d_mm, fs);
    
    int8_t result = calculate_doa_angle_2mic(mic_L, mic_R, N, d_mm, fs);

    printf("Testing 30 degrees... Result: %d\n", result);
    
    // Allow for +/- 2 degree tolerance due to sampling quantization
    if (abs(result - expected) <= 2) {
        printf("PASSED\n");
    } else {
        printf("FAILED: Expected ~%d, got %d\n", expected, result);
        free(mic_L); free(mic_R);
        return 1; // Exit with error for GitHub Autograder
    }

    free(mic_L);
    free(mic_R);
    return 0;
}
