#ifndef THERMISTOR_H
#define THERMISTOR_H
#include "macros.h"
#include <Arduino.h>
#include <Wire.h>

//REQ means request
#define THERM1_REQ 75
#define THERM2_REQ 76
#define THERM3_REQ 77

extern const double a0;
extern const double a1;
extern const double a2;

extern const double b0;
extern const double b1;
extern const double b2;

extern int Therm_0;
extern int Therm_1;
extern int Therm_2;

//Functions for converting thermistor values into temperatures -----------------
double VoltageToResistance100k(double x);
double ResistanceToTemp100k(double x);
double VoltageToResistance10k(double x);
double ResistanceToTemp10k(double x);
double KtoF(double x);

//This function gets thermistor data from the atmega328 slave
//Thermistors are defined above. please use macros
//Thermistor 0: req_therm = 75
//Thermistor 1: req_therm = 76
//Thermistor 2: req_therm = 77
unsigned int read_thermistor(uint8_t req_therm);  //100k Mixing Thermistor
//in order to save readings use:
//  Therm_0 = read_thermistor(75)
//  Therm_1 = read_thermistor(76)
//  Therm_2 = read_thermistor(77)

#endif
