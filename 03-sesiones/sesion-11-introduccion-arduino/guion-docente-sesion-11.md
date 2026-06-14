# Guion docente de la sesión 11: introducción a Arduino

Nivel: 1.º de Bachillerato  
Duración orientativa: 55 minutos  
Agrupamiento: equipos de 3 estudiantes, un ordenador por equipo  
Roles: coordinación-documentación, simulación-montaje y programación-verificación

Este archivo es de uso docente. Para la clase se abre después de revisar el README de la sesión y antes de proyectar la presentación. La actividad que completa el alumnado está separada en `actividad-blink-guiada.md`.

## Finalidad de la sesión

El alumnado debe comprender que Arduino permite controlar salidas y leer entradas mediante un programa. La práctica Blink se utiliza como primer paso para relacionar código, pin físico y comportamiento observable.

La sesión se vincula con el proyecto del invernadero porque los LED de aviso, el zumbador y el servomotor se activarán más adelante desde pines de Arduino.

## Preparación previa del docente

Antes de clase, el docente debe comprobar:

- presentación `presentacion-arduino.pptx`;
- README de la sesión;
- actividad `actividad-blink-guiada.md`;
- plantilla `plantilla-programacion.md`;
- lista de cotejo de uso docente `lista-cotejo.md`;
- código `blink.ino` y `blink_comentado.ino`;
- simulación de Tinkercad de LED parpadeante para la práctica;
- Arduino IDE como software de referencia para explicar escritura y carga de programas;
- Arduino físico, cable USB, LED, resistencia y protoboard si se trabaja en taller.

En el fork de alumnado se pueden conservar los ejemplos `blink.ino` y `blink_comentado.ino`, porque son ejemplos mínimos. No se deben compartir todavía programas finales de medición e integración como solución directa.

## Organización del aula

Cada equipo trabaja con un ordenador. El docente proyecta la presentación, muestra la placa Arduino o una imagen de referencia, señala físicamente los pines y enseña Arduino IDE como software de programación. La práctica del equipo se realiza en Tinkercad Circuits para asegurar que todo el alumnado pueda simular el circuito desde el navegador.

Roles durante la sesión:

- coordinación-documentación: abre el README y completa la plantilla;
- simulación-montaje: prepara el circuito en Tinkercad o protoboard;
- programación-verificación: edita el código y comprueba errores.

El docente debe pedir que el teclado cambie de manos en cada actividad: ejecutar, modificar tiempo y cambiar pin.

## Secuencia de aula

| Minutos | Acción docente | Acción del alumnado | Material |
| --- | --- | --- | --- |
| 0-5 | Conecta la sesión con el proyecto: Arduino será el controlador. | Responde qué entradas y salidas necesitará el invernadero. | Diapositivas 1-2. |
| 5-12 | Muestra la placa y localiza USB, pines digitales, analógicos, 5 V y GND. | Identifica esos elementos en imagen o placa. | Diapositivas 3-4. |
| 12-20 | Explica `setup()`, `loop()`, `pinMode()`, `digitalWrite()` y `delay()`. | Marca esas instrucciones en el código Blink. | Diapositivas 5-6, código. |
| 20-30 | Guía la ejecución del Blink inicial. | Ejecuta simulación y registra pin y tiempos. | Tinkercad Circuits. |
| 30-40 | Propone modificar `delay()`. | Predice, modifica, ejecuta y observa el parpadeo. | Actividad guiada. |
| 40-48 | Propone cambiar el pin del LED. | Mueve cable y modifica código para que coincidan. | Tinkercad Circuits. |
| 48-53 | Revisa errores frecuentes, conecta con sensores futuros y aplica la lista de cotejo como registro docente. | Completa la plantilla y prepara sus evidencias. | Plantilla y lista docente. |
| 53-55 | Indica commit o entrega. | Guarda cambios con mensaje pautado. | Fork del equipo. |

## Cómo explicar Arduino

El docente puede decir:

> Arduino es una placa con un microcontrolador. No decide por sí sola: ejecuta las instrucciones que escribimos. Por eso, si el circuito está bien pero el programa apunta a otro pin, el LED no se encenderá.

Después se pregunta:

- ¿Qué elemento entrega energía al circuito?
- ¿Qué pin estamos usando como salida?
- ¿Dónde vuelve la corriente?
- ¿Qué parte depende del cableado y qué parte depende del código?

## Explicación de `setup()` y `loop()`

Se recomienda usar una comparación sencilla:

```text
setup(): preparo el sistema una vez.
loop(): repito la vigilancia continuamente.
```

En el invernadero:

- `setup()` configurará pines y comunicación serie;
- `loop()` leerá sensores muchas veces;
- `loop()` decidirá si activa avisos o actuadores.

El docente debe insistir en que `loop()` no es una lista de instrucciones que se ejecuta una sola vez, sino un ciclo continuo.

## Código base para proyectar

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

Preguntas durante la explicación:

- ¿Qué valor tiene la variable `led`?
- ¿Qué hace `pinMode(led, OUTPUT)`?
- ¿Qué diferencia hay entre `HIGH` y `LOW`?
- ¿Qué unidad usa `delay()`?

## Depuración guiada

Si el LED no parpadea, el docente no da la solución directa. Usa una secuencia fija:

1. ¿El LED está conectado al pin indicado en el código?
2. ¿La resistencia está en serie?
3. ¿El LED tiene la polaridad correcta?
4. ¿Existe conexión a GND?
5. ¿El pin se ha configurado como `OUTPUT`?
6. ¿La simulación está iniciada?

Esta rutina prepara al alumnado para depurar sensores, alarmas y servomotor en sesiones posteriores.

## Evidencias de la sesión

Cada equipo debe dejar:

1. Plantilla `plantilla-programacion.md` completada.
2. Código Blink modificado.
3. Captura o enlace de simulación.
4. Explicación breve de `setup()` y `loop()`.
5. Commit o entrega:

```text
Sesion 11 - blink modificado - Equipo X
```

## Cierre didáctico

La conclusión esperada es:

> Arduino relaciona código y circuito. Para que una salida funcione, el pin usado en el programa debe coincidir con el pin conectado físicamente. Esta idea será necesaria para programar los avisos del invernadero.
