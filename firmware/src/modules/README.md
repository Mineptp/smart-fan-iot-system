# 📦 Firmware Modules

Modular hardware drivers and networking subsystems for the ESP32 Smart Fan controller:

| Module | Files | Responsibility |
| :--- | :--- | :--- |
| **`display`** | `display.h`, `display.cpp` | I2C LCD screen driver for telemetry & status display. |
| **`env_sensor`** | `env_sensor.h`, `env_sensor.cpp` | AHTX0 temperature and humidity sensor driver. |
| **`fan_controller`** | `fan_controller.h`, `fan_controller.cpp` | PWM motor control & fan speed adjustment. |
| **`mqtt_client`** | `mqtt.h`, `mqtt.cpp` | EMQX MQTT pub/sub client handler. |
| **`network`** | `network.h`, `network.cpp` | Wi-Fi connection manager and reconnect handler. |
