#ifndef TYPES_H
#define TYPES_H

#include <Arduino.h>

/**
 * System States matching State Diagram:
 * - AUTO: Automatic speed control based on temperature curve
 * - REMOTE: Speed control over App / Web Dashboard
 * - OPERATOR: Manual speed control via Rotary Encoder hardware knob
 * - EMERGENCY: Safety threshold exceeded (e.g. Temp > Threshold)
 */
enum class SystemState {
    AUTO,
    REMOTE,
    OPERATOR,
    EMERGENCY
};

struct TelemetryData {
    float temperature;
    float humidity;
    uint8_t fan_speed_pwm;
    float temp_threshold;      // Safety threshold value
    SystemState state;          // Current active system state
    bool is_emergency;          // Emergency alert flag
    bool app_connected;         // App connectivity flag
    char device_id[32];
};

struct ControlCommand {
    SystemState target_state;
    uint8_t pwm_speed;
    float new_temp_threshold;
};

#endif // TYPES_H
