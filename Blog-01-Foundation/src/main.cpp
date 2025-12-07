#include <Arduino.h>

#define LED 2  // Built-in LED on NodeMCU 32S

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  Serial.println("🎉 ESP32 is alive and ready to blink!");
}

void loop() {
  digitalWrite(LED, HIGH);
  Serial.println("💡 LED ON!");
  delay(1000);
  
  digitalWrite(LED, LOW);
  Serial.println("🌙 LED OFF!");
  delay(1000);
}
