// Sistema integrado de medicion de condiciones atmosfericas en un invernadero
// Lecturas: luz, temperatura TMP36 y humedad simulada.
// Avisos: LED de luz, LED de humedad, LED de temperatura y zumbador.
// Ampliacion: control de servomotor con dos LDR de seguimiento.

#include <Servo.h>

const int PIN_LUZ = A0;
const int PIN_TMP36 = A1;
const int PIN_HUMEDAD = A2;
const int PIN_LUZ_IZQ = A3;
const int PIN_LUZ_DCHA = A4;

const int LED_LUZ = 11;
const int LED_HUMEDAD = 10;
const int LED_TEMPERATURA = 8;
const int ZUMBADOR = 7;
const int PIN_SERVO = 9;

const int UMBRAL_LUZ_BAJA = 910;
const int UMBRAL_HUMEDAD = 255;
const float UMBRAL_TEMPERATURA_C = 25.0;

const float Kp = 0.2;
float posicionServo = 90.0;

Servo servoInvernadero;

float leerTemperaturaC(int pin)
{
  int lectura = analogRead(pin);
  float tension = lectura * (5.0 / 1023.0);
  return (tension - 0.5) * 100.0;
}

void escribirAviso(int pin, bool activo)
{
  digitalWrite(pin, activo ? HIGH : LOW);
}

void actualizarServo()
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

  Serial.print("error_luz=");
  Serial.print(error);
  Serial.print(" servo=");
  Serial.println(posicionServo);
}

void setup()
{
  pinMode(PIN_LUZ, INPUT);
  pinMode(PIN_TMP36, INPUT);
  pinMode(PIN_HUMEDAD, INPUT);
  pinMode(PIN_LUZ_IZQ, INPUT);
  pinMode(PIN_LUZ_DCHA, INPUT);

  pinMode(LED_LUZ, OUTPUT);
  pinMode(LED_HUMEDAD, OUTPUT);
  pinMode(LED_TEMPERATURA, OUTPUT);
  pinMode(ZUMBADOR, OUTPUT);

  servoInvernadero.attach(PIN_SERVO, 500, 2500);
  servoInvernadero.write((int)posicionServo);

  Serial.begin(9600);
}

void loop()
{
  int luz = analogRead(PIN_LUZ);
  int humedad = analogRead(PIN_HUMEDAD);
  float temperaturaC = leerTemperaturaC(PIN_TMP36);

  bool avisoLuz = luz < UMBRAL_LUZ_BAJA;
  bool avisoHumedad = humedad > UMBRAL_HUMEDAD;
  bool avisoTemperatura = temperaturaC > UMBRAL_TEMPERATURA_C;
  bool alarmaGeneral = avisoLuz || avisoHumedad || avisoTemperatura;

  escribirAviso(LED_LUZ, avisoLuz);
  escribirAviso(LED_HUMEDAD, avisoHumedad);
  escribirAviso(LED_TEMPERATURA, avisoTemperatura);
  escribirAviso(ZUMBADOR, alarmaGeneral);

  Serial.print("luz=");
  Serial.print(luz);
  Serial.print(" humedad=");
  Serial.print(humedad);
  Serial.print(" temperaturaC=");
  Serial.print(temperaturaC);
  Serial.print(" alarma=");
  Serial.println(alarmaGeneral ? "SI" : "NO");

  actualizarServo();
  delay(250);
}
