# ⚡ ESP32 Firmware (`/firmware`)

Multi-threaded Embedded C++ firmware for the Smart Fan IoT controller running on ESP32 using **FreeRTOS**, **Task Watchdog Timer (WDT)**, **PlatformIO**, and the Arduino framework.

---

## 📁 Directory Structure

```
firmware/
├── include/              # Shared header files & global configs
│   ├── config.h          # Pins, Wi-Fi, Mosquitto MQTT, WDT & Task configs
│   └── types.h           # SystemState enum (AUTO, REMOTE, OPERATOR, EMERGENCY) & structs
├── src/
│   ├── modules/          # Hardware Drivers & Networking Subsystems
│   │   ├── display/      # I2C LCD display driver
│   │   ├── env_sensor/   # AHTX0 temp & humidity sensor driver
│   │   ├── fan_controller/# PWM motor speed controller
│   │   ├── mqtt_client/  # Mosquitto MQTT communication module
│   │   └── network/      # Wi-Fi network connection manager
│   ├── tasks/            # FreeRTOS Multi-threaded Tasks
│   │   ├── network_task.cpp  # Core 0: Wi-Fi & MQTT event loop
│   │   ├── sensor_task.cpp   # Core 1: AHTX0 sensor reading & LCD render
│   │   └── control_task.cpp  # Core 1: Encoder knob & Fan PWM control
│   ├── sys/              # System Safety & Watchdog Management
│   │   └── wdt_manager.cpp   # Task Watchdog Timer (WDT) feeder & monitor
│   └── main.cpp          # Application entry point (WDT & Task initialization)
├── platformio.ini        # PlatformIO dependencies & build configuration
└── README.md
```

---

## ⚙️ FreeRTOS & Dual-Core Task Allocation

- **Core 0 (Network Stack)**: `network_task` running Wi-Fi and Mosquitto MQTT loop.
- **Core 1 (Peripherals & UI)**: `sensor_task` (AHTX0 & LCD) and `control_task` (Encoder & Fan PWM).
- **Watchdog (WDT)**: Monitors all tasks; automatically reboots ESP32 if any task hangs for longer than `WDT_TIMEOUT_SECONDS` (5s).

---

## 🚀 How to Run

1. Open this directory in **VS Code** with **PlatformIO**.
2. Configure Wi-Fi & MQTT broker details in [`include/config.h`](file:///d:/YEAR3/EMBEDDED%20PROJECT/smart-fan-iot-system/firmware/include/config.h).
3. **Build**: `pio run`
4. **Upload**: `pio run --target upload`
5. **Serial Monitor**: `pio device monitor`
