#include "ultrasonic.h"

void ultrasonicInit() {
  // configure ultrasonic pins
  pinMode(LEFT_TRIG_PIN, OUTPUT);
  pinMode(LEFT_ECHO_PIN, INPUT);
}

float readLeftDistanceCM() {
  // Set TRIG low 
  digitalWrite(LEFT_TRIG_PIN, LOW);
  delayMicroseconds(2);
  // Pulse TRIG for 10 microseconds 
  digitalWrite(LEFT_TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(LEFT_TRIG_PIN, LOW);

  // Measure microseconds taken for sound to send and bounce back
  long duration_us = pulseIn(LEFT_ECHO_PIN, HIGH);

  // distance = time * speed of sound
  // speed of sound in cm / uS = 0.0343
  float distance = (duration_us * 0.0343) / 2.0;
  return distance;
}

float readRightDistanceCM() {
  // Set TRIG low 
  digitalWrite(RIGHT_TRIG_PIN, LOW);
  delayMicroseconds(2);
  // Pulse TRIG for 10 microseconds 
  digitalWrite(RIGHT_TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(RIGHT_TRIG_PIN, LOW);

  // Measure microseconds taken for sound to send and bounce back
  long duration_us = pulseIn(RIGHT_ECHO_PIN, HIGH);

  // distance = time * speed of sound
  // speed of sound in cm / uS = 0.0343
  float distance = (duration_us * 0.0343) / 2.0;
  return distance;
}
