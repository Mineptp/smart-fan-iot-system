# 🌐 React Web Dashboard (`/frontend`)

Web user interface built with React for real-time telemetry monitoring via Supabase Realtime and remote fan PWM speed control.

---

## 📁 Directory Structure

```
frontend/
├── public/              # Static assets (favicon)
├── src/
│   ├── components/      # UI Components (Header, TelemetryCard, FanControl)
│   ├── services/        # Supabase client setup
│   ├── types/           # TypeScript interface definitions
│   ├── App.tsx          # Main Dashboard component
│   ├── index.css        # Glassmorphism styling
│   └── main.tsx         # React app entry point
├── .env.example         # Environment variables template for Supabase
├── index.html           # HTML template
├── package.json         # React & Vite dependencies
├── vite.config.ts       # Vite config
└── README.md
```

---

## 🚀 How to Run

1. Install dependencies:
   ```bash
   npm install
   ```
2. Set up environment configuration:
   ```bash
   cp .env.example .env
   ```
3. Start development server:
   ```bash
   npm run dev
   ```
4. Open `http://localhost:5173` in your browser.
