#include "motors.h"
#include "ultrasonic.h"

const int TOLERANCE = 0;

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
    turnLeft(MED);
  } else if(rDist > TOLERANCE) {
    turnRight(MED);
  } else {
    driveForward(FAST);
  }


  delay(100);
}
