#ifndef RTC_H
#define RTC_H

#include <Arduino.h>
#include <Wire.h>
#include "../RTClib.h"
#include "macros.h"
//system libraries (idk if we really need them but lets keep it for now.)
#include "esp_system.h"
#include <time.h>
#include <stdio.h>

extern RTC_DS3231 rtc;

extern uint8_t currentHour;
extern uint8_t currentMinute;
extern uint8_t currentSecond;

void printDate();

void printTime();

void getCurrentTime();

#endif
