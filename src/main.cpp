#include <Arduino.h>
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  int reading  = analogRead(A0);
  Serial.println(reading);
}