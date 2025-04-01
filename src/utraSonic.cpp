#include "utraSonic.h"

void taskUltrasonic(void* ptrParameter)
{
  // declare the ultrasonic object
    UltraSonicDistanceSensor ultrasonic(6, 7); // Trigger pin: GPIO 6, Echo pin: GPIO 7

  while (true)
  {
    // read the distance from the ultrasonic sensor
    float distance = ultrasonic.measureDistanceCm();
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    vTaskDelay(1000); // Delay for 1 second
  }
}