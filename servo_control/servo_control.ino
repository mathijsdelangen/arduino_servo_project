#include <Servo.h>

Servo myservo;

void setup()
{
  myservo.attach(9);
}

void loop()
{
  myservo.writeMicroseconds(1511);
  delay(10000);
  
  myservo.writeMicroseconds(1450);
  delay(1000);
  
  myservo.writeMicroseconds(1400);
  delay(1000);
  
  myservo.writeMicroseconds(1350);
  delay(1000);
  
  myservo.writeMicroseconds(1300);
  delay(1000);
  
  myservo.writeMicroseconds(2000);
  delay(1000);
}
