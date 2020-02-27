#pragma once
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiManager1.h>
#include <PubSubClient.h>
#include "lcd.h"


extern const char* mqttServer;
extern const int mqttPort;
extern const char* mqttUser;
extern const char* mqttPassword;
extern long lastMsg;

extern WiFiClient espClient;
extern PubSubClient client;
extern WiFiManager wifiManager;
extern WiFiServer server;

void start_mqtt();
void setup_wifi();
void reconnect();
void callback(char* topic, byte* message, unsigned int length);
void configModeCallback(WiFiManager *myWiFiManager);
void pub_msg(char * msg);
