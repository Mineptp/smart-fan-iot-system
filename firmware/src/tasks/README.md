# 🔄 FreeRTOS Tasks (`/firmware/src/tasks`)

This directory contains the multi-threaded FreeRTOS task implementations pinned to ESP32 dual cores:

| Task File | Core | Priority | Description |
| :--- | :---: | :---: | :--- |
| **`network_task.cpp`** | **Core 0** | 2 (High) | Manages Wi-Fi connection state & Mosquitto MQTT event loop (`processMqttLoop()`). |
| **`sensor_task.cpp`** | **Core 1** | 1 (Normal) | Reads AHTX0 temperature/humidity sensor and updates LCD display every 2s. |
| **`control_task.cpp`** | **Core 1** | 2 (High) | Scans Rotary Encoder knob inputs and updates fan PWM speed output. |
