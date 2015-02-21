#include <Servo.h>

Servo myservo;

// set pin numbers:
const int servoPin     = 9;     // the number of the servo pin

// set servo characteristics
const int servo_offset = 11;    // The offset of the servo

void setup()
{
  myservo.attach(servoPin);
}

void loop()
{
  myservo.writeMicroseconds(1500+servo_offset);
  delay(10000);
  
  myservo.writeMicroseconds(1450+servo_offset);
  delay(1000);
  
  myservo.writeMicroseconds(1400+servo_offset);
  delay(1000);
  
  myservo.writeMicroseconds(1350+servo_offset);
  delay(1000);
  
  myservo.writeMicroseconds(1300+servo_offset);
  delay(1000);
  
  myservo.writeMicroseconds(2000+servo_offset);
  delay(1000);
}
