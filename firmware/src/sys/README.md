# 🛡 System & Watchdog Management (`/firmware/src/sys`)

This directory contains system safety monitoring and hardware Watchdog Timer (WDT) management for ESP32:

| File | Description |
| :--- | :--- |
| **`wdt_manager.cpp`** | Manages ESP32 Task Watchdog Timer (`esp_task_wdt`). Subscribes active tasks and resets (feeds) watchdog timer to prevent hardware lockups. |
