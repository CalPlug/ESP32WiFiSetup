#ifndef WATTMETER_H
#define WATTMETER_H

#include <ADE7953.h>
#include <Arduino.h>
#include <SPI.h>
#include "macros.h"

#define local_SPI_freq  1000000 // Set SPI_Freq to 1Mhz (#define, (no = or ;) helps to save memory)
// #define local_SS        D8 // Set the SS pin for SPI communcation as pin 5 (#define, (no = or ;) helps to save memory)

extern ADE7953 myADE7953;
extern float WCB_activePower;
void read_wattmeter();

#endif
