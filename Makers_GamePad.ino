/*
  Makers Gamepad

  Created by Connor Minielly

  Help yourself to this code!

  Requires: https://github.com/MHeironimus/ArduinoJoystickLibrary/tree/version-1.0
*/
#include <Arduino.h>
#include <Joystick.h>

const int joyX = A0;
const int joyY = A1;
int initX = 0;
int initY = 0;
int x = 0;
int y = 0;

// the setup function runs once when you press reset or power the board
void setup()
{
  Joystick.begin();

  // Serial.begin(9600);
  // initX = map(analogRead(joyX), 0, 1023, 0, 255);
  // initY = map(analogRead(joyY), 0, 1023, 0, 255);
}

// the loop function runs over and over again forever
void loop()
{
  x = map(analogRead(joyX), 0, 1023, 0, 255) - 127;
  Joystick.setXAxis(x * (-1) + 1);
  // Serial.print("X -> ");
  // Serial.println(x * (-1) + 1);
  y = map(analogRead(joyY), 0, 1023, 0, 255) - 127;
  Joystick.setYAxis(y * (-1) + 1);
  // Serial.print("Y -> ");
  // Serial.println(y * (-1) + 1);

  if ()
}
