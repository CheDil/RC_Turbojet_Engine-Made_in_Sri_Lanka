#include <Arduino.h>
#include<ESP32Servo.h>
#include<HX711.h>
#include<BluetoothSerial.h>

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial Serial_BT;
Servo servo_motor;
const int Loadcell_dout = 2;
const int Loadcell_sck = 4;
const int pump_relay_1 = 5;
const int relay_pin = 5;

//calibration_readings 
int NMSAMPLES = 10;
float calibration_factor = 7050.0;

HX711 Loadcell;
int servo_motor_mechanism(float);
float Weight_reading();
void turn_on_off_pump(int);
void turn_on_off_relay(int);


void setup() {
  servo_motor.attach(18);
  Loadcell.begin(Loadcell_dout, Loadcell_sck);
  Loadcell.set_scale(calibration_factor);
  Loadcell.tare();
  Serial.begin(9600);
  Serial_BT.begin("ESP32");
  Serial.println("The device started, now you can pair it with bluetooth!");
  pinMode(pump_relay_1, OUTPUT);
  pinMode(relay_pin, OUTPUT);
  }


void loop() {
  if (Serial_BT.available()) {
    String data = "";
    while (Serial_BT.available()) {
      char c = Serial_BT.read();
      if (c == '\n') break; // Assuming newline as the delimiter
      data += c;
    }
    if(data == "po"){
      turn_on_off_pump(1);
    }
    else if(data == "pc"){
      turn_on_off_pump(0);
    }
    else if(data == "ro"){
      turn_on_off_relay(1);
    }
    else if(data == "rc"){
      turn_on_off_relay(0);
    }
    else if(data == "w"){
      Serial.println("Inside weight reading");
      Serial.println(Weight_reading());
    }
    else{
      servo_motor_mechanism(data.toFloat());
    }
}
// Serial.println(Weight_reading());
// delay(100);
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

void turn_on_off_pump(int state) {
  if (state == 1) {
    digitalWrite(pump_relay_1, HIGH);
  } else {
    digitalWrite(pump_relay_1, LOW);
  }
}

void turn_on_off_relay(int state) {
  if (state == 1) {
    digitalWrite(relay_pin, HIGH);
  } else {
    digitalWrite(relay_pin, LOW);
  }
}