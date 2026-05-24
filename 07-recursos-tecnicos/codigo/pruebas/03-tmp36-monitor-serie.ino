const int PIN_TMP36 = A1;

float leerTemperaturaC(int pin)
{
  int lectura = analogRead(pin);
  float tension = lectura * (5.0 / 1023.0);
  return (tension - 0.5) * 100.0;
}

void setup()
{
  pinMode(PIN_TMP36, INPUT);
  Serial.begin(9600);
}

void loop()
{
  float temperaturaC = leerTemperaturaC(PIN_TMP36);
  Serial.print("Temperatura: ");
  Serial.print(temperaturaC);
  Serial.println(" C");
  delay(500);
}
