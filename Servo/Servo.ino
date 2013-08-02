//Servo calibrations for the HiTEC HS-311 servo

#include <Servo.h>

Servo myservo;
void setup(){
  myservo.attach(10);
  
}

void loop(){
  myservo.writeMicroseconds(1500); //return servo to center
  delay(2000);
  //standard servo shaft
  
  myservo.writeMicroseconds(600); //rotate 90 degrees counter clockwise
  delay(2000);
  
  myservo.writeMicroseconds(1500); //return servo to center
  delay(2000);
  
  myservo.writeMicroseconds(2400); //rotate 90 degress clockwise
  delay(2000);
  
  
}

