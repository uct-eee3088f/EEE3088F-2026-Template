#include "doa_engine.h"

/**
 * Milestone 3: Direction of Arrival Implementation
 * * Students: Implement your DOA logic below. Your implementation should 
 * use the cross-correlation of mic_left_data and mic_right_data to 
 * determine the incident angle of the sound source.
 */
int8_t calculate_doa_angle_2mic(const int16_t* mic_left_data, const int16_t* mic_right_data, size_t N, float d_mm, uint32_t fs) {
    
    // TODO: Implement cross-correlation to find time lag
    // TODO: Convert lag to angle based on microphone spacing (d_mm)
    // TODO: Return angle in degrees (-90 to 90)

    return 0; // Default return to allow compilation
}
