import './index.css';

export function App() {
  return (
    <div className="dashboard-container">
      <header className="demo-header">
        <div className="brand-badge">
          <span className="logo-icon">🌀</span>
          <span className="badge-text">IoT Demo</span>
        </div>
        <h1 className="demo-title">Smart Fan IoT System</h1>
        <p className="demo-subtitle">
          Multi-tier IoT Solution for Intelligent Environmental Monitoring & Fan Control
        </p>
        <div className="status-pill">
          <span className="pill-dot"></span>
          <span>System Initialization • Awaiting Telemetry Data</span>
        </div>
      </header>

      <main className="placeholder-content">
        <div className="placeholder-card">
          <span className="placeholder-icon">📡</span>
          <h3>Ready for Data Stream</h3>
          <p>
            Hardware telemetry readings (Temperature, Humidity, PWM Speed) and control interfaces will be displayed here once connected.
          </p>
        </div>
      </main>
    </div>
  );
}

export default App;
