#include <Arduino.h>
#include "config.h"
#include "types.h"
#include "wdt_manager.h"
#include "network.h"
#include "mqtt.h"
#include "env_sensor.h"
#include "display.h"
#include "fan_controller.h"
#include "sensor_task.h"
#include "network_task.h"
#include "control_task.h"

void setup() {
    Serial.begin(115200);
    Serial.println("==========================================");
    Serial.println("🌀 ESP32 Smart Fan Firmware (FreeRTOS & WDT)");
    Serial.println("==========================================");

    // 1. Initialize System Watchdog (WDT)
    initWatchdog();

    // 2. Initialize Hardware Modules & Drivers
    initWifiNetwork();
    initMqttClient();
    initEnvSensor();
    initDisplay();
    initFanController();

    // 3. Start FreeRTOS Tasks Pinned to Cores
    startNetworkTask();  // Core 0 (Wi-Fi & MQTT)
    startSensorTask();   // Core 1 (AHTX0 Sensor & LCD Display)
    startControlTask();  // Core 1 (PWM Fan & Encoder Knob)

    Serial.println("[System] All FreeRTOS Tasks Started Successfully!");
}

void loop() {
    // In FreeRTOS architecture, main loop is suspended; tasks execute independently
    vTaskDelay(pdMS_TO_TICKS(10000));
}
