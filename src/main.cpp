#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Riddhima Rajput
 * @date 2026-02-21
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

int ldrPin = A0;

int ldrValue;
int lightPercent;

void setup() {

    Serial.begin(9600);

    Serial.println("LDR Light Monitoring System Initialized");
}

void loop() {

    ldrValue = analogRead(ldrPin);
    lightPercent = map(ldrValue, 0, 1023, 0, 100);

    Serial.println(ldrValue);

    if(lightPercent > 50) {
        Serial.println("Bright environment detected!");
    } else {
        Serial.println("Dark environment detected!");
    }


}
