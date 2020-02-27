#ifndef LCD_H
#define LCD_H

#include "macros.h"
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h> //the library is in the Firmware/lib folder

extern LiquidCrystal_I2C lcd; //if this doens't work replace 0x27 with 0x3F or just use an i2c scanner
void LCD_refresh();

#endif
