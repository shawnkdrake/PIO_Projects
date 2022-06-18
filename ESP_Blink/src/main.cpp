#include <Arduino.h>

/*
  Simple Blink sketch
  simple-blink.cpp
  Use for PlatformIO demo

  From original Arduino Blink Sketch
  https://www.arduino.cc/en/Tutorial/Blink
  
  DroneBot Workshop 2021
  https://dronebotworkshop.com
*/

// Set LED_BUILTIN if undefined or not pin 13
#define LED_BUILTIN 2

void setup()
{
 Serial.begin(19200);
 Serial.println("Start");
   // Initialize LED pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // Set the LED HIGH
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("The LED is Off!");
  // Wait for a second
  delay(1000);

  // Set the LED LOW
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("The LED is On!");
   // Wait for a second
  delay(1000);
}
