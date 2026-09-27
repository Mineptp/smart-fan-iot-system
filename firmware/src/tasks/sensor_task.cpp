#include "sensor_task.h"
#include "config.h"
#include "wdt_manager.h"
#include "env_sensor.h"
#include "display.h"

void startSensorTask() {
    xTaskCreatePinnedToCore(
        sensorTaskLoop,
        "Sensor_Task",
        STACK_SIZE_SENSOR_TASK,
        NULL,
        1,          // Task priority
        NULL,       // Task handle
        1           // Core 1
    );
}

void sensorTaskLoop(void *pvParameters) {
    registerTaskToWdt();
    
    for (;;) {
        // Read sensor telemetry & update LCD display pattern
        feedWatchdog();
        vTaskDelay(pdMS_TO_TICKS(2000)); // Delay 2s
    }
}
