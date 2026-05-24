#include <Servo.h>

const int PIN_LUZ_IZQ = A0;
const int PIN_LUZ_DCHA = A1;
const int PIN_SERVO = 9;
const float Kp = 0.2;

float posicion = 90.0;
Servo servo;

void setup()
{
  pinMode(PIN_LUZ_IZQ, INPUT);
  pinMode(PIN_LUZ_DCHA, INPUT);
  servo.attach(PIN_SERVO, 500, 2500);
  servo.write((int)posicion);
  Serial.begin(9600);
}

void loop()
{
  int luzIzq = analogRead(PIN_LUZ_IZQ);
  int luzDcha = analogRead(PIN_LUZ_DCHA);
  int error = luzIzq - luzDcha;
  int posicionObjetivo = map(error, -700, 700, 0, 180);
  posicionObjetivo = constrain(posicionObjetivo, 0, 180);

  posicion += (posicionObjetivo - posicion) * Kp;
  posicion = constrain(posicion, 0, 180);

  Serial.print("Error: ");
  Serial.print(error);
  Serial.print(" Posicion: ");
  Serial.println(posicion);

  servo.write((int)posicion);
  delay(20);
}
