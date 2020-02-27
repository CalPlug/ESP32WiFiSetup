#ifndef TEMPCONTROL_H
#define TEMPCONTROL_H

#include "macros.h"
#include <Arduino.h>
#include "thermistor.h"
#include "gpio_ex.h"
#include "lcd.h"
#include "led_driver.h"

#define SAMPLELOOP 10
#define TURN_INC 5

#define TC1_GAIN 0.988  //Thermocouple correction gain
#define TC1_OFFSET -2.5  //Thermocouple correction offset
#define min_trans_time 				 	5000
#define upper_hysteresis_1 				1.5  //value for overshoot hysteresis (degrees)
#define lower_hysteresis_1 				2  //value for undershoot hysteresis (degrees)
#define HOT 1
#define COLD 0
#define MINHIGHTEMP             		100  //Minimum temp for hot reservior
#define MINLOWTEMP              		70  //Minimum temp for cold reservior
/*Heater/cooler variables*/
extern volatile byte heater_status;
extern volatile byte cooler_status;

extern double heaterTemp;
extern double coolerTemp;
extern double mixTemp;
extern volatile double hotTempSet;  // *F  - Control setpoint value (in degrees F)  (degrees F is used because of marginally higher resolution per degree)
extern volatile double coldTempSet;  // *F
extern volatile int adjustingTemp;

extern volatile int rot_encoder_pos;
extern volatile int target_temp;
extern volatile int dispense_temp;

extern unsigned long lastswitcheventtime; //time in millis() since last switch event
extern unsigned long runtime; //tracker for runtime
extern unsigned long lastruntime;//used to detect millis() rollover and indicate transitions
extern byte ThermError1; //this is a flag if there is a Thermocouple error
extern byte ThermError2; //this is a flag if there is a Thermocouple error
extern byte overrideindicator; //used to detect millis() rollover

void feedBack(int RelayCtrl_1_Pin, double temp_read1, byte TCError1, double temp_set1, bool direct);
void FeedbackControl();

void encoder_rotate_detect();
void trackEncoderTurn(int temp, int val);

#endif
