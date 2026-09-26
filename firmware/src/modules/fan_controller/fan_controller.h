#ifndef FAN_CONTROLLER_MODULE_H
#define FAN_CONTROLLER_MODULE_H

#include <Arduino.h>

void initFanController();
void setFanPwmSpeed(uint8_t pwmSpeed);

#endif // FAN_CONTROLLER_MODULE_H
