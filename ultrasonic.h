#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include <Arduino.h>

// ==============================
//       Pin configuration
// ==============================
#define LEFT_TRIG_PIN 2
#define LEFT_ECHO_PIN 3
#define RIGHT_TRIG_PIN 0; // PIN TO BE ADDED
#define RIGHT_ECHO_PIN 0; // PIN TO BE ADDED

void ultrasonicInit();
float readDistanceCM();

#endif
