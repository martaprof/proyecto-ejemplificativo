// Prueba basica de servomotor SG90.
// El objetivo es comprobar que el servo responde a tres posiciones:
// 0 grados, 90 grados y 180 grados.

#include <Servo.h>  // Libreria necesaria para controlar servomotores.

const int PIN_SERVO = 9;  // Pin digital que envia la senal de control.
Servo servoInvernadero;   // Objeto que representa el servomotor.

void setup()
{
  // Se asocia el servo al pin elegido. Los valores 500 y 2500 ajustan
  // el rango de pulsos usado habitualmente en Tinkercad para un SG90.
  servoInvernadero.attach(PIN_SERVO, 500, 2500);
}

void loop()
{
  servoInvernadero.write(0);    // Lleva el servo a 0 grados.
  delay(1000);

  servoInvernadero.write(90);   // Lleva el servo a la posicion central.
  delay(1000);

  servoInvernadero.write(180);  // Lleva el servo a 180 grados.
  delay(1000);
}
