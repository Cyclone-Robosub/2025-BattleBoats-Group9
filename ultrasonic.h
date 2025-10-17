#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#include <Arduino.h>

// ==============================
//       Pin configuration
// ==============================
#define LEFT_TRIG_PIN 9
#define LEFT_ECHO_PIN 8
#define RIGHT_TRIG_PIN 5
#define RIGHT_ECHO_PIN 4

void ultrasonicInit();
float readRightDistanceCM();
float readLeftDistanceCM();

#endif
