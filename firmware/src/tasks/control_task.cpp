#include "control_task.h"
#include "config.h"
#include "wdt_manager.h"
#include "fan_controller.h"

void startControlTask() {
    xTaskCreatePinnedToCore(
        controlTaskLoop,
        "Control_Task",
        STACK_SIZE_CONTROL_TASK,
        NULL,
        2,          // Priority 2
        NULL,       // Task handle
        1           // Core 1
    );
}

void controlTaskLoop(void *pvParameters) {
    registerTaskToWdt();
    
    for (;;) {
        // Read Rotary Encoder knob & output PWM duty cycle pattern
        feedWatchdog();
        vTaskDelay(pdMS_TO_TICKS(50)); // Fast polling for responsive knob control
    }
}
