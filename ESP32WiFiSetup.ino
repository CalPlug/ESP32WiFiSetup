#include "inc/ESP32_Wifi_MQTT.h"

/**************************************************************
CALPLUG FIRMWARE CONTRIBUTORS: Mugared Khalifa, Kejia Qiang.
**************************************************************/

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("setting up");
  //WiFi.mode(WIFI_MODE_STA);
  Serial.println(WiFi.macAddress());
  esp_wifi_mqtt_setup();
  Serial.println("setup is done");
  xTaskCreate(&wifi_Connector, "Wifi_Connector", 10000, NULL, 2, NULL);

}

void loop() {
  // put your main code here, to run repeatedly:

}
