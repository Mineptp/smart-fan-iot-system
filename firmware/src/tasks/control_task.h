#ifndef CONTROL_TASK_H
#define CONTROL_TASK_H

#include <Arduino.h>

void startControlTask();
void controlTaskLoop(void *pvParameters);

#endif // CONTROL_TASK_H
