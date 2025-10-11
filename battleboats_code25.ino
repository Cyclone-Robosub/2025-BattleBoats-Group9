#include "motors.h"
#include "ultrasonic.h"

void setup() {
  Serial.begin(9600);
  motorInit();
  ultrasonicInit();
}

void loop() {
  
  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" cm");



  delay(100);
}
