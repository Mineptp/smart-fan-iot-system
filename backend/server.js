require('dotenv').config();
const { initSubscriberPattern } = require('./src/subscribers/subscriber');

/**
 * Backend Entry Point Pattern (Template)
 * Bootstraps environment variables, MQTT client subscribers, and DB services.
 */

console.log('==============================================');
console.log('🌀 Smart Fan Backend Worker - Pattern Template');
console.log('==============================================');

// Bootstrap Subscriber Event Listeners
initSubscriberPattern();
