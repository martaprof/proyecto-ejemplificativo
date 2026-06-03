const int PIN_LUZ = A0;
const int PIN_TMP36 = A1;
const int PIN_HUMEDAD = A2;

const int LED_LUZ = 11;
const int LED_HUMEDAD = 10;
const int LED_TEMPERATURA = 8;
const int ZUMBADOR = 7;

const int UMBRAL_LUZ_BAJA = 910;
const int UMBRAL_HUMEDAD_ALTA = 255;
const float UMBRAL_TEMPERATURA_C = 25.0;

float convertirTMP36(int lectura)
{
  float tension = lectura * (5.0 / 1023.0);
  return (tension - 0.5) * 100.0;
}

void setup()
{
  pinMode(LED_LUZ, OUTPUT);
  pinMode(LED_HUMEDAD, OUTPUT);
  pinMode(LED_TEMPERATURA, OUTPUT);
  pinMode(ZUMBADOR, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int luz = analogRead(PIN_LUZ);
  int humedad = analogRead(PIN_HUMEDAD);
  float temperaturaC = convertirTMP36(analogRead(PIN_TMP36));

  bool avisoLuz = luz < UMBRAL_LUZ_BAJA;
  bool avisoHumedad = humedad > UMBRAL_HUMEDAD_ALTA;
  bool avisoTemperatura = temperaturaC > UMBRAL_TEMPERATURA_C;
  bool alarmaGeneral = avisoLuz || avisoHumedad || avisoTemperatura;

  digitalWrite(LED_LUZ, avisoLuz ? HIGH : LOW);
  digitalWrite(LED_HUMEDAD, avisoHumedad ? HIGH : LOW);
  digitalWrite(LED_TEMPERATURA, avisoTemperatura ? HIGH : LOW);
  digitalWrite(ZUMBADOR, alarmaGeneral ? HIGH : LOW);

  Serial.print("luz=");
  Serial.print(luz);
  Serial.print(" humedad=");
  Serial.print(humedad);
  Serial.print(" temperaturaC=");
  Serial.print(temperaturaC);
  Serial.print(" alarma=");
  Serial.println(alarmaGeneral ? "SI" : "NO");

  delay(250);
}
