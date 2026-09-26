#ifndef ENV_SENSOR_MODULE_H
#define ENV_SENSOR_MODULE_H

#include <Arduino.h>

bool initEnvSensor();
bool readEnvSensor(float &temperature, float &humidity);

#endif // ENV_SENSOR_MODULE_H
