#ifndef MACROS_H
#define MACROS_H

//ESP32 pinout
//I2C pins of ESP32
#define I2C_SDA 21
#define I2C_SCL 22
//SPI for Wattmeter
#define WATT_MOSI 23
#define WATT_MISO 19
#define WATT_CLK 18
#define WATT_CS 5
//other wattmeter pins
#define WATT_IRQ 33
#define WATT_SEL 25
//Interrupt for GPIO expander
#define GPIO_INT 32
//proximity sensor analog output
#define PROX_SENSE 34

//PCA9685 (led driver) pinout
#define PCA9685_BARLED_B1 0 //original code had this as 0
#define PCA9685_BARLED_B2 1 //original code had this as 1
#define PCA9685_BARLED_Y 2 //original code had this as 2
#define PCA9685_BARLED_R1 3 //original code had this as 3
#define PCA9685_BARLED_R2 4 //original code had this as 13
#define PCA9685_STATUS_R 8 //original code had this as 5
#define PCA9685_STATUS_B 9 //original code had this as 11
#define PCA9685_STATUS_G 10 //original code had this as 12
#define PCA9685_WIFI_R 11 //original code had this as 8
#define PCA9685_WIFI_B 12 //original code had this as 9
#define PCA9685_WIFI_G 13 //original code had this as 10

//SX1509 (gpio expander) pinout
#define SX1509_RELAY_HOT 0
#define SX1509_RELAY_COLD 1
#define SX1509_RELAY_L_DISPENSE 2
#define SX1509_RELAY_R_DISPENSE 3
#define SX1509_ROTARY_A 4
#define SX1509_ROTARY_B 5
#define SX1509_ROTARY_SEL 6
#define SX1509_MICRO_SENSE 7
#define SX1509_F_MOTION 8
#define SX1509_R_MOTION 9
#define SX1509_L_MOTION 10
#define SX1509_DISPENSE_BX 13 //dispense button - connected to interface board
#define SX1509_MENU_BX 14
#define SX1509_RESET_BX 15

//number of times to loop when sampling and averaging data
#define SAMPLELOOP 10

#endif
