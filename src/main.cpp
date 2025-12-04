#include <Arduino.h>

#define LED 2  // Built-in LED on NodeMCU 32S

void setup() {
  // Initialize the LED pin as output
  pinMode(LED, OUTPUT);
  
  // Start serial communication for debugging
  Serial.begin(115200);
  Serial.println("🎉 ESP32 is alive and ready to blink!");
}

void loop() {
  // Turn LED on
  digitalWrite(LED, HIGH);
  Serial.println("💡 LED ON!");
  delay(1000);  // Wait 1 second
  
  // Turn LED off
  digitalWrite(LED, LOW);
  Serial.println("🌙 LED OFF!");
  delay(1000);  // Wait 1 second
}