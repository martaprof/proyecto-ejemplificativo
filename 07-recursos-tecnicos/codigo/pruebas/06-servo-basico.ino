#include <Servo.h>

const int PIN_SERVO = 9;
Servo servo;

void setup()
{
  servo.attach(PIN_SERVO, 500, 2500);
}

void loop()
{
  servo.write(0);
  delay(1000);
  servo.write(90);
  delay(1000);
  servo.write(180);
  delay(1000);
}
