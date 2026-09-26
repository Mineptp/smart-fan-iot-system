# ⚡ ESP32 Firmware (`/firmware`)

Embedded C++ firmware for the Smart Fan IoT controller running on ESP32 using **PlatformIO** and the Arduino framework.

---

## 📁 Directory Structure

```
firmware/
├── include/              # Shared header files & global configs
│   ├── config.h          # Pins, Wi-Fi & Mosquitto MQTT credentials
│   └── types.h           # Shared structs & types
├── src/
│   ├── main.cpp          # Application entry point (setup & loop)
│   └── modules/          # Modular hardware drivers & networking
│       ├── display/      # I2C LCD display driver
│       ├── env_sensor/   # AHTX0 temp & humidity sensor driver
│       ├── fan_controller/# PWM motor speed controller
│       ├── mqtt_client/  # Mosquitto MQTT communication module
│       └── network/      # Wi-Fi network connection manager
├── platformio.ini        # PlatformIO dependencies & build configuration
└── README.md
```

---

## 🚀 How to Run

1. Open this directory in **VS Code** with **PlatformIO**.
2. Configure Wi-Fi & MQTT broker details in [`include/config.h`](file:///d:/YEAR3/EMBEDDED%20PROJECT/smart-fan-iot-system/firmware/include/config.h).
3. **Build**: `pio run`
4. **Upload**: `pio run --target upload`
5. **Serial Monitor**: `pio device monitor`
