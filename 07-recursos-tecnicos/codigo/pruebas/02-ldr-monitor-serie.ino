const int PIN_LDR = A0;

void setup()
{
  pinMode(PIN_LDR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int luz = analogRead(PIN_LDR);
  Serial.print("Lectura LDR: ");
  Serial.println(luz);
  delay(250);
}
