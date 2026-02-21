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

    // TODO 5:
    // Read analog value from LDR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    // TODO 8:
    // Print brightness status

    // TODO 9:
    // Add delay (500ms or 1 second)
}
