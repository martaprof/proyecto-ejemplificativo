// Control proporcional basico de un servomotor con dos LDR.
// La diferencia entre la luz izquierda y derecha genera un error.
// Ese error se transforma en una posicion objetivo y se aplica de forma gradual.

#include <Servo.h>

float posicion = 90.0;  // Posicion inicial del servo.
int luzIzq = 0;
int luzDch = 0;
int error = 0;
float movimiento = 0.0;
int pos_obj = 90;
float error_pos = 0.0;
float Kp = 0.2;         // Ganancia proporcional: controla la rapidez de respuesta.

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
  pinMode(A1, INPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);

  servo_9.write((int)posicion);
}

void loop()
{
  luzDch = analogRead(A1);
  luzIzq = analogRead(A0);

  // Si el error es positivo, hay mas luz a la izquierda.
  // Si es negativo, hay mas luz a la derecha.
  error = luzIzq - luzDch;
  Serial.println(error);

  // Se convierte el error en una posicion objetivo entre 0 y 180 grados.
  pos_obj = map(error, -700, 700, 0, 180);
  pos_obj = constrain(pos_obj, 0, 180);

  // El servo no salta directamente a la posicion final: se acerca poco a poco.
  error_pos = pos_obj - posicion;
  movimiento = error_pos * Kp;
  posicion += movimiento;

  posicion = constrain(posicion, 0, 180);

  Serial.println(posicion);
  servo_9.write((int)posicion);
  delay(20);
}
