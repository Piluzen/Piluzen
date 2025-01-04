#include <Arduino.h>

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(92600);

  Serial.println("Hello from setup");
}

void loop()
{
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Hello from setup");
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}
