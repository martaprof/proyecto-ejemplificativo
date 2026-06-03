// Sistema de alarma para el invernadero.
// Lee luz, temperatura y humedad simulada, y activa avisos si se superan
// los umbrales definidos para cada variable.

const int PIN_LUZ = A0;       // Entrada analogica conectada al divisor con LDR.
const int PIN_TMP36 = A1;     // Entrada analogica conectada al sensor TMP36.
const int PIN_HUMEDAD = A2;   // Entrada analogica conectada al potenciometro.

const int LED_LUZ = 11;          // Aviso visual para luz baja.
const int LED_HUMEDAD = 10;      // Aviso visual para humedad simulada fuera de rango.
const int LED_TEMPERATURA = 8;   // Aviso visual para temperatura elevada.
const int ZUMBADOR = 7;          // Aviso acustico general.

const int UMBRAL_LUZ_BAJA = 910;
const int UMBRAL_HUMEDAD_ALTA = 255;
const float UMBRAL_TEMPERATURA_C = 25.0;

float convertirTMP36(int lectura)
{
  // Arduino entrega valores entre 0 y 1023. Primero se transforman en tension.
  float tension = lectura * (5.0 / 1023.0);

  // El TMP36 entrega 500 mV a 0 grados Celsius y cambia 10 mV por grado.
  return (tension - 0.5) * 100.0;
}

void setup()
{
  // Las salidas se configuran para controlar indicadores y zumbador.
  pinMode(LED_LUZ, OUTPUT);
  pinMode(LED_HUMEDAD, OUTPUT);
  pinMode(LED_TEMPERATURA, OUTPUT);
  pinMode(ZUMBADOR, OUTPUT);

  // El monitor serie permite observar lecturas y depurar umbrales.
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

  // La alarma general se activa si aparece cualquiera de los avisos.
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
