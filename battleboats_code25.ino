#include "motors.h"
#include "ultrasonic.h"

// Tolerance of 30 cm from wall
const int TOLERANCE = 30;

void setup() {
  Serial.begin(9600);
  motorInit();
  ultrasonicInit();
}

void loop() {

  float lDist = readLeftDistanceCM();
  float rDist = readRightDistanceCM();
  
  Serial.print("Left Distance: ");
  Serial.print(lDist);
  Serial.println(" cm");
  Serial.print("Right Distance: ");
  Serial.print(rDist);
  Serial.println(" cm");

  if(lDist > TOLERANCE) {
    Serial.println("TURNING LEFT");
    turnLeft(175);
  } else if(rDist > TOLERANCE) {
    Serial.println("TURNING RIGHT");
    turnRight(175);
  } else {
    Serial.println("DRIVING FORWARD");
    driveForward(255);
  }


  delay(100);
}
