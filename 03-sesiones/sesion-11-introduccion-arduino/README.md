# Sesión 11. Introducción a Arduino

## Propósito

Introducir el entorno Arduino y comprender la estructura básica de un programa.

## Pregunta de trabajo

> ¿Cómo puede un microcontrolador leer información del invernadero y tomar decisiones?

## Contenidos

- Placa compatible con Arduino.
- Entradas y salidas digitales.
- Entradas analógicas.
- Estructura `setup()` y `loop()`.
- Primer programa con LED.

## Desarrollo de la sesión

1. Presentación de la placa y sus pines.
2. Explicación de la estructura básica del código.
3. Simulación de un LED controlado desde Arduino.
4. Modificación de tiempos y salidas.
5. Relación con los indicadores del sistema final.

## Esquema básico

```mermaid
flowchart LR
    A["Programa Arduino"] --> B["Salida digital"]
    B --> C["Resistencia"]
    C --> D["LED"]
    D --> E["GND"]
```

## Actividad del alumnado

Crear y modificar un programa básico para encender y apagar un LED.

## Evidencias

- Código inicial.
- Simulación funcionando.
- Captura o enlace del circuito.

## Explicación para el alumnado

Arduino es una placa basada en un microcontrolador. Un microcontrolador es un pequeño sistema capaz de ejecutar instrucciones. A diferencia de un circuito puramente cableado, Arduino puede modificar su comportamiento cambiando el programa. Esto nos permite leer sensores, tomar decisiones y activar salidas sin tener que rediseñar todo el circuito.

La placa compatible con Arduino tiene pines de entrada y salida. Las entradas permiten recibir información del exterior y las salidas permiten controlar componentes. Las entradas y salidas digitales trabajan con dos estados: alto y bajo. Por ejemplo, un pin digital puede encender o apagar un LED.

Las entradas analógicas permiten leer tensiones intermedias entre 0 V y 5 V. Arduino convierte esa tensión en un número entre 0 y 1023. Por eso son útiles para sensores como LDR, TMP36 o potenciómetros, que entregan señales variables.

Un programa básico de Arduino tiene dos partes principales:

```cpp
void setup() {
  // Se ejecuta una vez al arrancar
}

void loop() {
  // Se repite continuamente
}
```

En `setup()` configuramos pines, comunicación serie u otros elementos iniciales. Esta parte se ejecuta una sola vez cuando la placa arranca. En `loop()` colocamos las acciones que queremos que se repitan continuamente: leer sensores, comprobar condiciones y activar salidas.

El primer programa con LED es una práctica sencilla pero importante. Encender y apagar un LED permite comprobar la estructura del código, el uso de `pinMode()`, `digitalWrite()` y `delay()`, y la relación entre una instrucción de programa y un comportamiento físico.

## Desarrollo guiado de la sesión

La sesión comienza con la presentación de la placa Arduino o compatible. El alumnado debe localizar el puerto USB, los pines digitales, los pines analógicos, 5 V y GND. Esta identificación física es necesaria para evitar conexiones incorrectas en sesiones posteriores.

Después se explican las entradas y salidas digitales. El alumnado debe comprender que un pin digital puede trabajar como entrada o como salida, pero debe configurarse en el programa. En esta sesión se usará como salida para controlar un LED. La instrucción `pinMode()` será la forma de declarar ese uso.

También se introducen las entradas analógicas, aunque se trabajarán con más detalle en la sesión siguiente. Se señalará que los pines `A0`, `A1` y `A2` serán importantes para leer luz, temperatura y humedad simulada. Así el alumnado entiende que Arduino no solo enciende salidas, sino que también recibe información.

La estructura `setup()` y `loop()` se trabajará escribiendo un programa mínimo. El docente puede mostrar primero el código completo y después pedir al alumnado que identifique qué parte se ejecuta una vez y qué parte se repite. Esta distinción será fundamental para programar lecturas continuas.

El primer programa con LED se realizará en Tinkercad o Arduino IDE. El alumnado debe conectar un LED con resistencia, cargar o simular el programa y modificar los tiempos de encendido y apagado. Al cambiar `delay()`, observará que una instrucción modifica directamente el comportamiento del circuito.

La sesión termina relacionando el LED de prueba con los indicadores del sistema final. Aunque el circuito sea sencillo, la idea será la misma: Arduino activará salidas cuando detecte una condición concreta en el invernadero.

## Ejemplo guiado

Este programa enciende y apaga un LED conectado al pin 13:

```cpp
const int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
```

Si cambiamos `delay(1000)` por `delay(200)`, el parpadeo será más rápido. Esta pequeña modificación permite comprobar que el código controla el comportamiento físico del circuito.

## Mini-ejercicios

1. Explica qué hace `pinMode(led, OUTPUT)`.
2. Cambia el tiempo de parpadeo para que el LED esté encendido medio segundo.
3. Añade un segundo LED en otro pin y escribe cómo lo configurarías.
4. Explica por qué `loop()` es útil para leer continuamente sensores del invernadero.

## Recursos

- Código Arduino de referencia: [`../../07-recursos-tecnicos/codigo/sistema-medicion-invernadero.ino`](../../07-recursos-tecnicos/codigo/sistema-medicion-invernadero.ino).
- #TODO Crear o enlazar simulación de primer programa Arduino con parpadeo de LED.
- Enlace oficial de descarga de Arduino IDE: [Arduino Software](https://www.arduino.cc/en/software).

## Tarea para casa

Explicar con sus propias palabras qué función cumplen `setup()` y `loop()`.
