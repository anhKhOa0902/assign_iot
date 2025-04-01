#include "blinkLed.h"
#include "wifiModule.h"
#include "readDHT20.h"
#include "sensor.h"
#include "fan.h"
#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  xTaskCreate(taskCheckWifiConnection, "wifiConnection", 4096, NULL, 1, NULL);
  xTaskCreate(taskReadSensor, "readSensor", 16384, NULL, 2, NULL);
  xTaskCreate(taskLEDControl, "LED_control", 2048, NULL, 3, NULL);
  // pinMode(48, OUTPUT); // Initialize the LED pin as an output
  // Serial.begin(115200); // Initialize serial communication at 115200 bits per second
}



void loop() {
  // put your main code here, to run repeatedly:
  

}