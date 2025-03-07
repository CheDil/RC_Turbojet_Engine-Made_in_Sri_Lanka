#include <Arduino.h>
#include<Servo.h>

Servo servo_motor;

int servo_motor_mechanism(float);

void setup() {
  servo_motor.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int servo_motor_mechanism(float angle) {
  servo_motor.write(angle);
  delay(1000);
  return 0;
}