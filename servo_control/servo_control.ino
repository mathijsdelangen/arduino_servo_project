#include <Servo.h>

Servo rotating_servo;

// Set pin numbers:
const int manual_control_pin = 6;  // The ID of the switch pin
const int servo_pin          = 9;  // The ID of the servo pin

// Set servo characteristics
const int servo_offset       = 6;  // The offset of the servo

enum movement {
  MOVING_LEFT,
  MOVING_RIGHT,
  IDLE
};

int button_state             = 0;           // The state of the button
movement current_movement    = IDLE;        // Current movement
movement prev_movement       = MOVING_LEFT; // Previous movement (right or left)

void setup()
{
  rotating_servo.attach(servo_pin);
  
  pinMode(manual_control_pin, INPUT);
}

void loop()
{
  // Read button value
  button_state = digitalRead(manual_control_pin);
  
  // Button pressed
  if ( button_state == HIGH )
  {
    if ( current_movement == IDLE )
    {
      if ( prev_movement == MOVING_LEFT )
      {
        MoveRight();
      }
      else
      {
        MoveLeft();
      }
    }
  }

  // Button not pressed
  if ( button_state == LOW )
  {
    if ( current_movement == MOVING_LEFT || current_movement == MOVING_RIGHT )
    {
      StopMoving();
    }
  }

  delay(100); // Wait a second
}

void MoveLeft()
{
  current_movement = MOVING_LEFT;
  rotating_servo.writeMicroseconds(1000+servo_offset);
}

void MoveRight()
{
  current_movement = MOVING_RIGHT;
  rotating_servo.writeMicroseconds(2000+servo_offset);
}

void StopMoving()
{
  prev_movement    = current_movement;
  current_movement = IDLE;
  rotating_servo.writeMicroseconds(1500+servo_offset);
}
