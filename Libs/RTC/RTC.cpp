#include "RTC.h"

#include <Wire.h>
#include "RTClib.h"
#include <stdio.h>

#include "esp_system.h"
#include <time.h>
#include <Arduino.h>

RTC_DS3231 RTC;
uint8_t currentHour;
uint8_t currentMinute;
uint8_t currentSecond;


void printDate() {
	DateTime now = RTC.now(); 
    Serial.print(now.year(), DEC);
    Serial.print('/');
    Serial.print(now.month(), DEC);
    Serial.print('/');
    Serial.print(now.day(), DEC);
    Serial.println();
    delay(1000);	// Should remove but remember to set delays when called in loops elsewhere
}

void printTime() {
	DateTime now = RTC.now(); 
	Serial.print(now.hour(), DEC);
    Serial.print(':');
    Serial.print(now.minute(), DEC);
    Serial.print(':');
    Serial.print(now.second(), DEC);
    Serial.println(); 
    delay(1000);
}

void getCurrentTime(){
    DateTime now = RTC.now();
    currentHour = now.hour();
    currentMinute = now.minute();
    currentSecond = now.second();

}
