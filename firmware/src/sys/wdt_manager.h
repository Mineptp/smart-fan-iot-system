#ifndef WDT_MANAGER_H
#define WDT_MANAGER_H

#include <Arduino.h>

/**
 * Watchdog Manager (WDT)
 * Initializes Task Watchdog Timer and subscribes tasks for hardware safety monitoring.
 */

void initWatchdog();
void registerTaskToWdt();
void feedWatchdog();

#endif // WDT_MANAGER_H
