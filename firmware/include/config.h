#ifndef CONFIG_H
#define CONFIG_H

// Wi-Fi Credentials Template
#define WIFI_SSID "YOUR_WIFI_SSID"
#define WIFI_PASSWORD "YOUR_WIFI_PASSWORD"

// MQTT Broker Configuration (Eclipse Mosquitto)
#define MQTT_BROKER_HOST "192.168.1.100"
#define MQTT_BROKER_PORT 1883
#define MQTT_CLIENT_ID "ESP32_SmartFan_Client"

// MQTT Topics
#define TOPIC_TELEMETRY "smartfan/telemetry"
#define TOPIC_CONTROL "smartfan/control"

// Hardware Pin Configuration
#define PIN_FAN_PWM 18
#define PIN_I2C_SDA 21
#define PIN_I2C_SCL 22
#define LCD_I2C_ADDR 0x27

// Rotary Encoder Pins (Operator Mode)
#define PIN_ENCODER_CLK 25
#define PIN_ENCODER_DT  26
#define PIN_ENCODER_SW  27

// System Thresholds & Timers
#define DEFAULT_TEMP_EMERGENCY_THRESHOLD 45.0f  // Exceed threshold -> EMERGENCY state (°C)
#define DEFAULT_TEMP_SAFE_RESTORE        40.0f  // Safe restore -> AUTO state (°C)
#define OPERATOR_TIMEOUT_MS              10000  // Timeout after manual knob action (10s) -> AUTO

// FreeRTOS & Watchdog (WDT) Configurations
#define WDT_TIMEOUT_SECONDS 5                   // Hardware Watchdog Timeout (seconds)
#define STACK_SIZE_SENSOR_TASK 4096             // Stack size for Sensor & LCD Task (bytes)
#define STACK_SIZE_NETWORK_TASK 8192            // Stack size for Wi-Fi & MQTT Task (bytes)
#define STACK_SIZE_CONTROL_TASK 4096            // Stack size for Fan PWM & Encoder Task (bytes)

#endif // CONFIG_H
