// C++ code
//
#include <Servo.h>

float posicion = 0;

int luzIzq = 0;

int luzDch = 0;

int error = 0;

float movimiento = 0;

int pos_obj = 0;

float error_pos = 0;

float Kp = 0.2;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
  pinMode(A1, INPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);

  posicion = 90;
  servo_9.write((int)posicion);
}

void loop()
{
  luzDch = analogRead(A1);
  luzIzq = analogRead(A0);
  error = (luzIzq - luzDch);
  Serial.println(error);
  // pos_obj = (((error + 1023) * 180) / 2046);
  pos_obj = map(error, -700, 700, 0, 180);
  error_pos = (pos_obj - posicion);
  movimiento = (error_pos * Kp);
  posicion += movimiento;
  if (posicion > 180) {
    posicion = 180;
  }
  if (posicion < 0) {
    posicion = 0;
  }
  Serial.println(posicion);
  servo_9.write(posicion);
  delay(20); // Wait for 20 millisecond(s)
}