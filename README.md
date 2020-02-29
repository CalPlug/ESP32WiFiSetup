# ESP32WiFiSetup
# Alpha release
Example program segment that provides an AP for setup of communication to an MQTT server.

CALPLUG FIRMWARE CONTRIBUTORS 2020: Mugared Khalifa, Kejia Qiang.

KNOWN ISSUES: 
-There is an issue with the Config Portal running in the loop/xtask: The Portal sometimes fires up when connected to the AP the ESP created for reconfiguration, but other times does not!
-Make sure to not have conflicting files in your arduino library as it will sometimes cause a linking or compiling error. The folders inside the Lib folder is what you would need in order to run this program.


BREAKDOWN:
1. During setup, an AP by the ESP will be created. When connected to, a configuration portal should fire up. If it does not, manually open it using your web browser and type in the IP it generates.
2. After setup the credentials of the WIFI, handles by the WiFiManager Library, and the MQTT, saved in the EEPROM, will be saved, and used whenever the ESP is restarted.
3. Should any of these credentials fail to connect, it will reset the ESP and EEPROM after a timeout and set number of trials. It will go back to step 1.
4. The MQTT fields will be loaded into their respective fields whenever the program runs, either from a configured ESP or one that is configured for the first time. Then the user can use these fields.