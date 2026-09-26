#include <Arduino.h>
#include "config.h"
#include "types.h"

void setup() {
    Serial.begin(115200);
    Serial.println("==========================================");
    Serial.println("🌀 ESP32 Smart Fan Firmware - PlatformIO");
    Serial.println("==========================================");
}

void loop() {
    // Main application loop
    delay(1000);
}
