#include <Servo.h>

const int PIN_LUZ_IZQ = A3;
const int PIN_LUZ_DCHA = A4;
const int PIN_SERVO = 9;

const float Kp = 0.2;
float posicionServo = 90.0;

Servo servoInvernadero;

void setup()
{
  pinMode(PIN_LUZ_IZQ, INPUT);
  pinMode(PIN_LUZ_DCHA, INPUT);
  servoInvernadero.attach(PIN_SERVO, 500, 2500);
  servoInvernadero.write((int)posicionServo);
  Serial.begin(9600);
}

void loop()
{
  int luzIzq = analogRead(PIN_LUZ_IZQ);
  int luzDcha = analogRead(PIN_LUZ_DCHA);
  int error = luzIzq - luzDcha;

  int posicionObjetivo = map(error, -700, 700, 0, 180);
  posicionObjetivo = constrain(posicionObjetivo, 0, 180);

  float errorPosicion = posicionObjetivo - posicionServo;
  posicionServo += errorPosicion * Kp;
  posicionServo = constrain(posicionServo, 0, 180);

  servoInvernadero.write((int)posicionServo);

  Serial.print("luzIzq=");
  Serial.print(luzIzq);
  Serial.print(" luzDcha=");
  Serial.print(luzDcha);
  Serial.print(" error=");
  Serial.print(error);
  Serial.print(" servo=");
  Serial.println(posicionServo);

  delay(100);
}
