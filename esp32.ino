#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "BSNL FIBRE 2924182";
const char* password = "bsnleeb0";
const char* serverName = "https://4d717f93-022d-453c-bc60-2fe1aac1e1a1-00-unfbqd9tkjo0.pike.replit.dev/command";  // Replace with your full HTTPS URL

int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  Serial.println("Connected.");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverName);
    int httpCode = http.GET();

    if (httpCode == 200) {
      String payload = http.getString();
      Serial.println(payload);
      if (payload.indexOf("\"on\"") > 0) {
        digitalWrite(ledPin, HIGH);
      } else {
        digitalWrite(ledPin, LOW);
      }
    }

    http.end();
  }
  delay(2000); // Poll every 2 seconds
}
