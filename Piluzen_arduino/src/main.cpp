#include <Arduino.h>

#define dirPin 3
#define stepPin 4

void setup()
{
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop()
{
  digitalWrite(dirPin, HIGH);

  for (int i = 0; i < 200; i++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(700);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(700);
  }

  delay(1000);

  for (int i = 0; i < 400; i++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
  }

  delay(1000);
}
