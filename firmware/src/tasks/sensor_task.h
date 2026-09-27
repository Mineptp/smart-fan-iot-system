#ifndef SENSOR_TASK_H
#define SENSOR_TASK_H

#include <Arduino.h>

void startSensorTask();
void sensorTaskLoop(void *pvParameters);

#endif // SENSOR_TASK_H
