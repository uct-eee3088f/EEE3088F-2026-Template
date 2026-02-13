#ifndef DOA_ALGORITHM_H
#define DOA_ALGORITHM_H

#include <stdint.h>
#include <stddef.h>

/**
 * @brief Calculates the Direction of Arrival (Theta) for a 2-microphone setup.
 * * @param mic_left_data  Pointer to the buffer containing samples from the left mic.
 * @param mic_right_data Pointer to the buffer containing samples from the right mic.
 * @param N              Number of samples in each buffer.
 * @param d_mm           The distance between the two microphones in millimeters.
 * @param fs             The sampling frequency in Hertz.
 * * @return int8_t        The calculated angle of arrival in degrees (e.g., -90 to +90).
 * Returns a specific error code (e.g., -128) if detection fails.
 */
int8_t calculate_doa_angle_2mic(const int16_t* mic_left_data, const int16_t* mic_right_data, size_t N, float d_mm, uint32_t fs);

#endif
