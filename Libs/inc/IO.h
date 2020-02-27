#ifndef IO_H
#define IO_H
#include <Arduino.h>
#include "macros.h"
#include "lcd.h"
#include "led_driver.h"
#include "gpio_ex.h" //for sensor_Distance

extern volatile bool WCB_Status;
extern bool Previous_WCB_Status;

void power_Down();
void power_Up();
void welcome();

#endif
