#ifndef NETWORK_TASK_H
#define NETWORK_TASK_H

#include <Arduino.h>

void startNetworkTask();
void networkTaskLoop(void *pvParameters);

#endif // NETWORK_TASK_H
