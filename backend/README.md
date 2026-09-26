# 🖥 Backend Worker Service (`/backend`)

Node.js worker service that listens to Eclipse Mosquitto MQTT telemetry data from ESP32, stores records in Supabase `fan_telemetry` table, and routes downlink control commands.

---

## 📁 Directory Structure

```
backend/
├── src/
│   ├── config/          # Service connection setups (Mosquitto MQTT & Supabase)
│   │   ├── mqtt.js
│   │   └── supabase.js
│   ├── services/        # Database operations & business logic
│   │   └── telemetry.service.js
│   └── subscribers/     # MQTT message subscribers
│       └── subscriber.js
├── .env.example         # Environment variables template (Mosquitto config)
├── package.json         # Node dependencies & scripts
├── server.js            # Service entry point
└── README.md
```

---

## 🚀 How to Run

1. Install dependencies:
   ```bash
   npm install
   ```
2. Configure `.env` from template (defaults to Mosquitto `mqtt://localhost:1883`):
   ```bash
   cp .env.example .env
   ```
3. Start the worker:
   ```bash
   npm start
   ```
4. Start development mode (auto-reload):
   ```bash
   npm run dev
   ```
