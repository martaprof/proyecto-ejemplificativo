// Ejemplo básico Blink.
// Este programa enciende y apaga un LED conectado al pin 13.

// Se declara una constante para indicar el pin utilizado por el LED.
// En muchas placas Arduino Uno, el pin 13 también está conectado al LED integrado.
const int led = 13;

void setup() {
  // setup() se ejecuta una sola vez cuando la placa arranca o se reinicia.

  // pinMode() configura el pin indicado.
  // OUTPUT significa que el pin se usará como salida digital.
  pinMode(led, OUTPUT);
}

void loop() {
  // loop() se repite continuamente mientras la placa esté encendida.

  // digitalWrite() escribe un estado digital en el pin.
  // HIGH pone el pin a nivel alto y enciende el LED.
  digitalWrite(led, HIGH);

  // delay() detiene el programa durante el tiempo indicado en milisegundos.
  // 1000 ms equivalen a 1 segundo.
  delay(1000);

  // LOW pone el pin a nivel bajo y apaga el LED.
  digitalWrite(led, LOW);

  // El LED permanece apagado durante 1 segundo.
  delay(1000);
}
