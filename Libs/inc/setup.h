#ifndef SETUP_H
#define SETUP_H
//pretty much all header files should be in setup

//global headers
#include "macros.h"
#include <Arduino.h>
//gpio expander headers
#include <SparkFunSX1509.h>
#include "gpio_ex.h"
//LED driver headers
#include <Adafruit_PWMServoDriver.h>
#include "led_driver.h"
//RTC
#include "../RTClib.h"
#include "RTC.h"
//I2C
#include <Wire.h>
//motion sensors
#include "motion.h"
#include "thermistor.h"
#include "wattmeter.h"

#include "lcd.h"
#include "tempcontrol.h"
#include "dispense.h"

#include "tasks.h" //to setup xWCBStatusSemaphore

#define ATMEGA328_ADDR 50 //address we assigned to atmega slave (look in the slave code)

void SX1509_setup(); //GPIO expander: SSR, Buttons, PIR sensors, Microwave sensor
void PCA9685_setup(); //LED driver
void RTC_DS3231_setup();//RTC
void ATMEGA328_setup();//Atmega328 slave (thermistors)
void prox_sensor_setup();
void wattmeter_setup();
void lcd_setup();
void thermistor_setup();
//run this function to setup everything
void setup_all();

#endif
