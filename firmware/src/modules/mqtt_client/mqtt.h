#ifndef MQTT_CLIENT_MODULE_H
#define MQTT_CLIENT_MODULE_H

#include <Arduino.h>

void initMqttClient();
void processMqttLoop();
bool publishTelemetry(float temp, float hum, uint8_t pwm);

#endif // MQTT_CLIENT_MODULE_H
