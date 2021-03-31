#include <Arduino.h>
#include "WiFi.h"
#include "HTTPClient.h"

#define relaispin 2

const char* ssid = "2.4GHZ_Home_Sweet_Home";
const char* password =  "redacted";

const String endpoint = "https://google.com/";

void setup() {
  Serial.begin(115200);
  pinMode(relaispin, OUTPUT);
  digitalWrite(relaispin,HIGH);
  delay(1000);
  digitalWrite(relaispin,LOW);
}

long delayBetweenCalls = 1000;

unsigned long lastUpdate = 0;

void loop() {
}
