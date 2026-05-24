const int PIN_HUMEDAD = A2;

void setup()
{
  pinMode(PIN_HUMEDAD, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int humedad = analogRead(PIN_HUMEDAD);
  int humedadPorcentaje = map(humedad, 0, 1023, 0, 100);

  Serial.print("Humedad simulada: ");
  Serial.print(humedadPorcentaje);
  Serial.println(" %");
  delay(500);
}
