#include <Servo.h>

Servo rotating_servo;

// Set pin numbers:
const int switch_pin    = 6;    // The ID of the switch pin
const int servo_pin     = 9;    // The ID of the servo pin

// Set servo characteristics
const int servo_offset = 11;    // The offset of the servo

int button_state = 0;           // The state of the button

void setup()
{
  rotating_servo.attach(servo_pin);
  
  pinMode(switch_pin, INPUT);
}

void loop()
{
  // Read button value
  button_state = digitalRead(switch_pin);
  
  // Stop the servo
  //rotating_servo.writeMicroseconds(1500+servo_offset);
  //delay(10000); // Wait for 10s
    
  if (button_state == HIGH)
  {    
    // Rotate with different speeds
    rotating_servo.writeMicroseconds(1450+servo_offset);
    delay(100);
    
    rotating_servo.writeMicroseconds(1400+servo_offset);
    delay(100);
    
    rotating_servo.writeMicroseconds(1350+servo_offset);
    delay(100);
    
    rotating_servo.writeMicroseconds(1300+servo_offset);
    delay(100);
  }
  
  if (button_state == LOW)
  { 
    // Rotate the other way
    rotating_servo.writeMicroseconds(2000+servo_offset);
    delay(100);
  }
  
  //delay(1000);
}
