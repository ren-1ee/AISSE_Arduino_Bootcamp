/*
  Author: Crawford Lieu
  Learning Intention: The students will learn how to connect and control a servo motor.
  Success Criteria:
    1. I understand how to connect the servo motor
    2. I can manually write different degrees of movement to the servo
    3. I can map a potentiometer to a servo and control its movement
    4. I understand that a 180deg servo angle of movement is set by a frequency signal sent from the microcontroller

  Student Notes: 

  Documentation:
    https://www.sparkfun.com/servos
    https://github.com/arduino-libraries/Servo <-- We are still using this library

  Schematic:
    https://www.tinkercad.com/things/lQ9RyYJRoLn?sharecode=MKlN0A7R0WGodkdTRKkPJO7I8PeI5L_GCR7pCclQ0qM
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/10.servoMotor/Bootcamp-servoMotor.png
*/

#include <Servo.h>

// Create a servo object.
Servo myServo;

static unsigned int myServoPin = 8;

void setup() {
  // Set-up SM
  Serial.begin(9600);
  Serial.println("");
  Serial.println("SM configured to @9600br.");
  Serial.println("-----------------------------------");
  
  // Configure myServo to pin.
  myServo.attach(myServoPin);
  
  // Return servo to 0.
  unsigned int val = 0;
  myServo.write(val);
  delay(500);
}

// The loop function runs over and over again forever
void loop() {
  unsigned int i = 0;
  unsigned int o = 180;

  // Slowly sweep servo 180 degrees.
  for (unsigned int i = 0; i <= 180; i++) {
    myServo.write(i);
    Serial.print("i:");
    Serial.println(i);
    delay(50);
  }

  // Sweep back to 0 degrees.
  for (int o = 180; o >= 0; o--) {
    myServo.write(o);
    Serial.print("o:");
    Serial.println(o);
    delay(50);
  }
}
