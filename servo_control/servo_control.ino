#include <Servo.h>

Servo rotating_servo;

// set pin numbers:
const int servo_pin     = 9;     // the number of the servo pin

// set servo characteristics
const int servo_offset = 11;    // The offset of the servo

void setup()
{
  rotating_servo.attach(servo_pin);
}

void loop()
{
  // Stop the servo
  rotating_servo.writeMicroseconds(1500+servo_offset);
  delay(10000); // Wait for 10s
  
  // Rotate with different speeds
  rotating_servo.writeMicroseconds(1450+servo_offset);
  delay(1000);
  
  rotating_servo.writeMicroseconds(1400+servo_offset);
  delay(1000);
  
  rotating_servo.writeMicroseconds(1350+servo_offset);
  delay(1000);
  
  rotating_servo.writeMicroseconds(1300+servo_offset);
  delay(1000);
  
  // Rotate the other way
  rotating_servo.writeMicroseconds(2000+servo_offset);
  delay(1000);
}
