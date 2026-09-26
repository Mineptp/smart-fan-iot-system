#ifndef DISPLAY_MODULE_H
#ifndef DISPLAY_MODULE_H
#define DISPLAY_MODULE_H

#include <Arduino.h>

void initDisplay();
void updateDisplay(float temp, float hum, uint8_t pwm);

#endif // DISPLAY_MODULE_H
