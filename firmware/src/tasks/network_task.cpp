#include "network_task.h"
#include "config.h"
#include "wdt_manager.h"
#include "network.h"
#include "mqtt.h"

void startNetworkTask() {
    xTaskCreatePinnedToCore(
        networkTaskLoop,
        "Network_Task",
        STACK_SIZE_NETWORK_TASK,
        NULL,
        2,          // Higher priority for network stack
        NULL,       // Task handle
        0           // Core 0 (Network Stack Core)
    );
}

void networkTaskLoop(void *pvParameters) {
    registerTaskToWdt();
    
    for (;;) {
        // Maintain Wi-Fi & Mosquitto MQTT loop pattern
        processMqttLoop();
        feedWatchdog();
        vTaskDelay(pdMS_TO_TICKS(100)); // Short delay for network event loop
    }
}
