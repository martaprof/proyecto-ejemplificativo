# Actividad guiada: primer programa Blink

Nivel: 1.º de Bachillerato  
Trabajo: equipos de 3  
Duración estimada: 30 minutos dentro de la sesión 11

Este archivo es la hoja de trabajo del alumnado. El docente no lo usa como guion de clase completo, sino como actividad que se abre después de introducir Arduino como hardware y software mediante la presentación.

## Objetivo

Ejecutar y modificar un programa básico de Arduino para comprobar que el código controla una salida física o simulada.

## Material

- Tinkercad Circuits.
- LED.
- Resistencia de 220 ohmios o 330 ohmios.
- Arduino o placa compatible en simulación.
- Código `blink.ino` o `blink_comentado.ino`.
- Plantilla `plantilla-programacion.md`.
- La lista de cotejo queda reservada para la evaluación del docente.

## Reparto de roles

| Rol | Tarea durante la actividad |
| --- | --- |
| Coordinación-documentación | Completa la plantilla y prepara el commit. |
| Simulación-montaje | Coloca LED, resistencia y cables. |
| Programación-verificación | Edita el código y ejecuta pruebas. |

## Parte 1. Identificar la placa

Completa:

| Elemento | ¿Dónde está? | ¿Para qué sirve? |
| --- | --- | --- |
| USB |  |  |
| Pin digital 13 |  |  |
| GND |  |  |
| 5 V |  |  |
| Pines A0-A5 |  |  |

## Parte 2. Ejecutar Blink sin modificar

1. Abre el código Blink.
2. Localiza la variable del LED.
3. Comprueba qué pin usa.
4. Ejecuta la simulación.
5. Observa el parpadeo.

Registra:

| Dato | Respuesta |
| --- | --- |
| Pin utilizado |  |
| Tiempo encendido |  |
| Tiempo apagado |  |
| ¿Funciona a la primera? |  |
| Si no funciona, ¿qué se revisó? |  |

## Parte 3. Modificar el tiempo

Antes de tocar el código, predice:

| Cambio | Predicción |
| --- | --- |
| `delay(1000)` a `delay(500)` |  |
| `delay(1000)` a `delay(200)` |  |
| `delay(1000)` a `delay(2000)` |  |

Después modifica, ejecuta y comprueba:

| Valor usado | Resultado observado | ¿Coincide con la predicción? |
| --- | --- | --- |
| 500 ms |  |  |
| 200 ms |  |  |
| 2000 ms |  |  |

## Parte 4. Cambiar el pin

1. Elige otro pin digital, por ejemplo el pin 8.
2. Mueve el cable del LED al nuevo pin.
3. Modifica el código para que use ese pin.
4. Ejecuta la simulación.

Responde:

| Pregunta | Respuesta |
| --- | --- |
| ¿Qué pin usaba el programa al principio? |  |
| ¿Qué pin usa ahora? |  |
| ¿Qué ocurriría si mueves el cable pero no cambias el código? |  |
| ¿Qué ocurriría si cambias el código pero no mueves el cable? |  |

## Parte 5. Explicar el programa

Completa con tus palabras:

```text
setup() sirve para...

loop() sirve para...

pinMode() sirve para...

digitalWrite() sirve para...

delay() sirve para...
```

## Parte 6. Evidencia y commit

El equipo debe guardar:

- código modificado;
- captura o enlace de Tinkercad;
- plantilla de programación;

Mensaje de commit recomendado:

```text
Sesion 11 - blink pin y tiempos - Equipo X
```

## Conexión con el proyecto

Responde:

> ¿Por qué esta práctica de un LED sirve para preparar los avisos del sistema del invernadero?
