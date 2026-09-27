# 🌀 Smart Fan IoT System

A multi-tier IoT solution for smart fan control and real-time environmental telemetry monitoring (temperature & humidity) using ESP32 FreeRTOS firmware, Eclipse Mosquitto MQTT Broker, Node.js backend worker, Supabase DB, and React dashboard.

---

## 📁 Repository Structure

```
smart-fan-iot-system/
├── backend/       # Node.js Worker (Mosquitto MQTT Subscriber & Supabase DB ingestion)
├── firmware/      # ESP32 C++ Firmware (FreeRTOS Multi-threading + Watchdog WDT + PlatformIO)
├── frontend/      # React Web Dashboard (Supabase Realtime & Remote PWM Control)
└── README.md      # Main documentation
```

### Module Responsibilities

| Tier | Path | Description |
| :--- | :--- | :--- |
| **Firmware** | [`/firmware`](./firmware) | ESP32 C++ multi-threaded firmware (FreeRTOS) reading AHTX0 sensor, driving LCD display, adjusting fan PWM speed, and publishing/subscribing to Mosquitto MQTT broker with Watchdog (WDT) safety monitoring. |
| **Backend** | [`/backend`](./backend) | Node.js service listening to Mosquitto MQTT telemetry topics, saving data into Supabase `fan_telemetry` table, and relaying downlink commands. |
| **Frontend** | [`/frontend`](./frontend) | React dashboard for live telemetry monitoring via Supabase Realtime and remote fan PWM speed control. |

---

## 🚀 How to Run the Project

### 1. ESP32 Firmware (`/firmware`)

1. Open [`/firmware`](./firmware) in **VS Code** with the **PlatformIO** extension.
2. Edit Wi-Fi and Mosquitto MQTT credentials in [`firmware/include/config.h`](./firmware/include/config.h).
3. Build and upload firmware to ESP32:
   ```bash
   cd firmware
   pio run --target upload
   ```
4. Monitor serial logs:
   ```bash
   pio device monitor
   ```

---

### 2. Backend Worker (`/backend`)

1. Navigate to the backend directory:
   ```bash
   cd backend
   ```
2. Install dependencies:
   ```bash
   npm install
   ```
3. Copy environment configuration file and update credentials (defaults to `mqtt://localhost:1883` for Mosquitto):
   ```bash
   cp .env.example .env
   ```
4. Start the backend worker service:
   ```bash
   npm start
   ```

---

### 3. Frontend Dashboard (`/frontend`)

1. Navigate to the frontend directory:
   ```bash
   cd frontend
   ```
2. Install dependencies:
   ```bash
   npm install
   ```
3. Start the development web server:
   ```bash
   npm run dev
   ```
4. Open `http://localhost:5173` in your browser.
