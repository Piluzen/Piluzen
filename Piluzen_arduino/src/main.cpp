#include <Stepper.h>
#include <Arduino.h>

const int dirPin = 3;
const int stepPin = 4;

const int stepsPerRevolution = 5400;
float currentPosition = 0;

void moveToPosition(float targetPosition)
{
  float stepsToMove = (targetPosition - currentPosition) * (stepsPerRevolution / 360.0);

  if (stepsToMove > 0)
  {
    digitalWrite(dirPin, HIGH);
  }
  else
  {
    digitalWrite(dirPin, LOW);
    stepsToMove = -stepsToMove;
  }

  for (int i = 0; i < stepsToMove; i++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }

  currentPosition = targetPosition;
}

void setup()
{
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  moveToPosition(270);
  delay(2000);

  moveToPosition(360);
  delay(2000);

  currentPosition = 0;
}
