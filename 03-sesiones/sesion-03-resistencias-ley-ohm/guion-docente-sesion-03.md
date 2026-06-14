# Guion docente de la sesión 03: resistencias y ley de Ohm

Nivel: 1.º de Bachillerato  
Duración orientativa: 55 minutos  
Agrupamiento: equipos de 3 estudiantes, un ordenador por equipo  
Roles: coordinación-documentación, simulación-montaje y programación-verificación

Este archivo es de uso docente. Para la clase se abre después de revisar el README de la sesión y antes de proyectar la presentación. La actividad que completa el alumnado está separada en `actividad-simulador-ley-ohm.md`.

## Finalidad de la sesión

El alumnado debe comprender la ley de Ohm como una herramienta para tomar una decisión técnica: elegir una resistencia que proteja un LED conectado a una salida de 5 V o a Arduino.

La sesión no se plantea como una explicación aislada de fórmula, sino como respuesta a una necesidad del proyecto:

> El sistema del invernadero necesitará LED de aviso. Para que no se dañen, hay que limitar la corriente.

## Preparación previa del docente

Antes de clase, el docente debe tener preparados:

- presentación `presentacion-ley-de-ohm.pptx`.
- README de la sesión proyectado.
- plantilla de cálculos `plantilla-calculos.md`.
- actividad del simulador `actividad-simulador-ley-ohm.md`.
- lista de cotejo de uso docente `lista-cotejo.md`.
- enlace al simulador PhET Ley de Ohm: https://phet.colorado.edu/sims/html/ohms-law/latest/ohms-law_all.html.
- enlace a la simulación Tinkercad de pila, LED y resistencia: https://www.tinkercad.com/things/lXa7S6Mi7Ev-ejemplo-pila-led-r?sharecode=9hK1W_MurxI69iXQonJ_-hiSQ_bVDPTSXZ4aiv7R320.
- resistencias reales de 220 ohmios, 330 ohmios y 1 kiloohmio.
- un LED de 5 mm.
- placa Arduino o fuente de 5 V simulada.
- un ordenador por equipo.

Si se trabaja con fork de alumnado, el docente debe comprobar que el alumnado no tiene acceso al solucionario de la sesión 03. Debe conservar la plantilla de cálculos y la actividad de simulación en el fork visible para equipos. La lista de cotejo puede permanecer en el repositorio docente, porque se usa para la evaluación del profesor y no como tarea del alumnado.

## Distribución del aula

Cada equipo se sienta alrededor de un ordenador. El docente proyecta la presentación y mantiene abierta la simulación visual. Los materiales físicos se muestran en la mesa docente y se reparten solo si se va a hacer comprobación real.

Roles durante la sesión:

- coordinación-documentación: abre el README, lee la tarea y completa la plantilla.
- simulación-montaje: maneja el simulador PhET Ley de Ohm durante la explicación y Tinkercad durante la aplicación al LED.
- programación-verificación: revisa unidades, cálculo, evidencia de simulación y coherencia de la decisión técnica.

Al cierre, el equipo debe rotar el control del ordenador al menos una vez para que no trabaje siempre la misma persona.

## Secuencia de aula

| Minutos | Acción docente | Acción del alumnado | Material |
| --- | --- | --- | --- |
| 0-3 | Presenta el reto de la sesión: proteger un LED del sistema de avisos. | Escucha la pregunta de trabajo y sitúa el problema en el prototipo. | README de la sesión. |
| 3-5 | Pide una hipótesis inicial y recoge dos o tres respuestas sin corregir todavía. | Escribe qué cree que ocurrirá si un LED se conecta sin resistencia. | Cuaderno o plantilla. |
| 5-8 | Abre `presentacion-ley-de-ohm.pptx` y presenta voltaje, intensidad y resistencia con las diapositivas 1 y 2. | Relaciona cada magnitud con una parte del circuito. | Diapositivas 1-2. |
| 8-12 | Explica el voltaje con la diapositiva 3 y PhET, manteniendo fija la resistencia y modificando Voltage. | Predice qué ocurrirá con la intensidad antes de mover el control. | Diapositiva 3 y PhET. |
| 12-15 | Explica la intensidad con la diapositiva 4 y la conversión `1 mA = 0,001 A`. | Anota la conversión y la relaciona con la corriente segura de un LED. | Diapositiva 4. |
| 15-18 | Explica la resistencia con la diapositiva 5 y PhET, manteniendo fijo el voltaje y aumentando Resistance. | Observa que la intensidad disminuye y compara 220 Ω, 330 Ω y 1 kΩ. | Diapositiva 5, PhET y resistencias reales. |
| 18-21 | Presenta la fórmula con la diapositiva 6 como relación entre magnitudes. | Anota `V = I · R`, `I = V / R` y `R = V / I`. | Diapositiva 6. |
| 21-24 | Realiza la secuencia de demostración de la diapositiva 7: fijar R y aumentar V, fijar V y aumentar R, pedir predicción. | Formula predicciones y comprueba si coinciden con el simulador. | Diapositiva 7 y PhET. |
| 24-27 | Usa la diapositiva 8 para cerrar la introducción teórica con un ejemplo de predicción. | Interpreta que aumentar la resistencia reduce la corriente. | Diapositiva 8. |
| 27-32 | Resuelve un ejemplo de cálculo con datos distintos a los de la actividad del alumnado. | Sigue el procedimiento y anota pasos, unidades y elección comercial. | Pizarra o documento proyectado. |
| 32-47 | Da paso al trabajo autónomo guiado con `actividad-simulador-ley-ohm.md`. | Completa las partes 1, 2, 3 y 4 de la actividad. | PhET, Tinkercad, actividad y plantilla. |
| 47-52 | Pide la decisión técnica final y aplica `lista-cotejo.md` para registrar la valoración docente. | Justifica qué resistencia usará y entrega las evidencias de la actividad. | Actividad y lista de cotejo docente. |
| 52-55 | Indica evidencias y commit o entrega. | Guarda actividad, plantilla, captura o enlace y mensaje pautado. | Fork del equipo o aula virtual. |

## Cómo explicar los conceptos

### Tensión

El docente puede decir:

> La tensión no es la electricidad que circula, sino la diferencia de energía entre dos puntos. En nuestro circuito, la placa o fuente ofrece 5 V entre el punto positivo y GND. Esa diferencia permite que pueda circular corriente si cerramos el circuito.

En el simulador PhET Ley de Ohm se muestra la relación entre voltaje, resistencia e intensidad. El docente abre https://phet.colorado.edu/sims/html/ohms-law/latest/ohms-law_all.html y comienza con una resistencia fija. Se pregunta:

- ¿Dónde está el punto de mayor potencial?
- ¿Dónde está GND?
- ¿Qué pasaría si el circuito queda abierto?

### Intensidad o corriente

El docente se apoya en el simulador PhET Ley de Ohm. Primero mantiene fija la resistencia y modifica el voltaje para que el alumnado observe que la intensidad cambia. Después mantiene fijo el voltaje y aumenta la resistencia para observar que la intensidad disminuye.

Frase sugerida:

> La corriente indica cuánta carga circula por el circuito cada segundo. En un LED queremos una corriente pequeña y controlada. Si dejamos pasar demasiada corriente, el LED puede dañarse.

Preguntas:

- ¿La corriente circula si falta la conexión a GND?
- ¿La corriente cambia si aumento la resistencia?
- ¿Por qué un LED necesita corriente limitada?

### Resistencia

El docente muestra tres resistencias reales y sus valores. Explica:

> La resistencia se opone al paso de corriente. En un LED no se coloca para que el circuito sea más complicado, sino para proteger el componente y la salida de Arduino.

El profesor puede pedir una predicción:

- Con 220 ohmios, ¿el LED brillará más o menos que con 330 ohmios?
- Con 1 kiloohmio, ¿qué pasará con el brillo?

Después se comprueba en el simulador PhET Ley de Ohm y, más adelante, en Tinkercad con el LED.

## Cálculo guiado

El docente resuelve en pizarra un ejemplo con datos distintos a los que resolverá después el alumnado:

```text
Alimentación: 9 V
Caída aproximada del LED: 2,1 V
Corriente deseada: 15 mA = 0,015 A

Tensión en la resistencia = 9 V - 2,1 V = 6,9 V
R = V / I = 6,9 / 0,015 = 460 ohmios
```

Decisión:

```text
Valor comercial elegido: 470 ohmios
Motivo: es cercano al cálculo y es un valor comercial seguro.
```

Errores que se deben anticipar:

- usar `10` en lugar de `0,01`.
- no restar la caída del LED.
- escribir ohmios sin comprobar si el valor existe.
- elegir 220 ohmios solo porque el LED brilla más.
- confundir tensión de alimentación con tensión en la resistencia.

## Trabajo autónomo guiado

Desde el minuto 32, los equipos trabajan con `actividad-simulador-ley-ohm.md`.

La actividad se organiza así:

1. Observación de la ley de Ohm en PhET.
2. Cálculo previo del LED con los datos de la actividad: 5 V, caída de 2 V y 10 mA.
3. Aplicación en Tinkercad con la simulación de pila, LED y resistencia: https://www.tinkercad.com/things/lXa7S6Mi7Ev-ejemplo-pila-led-r?sharecode=9hK1W_MurxI69iXQonJ_-hiSQ_bVDPTSXZ4aiv7R320.
4. Comparación de 220 Ω, 330 Ω y 1 kΩ.
5. Decisión técnica, evidencia y commit.

## Intervención docente durante el trabajo autónomo

El docente no debe resolver directamente el cálculo de cada equipo. Conviene usar preguntas:

- ¿Qué dato representa la tensión de alimentación?
- ¿Qué tensión queda para la resistencia?
- ¿La corriente está en amperios o en miliamperios?
- ¿Qué valor comercial tienes disponible?
- ¿Tu elección protege más o menos el LED?
- ¿La simulación confirma tu cálculo?

Si un equipo termina antes, se le pide comparar dos corrientes: 10 mA y 15 mA, y explicar cómo cambia la resistencia calculada.

## Evidencias de la sesión

Cada equipo debe dejar:

1. `plantilla-calculos.md` completada.
2. Tabla de comparación entre 220, 330 y 1000 ohmios.
3. Captura o enlace de simulación.
4. Decisión técnica justificada.
5. Commit o entrega con mensaje:

```text
Sesion 03 - simulacion ley de Ohm - Equipo X
```

## Cierre didáctico

La conclusión esperada es:

> La ley de Ohm permite calcular una resistencia antes de montar el circuito. En el proyecto del invernadero, esa resistencia protege los LED de aviso y ayuda a que el sistema sea seguro y justificable técnicamente.
