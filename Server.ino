/*
 * Bill Matt
 * 6/6/2024
 * Test server for learning esp32
 */
#include <WiFi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Test...");
  delay(1000);
}
