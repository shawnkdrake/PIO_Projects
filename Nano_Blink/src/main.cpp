#include <Arduino.h>
#define BUILTIN 13

void setup() {
  Serial.begin(9600);                 // put your setup code here, to run once:
  Serial.println("Start");
    pinMode(BUILTIN, OUTPUT);
  
}

void loop() {
  digitalWrite(BUILTIN, HIGH);        // put your main code here, to run repeatedly:
  Serial.println("The LED in on!");
  delay(1500);
  digitalWrite(BUILTIN, LOW);        
  Serial.println("The LED in off!");
  delay(1500);
}