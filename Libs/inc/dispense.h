#ifndef DISPENSE_H
#define DISPENSE_H

#include "macros.h"
#include <Arduino.h>
#include "gpio_ex.h"
#include "macros.h"
#include "tempcontrol.h"

/*Solenoid control variables*/
extern const int DEBOUNCE_DELAY;
extern const byte DEBOUNCE_TIME;
extern volatile bool solenoid_hot_status;
extern volatile bool solenoid_cold_status;

extern int buttonCount;

extern volatile int dispensing;
extern int dispenseTemps[2*SAMPLELOOP];

void dispense_button_detect();
double Mixing(int setTemp);
void Dispensing(double ratio, int dispPeriod);

#endif
