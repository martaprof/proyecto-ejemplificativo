// Integracion del control automatico con servomotor.
// Este archivo aisla el subsistema de seguimiento para comprobarlo antes
// de unirlo con medicion de temperatura, humedad y alarmas.

#include <Servo.h>

const int PIN_LUZ_IZQ = A3;   // LDR colocada en el lado izquierdo.
const int PIN_LUZ_DCHA = A4;  // LDR colocada en el lado derecho.
const int PIN_SERVO = 9;      // Pin de senal del servomotor.

const float Kp = 0.2;         // Ganancia proporcional.
float posicionServo = 90.0;   // Posicion inicial centrada.

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

  // La diferencia entre ambas lecturas indica hacia donde deberia moverse.
  int error = luzIzq - luzDcha;

  // El error se transforma en una posicion de 0 a 180 grados.
  int posicionObjetivo = map(error, -700, 700, 0, 180);
  posicionObjetivo = constrain(posicionObjetivo, 0, 180);

  // El control proporcional acerca el servo de forma suave a la posicion objetivo.
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
