/*
 * USB Analog Handbrake by @obsoletenerd
 * http://github.com/obsoletenerd/analog-usb-handbrake
 * 
 * Pot pin 1 to VCC
 * Pot pin 2 to A0
 * Pot pin 3 to GND
 */
#include <Joystick.h>
const int potPin = A0; // Change if using a different pin

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  Joystick.begin();
}

void loop() {
  int potReading = analogRead(potPin);
  Serial.println("Pot: ");
  Serial.print(potReading);
  int mappedReading = map(potReading,0,1023,0,255);
  Serial.println("Mapped: ");
  Serial.print(mappedReading);
  Joystick.setThrottle(mappedReading);
}
