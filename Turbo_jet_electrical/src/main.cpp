#include <Arduino.h>
#include<Servo.h>
#include<HX711.h>


Servo servo_motor;
const int Loadcell_dout = 2;
const int Loadcell_sck = 3;

//calibration_readings 
int NMSAMPLES;
float calibration_factor = 7050.0;

HX711 Loadcell(Loadcell_dout, Loadcell_sck);
int servo_motor_mechanism(float);
float Weight_reading();


void setup() {
  servo_motor.attach(9);
  Loadcell.begin(Loadcell_dout, Loadcell_sck);
  Loadcell.set_scale(calibration_factor);
  Loadcell.tare();
  Serial.begin(9600);
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

float Weight_reading() {
  float weight = Loadcell.get_units(NMSAMPLES);
  return weight;
}
