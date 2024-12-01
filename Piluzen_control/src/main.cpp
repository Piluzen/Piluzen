#include <Arduino.h>

#define dirPin 34 // pin 5
#define stepPin 35

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(921600);

  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}

void loop() 
{
  digitalWrite(stepPin, HIGH);
  // digitalWrite(dirPin, HIGH);

  // for(int i = 0; i < 200; i++)
  // {
  //   digitalWrite(stepPin, HIGH);
  //   delay(1000);
  //   digitalWrite(stepPin, LOW);
  //   delay(1000);
  // }
}
