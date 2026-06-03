#include <Servo.h>

const int PIN_SERVO = 9;
Servo servoInvernadero;

void setup()
{
  servoInvernadero.attach(PIN_SERVO, 500, 2500);
}

void loop()
{
  servoInvernadero.write(0);
  delay(1000);

  servoInvernadero.write(90);
  delay(1000);

  servoInvernadero.write(180);
  delay(1000);
}
