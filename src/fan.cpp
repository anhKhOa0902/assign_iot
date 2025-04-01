#include "fan.h"

void setFanSpeed(int speed) {
  // Set the fan speed using PWM
  ledcWrite(8, speed); // Assuming channel 0 is used for the fan
  Serial.print("Fan speed set to: ");
  Serial.println(speed);
}
  // Note: The speed value should be between 0 and 255 for 8-bit resolution
  // Adjust the channel and resolution as needed based on your setup