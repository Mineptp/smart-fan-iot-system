const supabase = require('../config/supabase');

/**
 * Telemetry Service Pattern (Template)
 * Interface pattern for database CRUD operations on the `fan_telemetry` table.
 */

const TELEMETRY_TABLE = process.env.SUPABASE_TABLE || 'fan_telemetry';

/**
 * Pattern function: Save telemetry record to Supabase DB
 * @param {Object} payload Telemetry payload received from MQTT
 */
async function saveTelemetryRecord(payload) {
  // Pattern Placeholder: Insert logic to be populated when DB schema is finalized
  console.log('[Telemetry Service Pattern] Record queued for DB insert:', payload);
  return { success: true, table: TELEMETRY_TABLE };
}

module.exports = {
  saveTelemetryRecord,
};
