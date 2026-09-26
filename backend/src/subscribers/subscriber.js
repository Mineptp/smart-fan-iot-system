const mqttClient = require('../config/mqtt.client');
const telemetryService = require('../services/telemetry.service');

/**
 * Subscriber Pattern (Template)
 * Manages topic subscriptions and routes incoming MQTT packets to services.
 */

const TOPIC_TELEMETRY = process.env.MQTT_TOPIC_TELEMETRY || 'smartfan/telemetry';

function initSubscriberPattern() {
  mqttClient.on('connect', () => {
    mqttClient.subscribe(TOPIC_TELEMETRY, (err) => {
      if (!err) {
        console.log(`[Subscriber Pattern] Registered subscription to topic: ${TOPIC_TELEMETRY}`);
      } else {
        console.error(`[Subscriber Pattern] Subscription error for [${TOPIC_TELEMETRY}]:`, err);
      }
    });
  });

  mqttClient.on('message', (topic, message) => {
    if (topic === TOPIC_TELEMETRY) {
      console.log(`[Subscriber Pattern] Payload received on [${topic}]:`, message.toString());
      // Hand off payload to telemetry service pattern
      telemetryService.saveTelemetryRecord({ topic, raw: message.toString() });
    }
  });
}

module.exports = { initSubscriberPattern };
