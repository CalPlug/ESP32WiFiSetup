#include "Wattmeter.h"

//#define local_SPI_freq 1000000  //Set SPI_Freq at 1MHz (#define, (no = or ;) helps to save memory)
//#define local_SS 14  //Set the SS pin for SPI communication as pin 10  (#define, (no = or ;) helps to save memory)

int Current = 0;
int Voltage = 0;

ADE7953 myADE7953(22, 21);

void WattmeterTest() {

	long apnoload, activeEnergyA;
	float vRMS, iRMSA, powerFactorA, apparentPowerA, reactivePowerA, activePowerA;
	
	apnoload = myADE7953.getAPNOLOAD();
	Serial.print("APNOLOAD (hex): ");
	Serial.println(apnoload, HEX);
	delay(200);

	vRMS = myADE7953.getVrms();
	Serial.print("Vrms (V): ");
	Serial.println(vRMS);
	delay(200);

	iRMSA = myADE7953.getIrmsA();
	Serial.print("IrmsA (mA): ");
	Serial.println(iRMSA);
	delay(200);
	
	apparentPowerA = myADE7953.getInstApparentPowerA();
	Serial.print("Apparent Power A (mW): ");
	Serial.println(apparentPowerA);
	delay(200);

	activePowerA = myADE7953.getInstActivePowerA();
	Serial.print("Active Power A (mW): ");
	Serial.println(activePowerA);
	delay(200);
	
	reactivePowerA = myADE7953.getInstReactivePowerA();
	Serial.print("Rective Power A (mW): ");
	Serial.println(reactivePowerA);
	delay(200);

	powerFactorA = myADE7953.getPowerFactorA();
	Serial.print("Power Factor A (x100): ");
	Serial.println(powerFactorA);
	delay(200);

	activeEnergyA = myADE7953.getActiveEnergyA();
	Serial.print("Active Energy A (hex): ");
	Serial.println(activeEnergyA);
	delay(200);

	Serial.println();
}