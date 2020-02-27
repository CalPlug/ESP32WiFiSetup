#ifndef GPIO_EX_H
#define GPIO_EX_H

#include "macros.h"
#include <Arduino.h>
#include <SparkFunSX1509.h>
#include <Wire.h>
#include "tempcontrol.h"//for encoder_rotate_detect(), dispense_temp and target_temp vars
#include "IO.h"//for WCB_status variable
#include "lcd.h"
#include "motion.h"
#include "dispense.h" //for dispense_button_detect()
#include "eeprom_wcb.h" //for EEPRONReset();
#include "tasks.h"

extern const byte SX1509_ADDRESS;  // SX1509 I2C address
extern SX1509 io;//can use pins 0:15


void handleInterrupt();

#endif
