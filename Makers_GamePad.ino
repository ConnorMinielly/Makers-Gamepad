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
int x = 0;
int y = 0;

const int buttonA = 1;
const int buttonB = 2;

// the setup function runs once when you press reset or power the board
void setup()
{
  Joystick.begin();
  pinMode(buttonA, INPUT);
  pinMode(buttonB, INPUT);
}

// the loop function runs over and over again forever
void loop()
{
  x = map(analogRead(joyX), 0, 1023, 0, 255) - 127;
  Joystick.setXAxis(x * (-1) + 1);
  y = map(analogRead(joyY), 0, 1023, 0, 255) - 127;
  Joystick.setYAxis(y * (-1) + 1);

  if (digitalRead(buttonA) == HIGH)
  {
    Joystick.setButton(0, 1);
  }
  else
  {
    Joystick.setButton(0, 0);
  }

  if (digitalRead(buttonB) == HIGH)
  {
    Joystick.setButton(2, 1);
  }
  else
  {
    Joystick.setButton(2, 0);
  }
}
