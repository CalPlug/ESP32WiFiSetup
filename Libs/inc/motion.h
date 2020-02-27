#ifndef MOTION_H
#define MOTION_H

#include <Arduino.h>
#include "macros.h"
#include <Wire.h>
#include "gpio_ex.h"//motion sensors are connected to gpio expander
//except proximity sensor is connected to ESP32 GPIO 34
//macros are copied below
//GPIO extender pins
// SX1509_MICRO_SENSE 7
// SX1509_F_MOTION 8
// SX1509_R_MOTION 9
// SX1509_L_MOTION 10

//ESP32 pin
// PROX_SENSE 34

//depreciated - handled by ISR
// bool read_PIR_sensor(int sensor_pin);

//for proximity sensor
double voltToDist(double x);
double DAQ_to_Volt(double x);
double read_prox_sensor();
extern volatile double sensor_Distance;
extern volatile bool detect;
#endif
