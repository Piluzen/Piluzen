#include <Stepper.h>
#include <Arduino.h>

// Define the number of steps per revolution
const int stepsPerRevolution = 3200; // Change based on your motor

// Create a Stepper instance
Stepper myStepper(stepsPerRevolution, 3, 4); // Pin 3 and 4 are stepper control pins

int currentPosition = 0;

void moveToPosition(int targetPosition)
{
  int stepsToMove = targetPosition - currentPosition;
  myStepper.step(stepsToMove);
  currentPosition = targetPosition;
}

void setup()
{
  // Set stepper speed in RPM
  myStepper.setSpeed(60);
}

void loop()
{
  delay(1000);

  moveToPosition(-5000);
  delay(1000);

  moveToPosition(0);
  // delay(1000);
}
