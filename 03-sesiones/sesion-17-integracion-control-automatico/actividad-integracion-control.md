# Actividad guiada: integración del control automático

Nivel: 1.º de Bachillerato  
Trabajo: equipos de 3  
Duración estimada: 35 minutos dentro de la sesión 17

Este archivo es la hoja de trabajo del alumnado. El docente no lo usa como guion de clase completo, sino como actividad que se abre después de explicar el ciclo medir-decidir-actuar y revisar el mapa de pines integrado.

## Objetivo

Integrar sensores, avisos y servomotor comprobando que el sistema mide, decide y actúa de forma coherente.

## Material

- Fork limpio del equipo.
- README de la sesión 17.
- `mapa-pines-integrado.md`.
- `plantilla-integracion-control.md`.
- `plantilla-pruebas-control-automatico.md`.
- La lista de cotejo queda reservada para la evaluación del docente.
- Simulación Tinkercad del subsistema con servo: https://www.tinkercad.com/things/aRNDZSPHZcX-etapa-seguimiento-solar-tf?sharecode=kKcNWQnmSy7arhajMAyJd6F-GNIOCS8g0InQc2yN5jE
- Código parcial indicado por el docente.

## Secuencia de trabajo en aula

| Minutos | Trabajo del equipo | Evidencia |
| --- | --- | --- |
| 8-12 | Traducir una variable medida en condición y acción. | Frase de control y comparación de código. |
| 16-20 | Revisar mapa de pines. | Tabla de pines completada. |
| 24-30 | Validar sensores, avisos y servo por separado. | Tabla de validación por partes. |
| 30-35 | Integrar una primera condición. | Condición escrita en lenguaje natural, código y acción esperada. |
| 35-40 | Ejecutar la simulación y depurar si aparece un fallo. | Error o comprobación documentada. |
| 40-53 | Probar escenarios extremos. | Tabla de pruebas completada. |
| 53-55 | Preparar commit o entrega. | Evidencias guardadas. |

## Reparto de roles

| Rol | Tarea durante la actividad |
| --- | --- |
| Coordinación-documentación | Completa plantilla, registra decisiones y prepara commit. |
| Simulación-montaje | Revisa conexiones, cambia sensores simulados y guarda captura. |
| Programación-verificación | Revisa pines, ejecuta código y comprueba pruebas. |

## Parte 0. Traducir variable, condición y acción

Antes de revisar pines, completad una traducción rápida:

| Variable medida | Condición en lenguaje natural | Comparación de código | Acción esperada |
| --- | --- | --- | --- |
| Luz izquierda y luz derecha |  |  |  |
| Temperatura |  |  |  |
| Humedad simulada |  |  |  |

## Parte 1. Revisar el mapa de pines

Antes de tocar el código, completad:

| Elemento | Pin usado | Entrada o salida | ¿Está repetido? |
| --- | --- | --- | --- |
| LDR de medición |  |  |  |
| TMP36 |  |  |  |
| Potenciómetro de humedad |  |  |  |
| LDR izquierda del servo |  |  |  |
| LDR derecha del servo |  |  |  |
| LED temperatura |  |  |  |
| Zumbador |  |  |  |
| Servo |  |  |  |

Pregunta clave:

> ¿Hay dos componentes usando el mismo pin? Si la respuesta es sí, corregid la asignación antes de continuar.

## Parte 2. Validar por partes

No integréis todo de golpe. Marcad cada comprobación:

| Comprobación | Resultado | Evidencia |
| --- | --- | --- |
| Lectura de luz funciona |  |  |
| Lectura de temperatura funciona |  |  |
| Lectura de humedad simulada funciona |  |  |
| LED de aviso funciona |  |  |
| Zumbador funciona |  |  |
| Servo se mueve con programa mínimo |  |  |

Si algo falla, registrad el error antes de continuar.

## Parte 3. Integrar una condición

Elegid una condición sencilla:

```text
Si la lectura izquierda es mayor que la derecha, mover servo hacia un lado.
```

Escribid la condición en lenguaje natural:

```text

```

Escribid la condición en forma de comparación:

```cpp

```

Indicad qué acción debe producir:

```text

```

## Parte 4. Probar escenarios extremos

Completad la tabla:

| Escenario | Lectura o situación simulada | Respuesta esperada | Respuesta observada | ¿Coincide? | Corrección si no coincide |
| --- | --- | --- | --- | --- | --- |
| Más luz a la izquierda |  |  |  |  |  |
| Más luz a la derecha |  |  |  |  |  |
| Lecturas similares |  |  |  |  |  |
| Temperatura alta |  |  |  |  |  |
| Humedad fuera de rango |  |  |  |  |  |

## Parte 5. Documentar un error o una comprobación

Aunque todo funcione, documentad al menos una comprobación:

| Error o comprobación | Causa probable | Prueba realizada | Resultado | Siguiente acción |
| --- | --- | --- | --- | --- |
|  |  |  |  |  |

## Parte 6. Cierre y commit

El equipo debe guardar:

- mapa de pines revisado.
- plantilla de integración.
- tabla de pruebas.
- captura o enlace de simulación.
- código parcial o integrado.

Mensaje de commit recomendado:

```text
Sesion 17 - integracion control automatico - Equipo X
```

## Reflexión final

Completad:

> Nuestro sistema mide...
>
> Nuestro sistema decide...
>
> Nuestro sistema actúa...
>
> La prueba más importante ha sido...
>
> El error o riesgo principal de la integración es...
