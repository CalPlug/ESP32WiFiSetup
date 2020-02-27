#ifndef TASKS_H
#define TASKS_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include <Arduino.h>
#include "wattmeter.h"
#include "lcd.h"
#include "IO.h"
#include "ESP32_Wifi_MQTT.h"
#include "tempcontrol.h"
#include "gpio_ex.h"
#include "motion.h"

extern const unsigned long PERIOD;
extern SemaphoreHandle_t xWCBStatusSemaphore;//created as a binary semaphore in setup_all() in setup.cpp

void wattmeter_task(void *pvParameter);
void lcd_refresh_task(void *pvParameter);
void ISR_refresh_task(void *pvParamter);
void normal_operation_task(void *pvParameter);
void tempReg_task(void *pvParameter);
void check_water_hysteresis_task(void *pvParameter);
void status_update_task(void *pvParameter);
void ISR_task(void *pvParameter);
void detect_reset_task (void *pvParamter);

//mqtt data publish function
//

#endif
