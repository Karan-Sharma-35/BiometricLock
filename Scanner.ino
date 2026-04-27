/**
 * Project: ESP32 Biometric Security Scanner
 * Status: Hardware Phase - Logic Implementation
 * Note: Utilizing GPIO pins that bypass the damaged onboard 3.3V regulator.
 * Platform: Arduino IDE
 */

#include <Adafruit_Fingerprint.h> 
#include <SPI.h>                  
#include <WiFi.h>                 

// Instance for the fingerprint sensor (using Hardware Serial 2)
// Pins 16 (RX2) and 17 (TX2) are generally safe on the ESP32
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&Serial2);

void setup() {
  Serial.begin(115200);
  delay(100);
  
  Serial.println("\n--- ESP32 Biometric Scanner Initialization ---");
  
  // Hardware Power Check Note: 
  // Ensuring stable 3.3V power from external rail to bypass damaged onboard regulator.
  
  // Initialize Fingerprint Sensor
  finger.begin(57600);
  if (finger.verifyPassword()) {
    Serial.println("Found fingerprint sensor!");
  } else {
    Serial.println("Did not find fingerprint sensor :(");
    // Note: Failure expected until external 3.3V rail is stabilized.
  }
}

void loop() {
  // Logic pending final hardware stability tests and 3.3V rail verification.
  delay(1000); 
}
