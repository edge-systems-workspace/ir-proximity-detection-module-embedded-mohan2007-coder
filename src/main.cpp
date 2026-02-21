#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * * @author Mohan Sharma
 * * @date YYYY-MM-DD
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

// TODO 1:
// DefineIR sensor digital pin(Use pin 2)
const int IR_PIN = 2;

// TODO 2:
// Createvariable to store sensor state
int sensorState = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Configure IR pin as INPUT
    pinMode(IR_PIN, INPUT);

    // TODO 5:
    // Print system initialization message
    Serial.println("=== IR Obstacle Detection System Initialized ===");
}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor
    sensorState = digitalRead(IR_PIN);

    // TODO 7:
    // If obstacle detected
    if (sensorState == LOW) {
        Serial.println("Obstacle Detected");
    }
    else {
        Serial.println("No Obstacle");
    }

    Serial.println("-----------------------");

    // TODO 8:
    // Add small delay (200–500ms)
    delay(300);
}