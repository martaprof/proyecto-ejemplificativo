// C++ code
//
int lightValue = 0;

int tempValue = 0;

int humValue = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  lightValue = analogRead(A0);
  Serial.println("luz");
  Serial.println(lightValue);
  tempValue = analogRead(A1);
  Serial.println("temp");
  Serial.println(tempValue);
  humValue = analogRead(A2);
  Serial.println("hum");
  Serial.println(humValue);
  if (lightValue < 910) {
    digitalWrite(11, HIGH);
  }
  if (humValue > 255) {
    digitalWrite(10, HIGH);
  }
  if (tempValue > 155) {
    digitalWrite(8, HIGH);
  }
  delay(200); // Wait for 200 millisecond(s)
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(200); // Wait for 200 millisecond(s)
}
