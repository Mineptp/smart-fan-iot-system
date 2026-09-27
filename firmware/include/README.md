# ⚙️ Shared Configurations & Types (`/firmware/include`)

Global header configuration constants and shared data structures for the ESP32 Smart Fan firmware.

---

## 📁 Files Overview

### 1. [`config.h`](./config.h) — System Constants & Pin Mapping
- **Wi-Fi & Mosquitto MQTT**: Credentials, broker host (`192.168.1.100:1883`), and telemetry/control topics.
- **Hardware Pins**: Fan PWM (`GPIO 18`), I2C SDA/SCL (`GPIO 21/22`), LCD (`0x27`), Encoder (`GPIO 25/26/27`).
- **Safety & Timers**: Emergency threshold (`45°C`), restore threshold (`40°C`), and Operator timeout (`10s`).
- **FreeRTOS & WDT**: Hardware Watchdog timeout (`5s`) and task RAM stack allocations (`8KB` Network, `4KB` Sensor & Control).

### 2. [`types.h`](./types.h) — Data Structures & Enums
- **`SystemState` Enum**: `AUTO`, `REMOTE`, `OPERATOR`, `EMERGENCY` (matches system state diagram).
- **`TelemetryData` Struct**: Bundles temperature, humidity, PWM speed, active state, emergency flag, and device ID.
- **`ControlCommand` Struct**: Bundles downlink target state, PWM speed, and threshold updates.
