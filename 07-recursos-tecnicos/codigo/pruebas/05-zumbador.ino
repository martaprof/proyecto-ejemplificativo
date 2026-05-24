const int ZUMBADOR = 7;

void setup()
{
  pinMode(ZUMBADOR, OUTPUT);
}

void loop()
{
  digitalWrite(ZUMBADOR, HIGH);
  delay(200);
  digitalWrite(ZUMBADOR, LOW);
  delay(800);
}
