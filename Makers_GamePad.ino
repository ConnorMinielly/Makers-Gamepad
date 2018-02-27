/*
  Makers Gamepad

  Created by Connor Minielly

  Help yourself to this code!

  Requires: https://github.com/MHeironimus/ArduinoJoystickLibrary/tree/version-1.0
*/
#include <Arduino.h>
#include <Joystick.h>
// the setup function runs once when you press reset or power the board
void setup()
{
  Joystick.begin();
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  delay(100);                      // wait for a second
}
