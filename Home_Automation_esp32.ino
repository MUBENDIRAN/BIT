#define BLYNK_TEMPLATE_ID "TMPL3pmc4yKrq"  // Use your actual Template ID
#define BLYNK_TEMPLATE_NAME "light auto"
#define BLYNK_AUTH_TOKEN "yWs67JHKSryzXBxUDAB-Vpl06ssQITOP"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// Replace with your WiFi credentials
char ssid[] = "Mubiii";
char pass[] = "mube@7722";

// Relay control pin
#define RELAY_PIN 23
#define RELAY_ON LOW    // Adjust to HIGH if your relay is active HIGH
#define RELAY_OFF HIGH

// Virtual pin from Blynk app
#define VIRTUAL_PIN V0

// Handle Blynk app switch event
BLYNK_WRITE(VIRTUAL_PIN) {
  int switchState = param.asInt();
  digitalWrite(RELAY_PIN, switchState == 1 ? RELAY_ON : RELAY_OFF);
  Serial.print("Relay state changed to: ");
  Serial.println(switchState == 1 ? "ON" : "OFF");
}

void setup() {
  Serial.begin(115200);

  // Configure relay pin
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, RELAY_OFF); // Ensure relay starts OFF

  // Connect to Blynk
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
