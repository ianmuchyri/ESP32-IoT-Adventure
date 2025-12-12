#include <Arduino.h>

// External LED pins
#define LED_RED 23
#define LED_GREEN 22
#define LED_BLUE 21

// Built-in LED
#define LED_BUILTIN 2

// LED array for easy control
const int leds[] = {LED_RED, LED_GREEN, LED_BLUE};
const int numLeds = 3;

void setup()
{
  Serial.begin(115200);
  Serial.println("🚀 ESP32 Hardware Expansion - External LEDs!");

  // Initialize all LED pins as outputs
  pinMode(LED_BUILTIN, OUTPUT);
  for (int i = 0; i < numLeds; i++)
  {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }

  Serial.println("✅ All LEDs initialized!");
}

void loop()
{
  // Pattern 1: Sequential lighting
  Serial.println("\n🎨 Pattern 1: Sequential Chase");
  for (int i = 0; i < numLeds; i++)
  {
    digitalWrite(leds[i], HIGH);
    Serial.printf("💡 LED %d ON\n", i + 1);
    delay(200);
    digitalWrite(leds[i], LOW);
  }
  delay(500);

  // Pattern 2: All on/off
  Serial.println("\n🎨 Pattern 2: All Flash");
  for (int flash = 0; flash < 3; flash++)
  {
    for (int i = 0; i < numLeds; i++)
    {
      digitalWrite(leds[i], HIGH);
    }
    Serial.println("💡 ALL ON!");
    delay(300);

    for (int i = 0; i < numLeds; i++)
    {
      digitalWrite(leds[i], LOW);
    }
    Serial.println("🌙 ALL OFF!");
    delay(300);
  }
  delay(500);

  // Pattern 3: Alternating pairs
  Serial.println("\n🎨 Pattern 3: Alternating Pairs");
  for (int cycle = 0; cycle < 4; cycle++)
  {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[2], HIGH);
    delay(250);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[2], LOW);

    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[1], HIGH);
    delay(250);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[1], LOW);
  }
  delay(500);

  // Pattern 4: PWM Breathing effect on built-in LED
  Serial.println("\n🎨 Pattern 4: Breathing Effect");
  for (int brightness = 0; brightness <= 255; brightness += 5)
  {
    analogWrite(LED_BUILTIN, brightness);
    delay(20);
  }
  for (int brightness = 255; brightness >= 0; brightness -= 5)
  {
    analogWrite(LED_BUILTIN, brightness);
    delay(20);
  }
  digitalWrite(LED_BUILTIN, LOW);

  delay(1000);

  // 🥉 Bronze Challenge: Traffic Light
  Serial.println("\n🥉 Bronze Challenge: Traffic Light");
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(leds[0], HIGH);
    digitalWrite(leds[2], LOW);
    delay(3000);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[2], HIGH);
    delay(1000);
    digitalWrite(leds[2], LOW);
    digitalWrite(leds[1], HIGH);
    delay(3000);
    digitalWrite(leds[1], LOW);
    digitalWrite(leds[2], HIGH);
    delay(1000);
  }

  // 🥈 Silver Challenge: Police Lights
  Serial.println("\n🥈 Silver Challenge: Police Lights");
  for (int i = 0; i < 100; i++)
  {
    digitalWrite(leds[0], HIGH);
    delay(200);
    digitalWrite(leds[0], LOW);
    digitalWrite(leds[2], HIGH);
    delay(200);
    digitalWrite(leds[2], LOW);
    delay(200);
  }
}
