const mqtt = require('mqtt');
require('dotenv').config();

/**
 * Eclipse Mosquitto MQTT Connection Setup Pattern
 * Mosquitto is a standard open-source MQTT broker listening on port 1883 (TCP) / 9001 (WebSockets).
 */

const MQTT_BROKER_URL = process.env.MQTT_BROKER_URL || 'mqtt://localhost:1883';

const mqttOptions = {
  clientId: `smart_fan_backend_${Math.random().toString(16).substring(2, 8)}`,
  clean: true,
  connectTimeout: 4000,
  reconnectPeriod: 2000,
};

// Initialize MQTT Client Instance connecting to Mosquitto
const mqttClient = mqtt.connect(MQTT_BROKER_URL, mqttOptions);

// Connection Lifecycle Event Listeners
mqttClient.on('connect', () => {
  console.log(`[MQTT Client] Connected to Mosquitto Broker: ${MQTT_BROKER_URL}`);
});

mqttClient.on('error', (err) => {
  console.error('[MQTT Client] Mosquitto Connection Error:', err.message);
});

mqttClient.on('reconnect', () => {
  console.log('[MQTT Client] Reconnecting to Mosquitto Broker...');
});

mqttClient.on('offline', () => {
  console.warn('[MQTT Client] Client offline from Mosquitto Broker');
});

module.exports = mqttClient;
