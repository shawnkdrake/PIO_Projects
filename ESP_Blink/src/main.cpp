#include <Arduino.h>

void setup() {
    pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(2, LOW);
    delay(500);
    digitalWrite(2, HIGH);
    delay(500);
}