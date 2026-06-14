# Sesión 03. Resistencias y ley de Ohm

## Propósito

Aplicar la ley de Ohm al dimensionado de resistencias necesarias para proteger LED y preparar circuitos básicos del proyecto.

## Pregunta de trabajo

> ¿Por qué no podemos conectar un LED directamente a una fuente de tensión o a una salida de Arduino?

## Cómo usar los materiales de esta sesión

Este README es el **punto de entrada** de la sesión. Sirve para entender qué se va a enseñar, qué debe hacer el alumnado y qué evidencias se recogerán. Para impartir la clase sin perderse entre archivos, se seguirá esta secuencia:

| Momento | Archivo que se usa | Función |
| --- | --- | --- |
| Antes de clase | [`guion-docente-sesion-03.md`](guion-docente-sesion-03.md) | Preparar la explicación, los tiempos, las preguntas y la intervención docente. |
| Introducción teórica | [`presentacion-ley-de-ohm.pptx`](presentacion-ley-de-ohm.pptx) | Explicar voltaje, intensidad y resistencia con apoyo visual. |
| Demostración conceptual | [PhET Ley de Ohm](https://phet.colorado.edu/sims/html/ohms-law/latest/ohms-law_all.html) | Mostrar cómo cambian voltaje, resistencia e intensidad. |
| Trabajo del equipo | [`actividad-simulador-ley-ohm.md`](actividad-simulador-ley-ohm.md) | Guiar paso a paso la observación en PhET y la aplicación al LED. |
| Registro individual/equipo | [`plantilla-calculos.md`](plantilla-calculos.md) | Documentar datos, fórmula, cálculo, valor comercial y conclusión. |
| Evaluación docente | [`lista-cotejo.md`](lista-cotejo.md) | Registrar la valoración del docente sobre las evidencias entregadas. No es una tarea del alumnado. |

La separación en tres documentos evita mezclar funciones: el README orienta, el guion docente guía la actuación del profesor y la actividad es la hoja de trabajo del alumnado.

## Contenidos

- Tensión, corriente y resistencia.
- Ley de Ohm.
- Resistencia limitadora para LED.
- Relación entre cálculo y montaje real.

## Objetivos didácticos

- Comprender la relación entre tensión, corriente y resistencia.
- Aplicar la ley de Ohm para calcular resistencias limitadoras.
- Seleccionar valores comerciales adecuados para proteger LED.
- Comprobar mediante simulación cómo cambia el comportamiento del LED al modificar la resistencia.
- Justificar por escrito las decisiones de cálculo y diseño.

## Materiales necesarios

- Ordenador con acceso a Tinkercad.
- Simulación de pila, LED y resistencia en Tinkercad: [ejemplo pila LED R](https://www.tinkercad.com/things/lXa7S6Mi7Ev-ejemplo-pila-led-r?sharecode=9hK1W_MurxI69iXQonJ_-hiSQ_bVDPTSXZ4aiv7R320).
- Placa Arduino o fuente de 5 V simulada.
- LED de 5 mm.
- Resistencias de 220 Ω, 330 Ω y 1 kΩ.
- Calculadora o cuaderno de trabajo.
- Plantilla de cálculos: [`plantilla-calculos.md`](plantilla-calculos.md).
- Lista de cotejo docente: [`lista-cotejo.md`](lista-cotejo.md).
- Guion docente detallado: [`guion-docente-sesion-03.md`](guion-docente-sesion-03.md).
- Actividad de simulación guiada: [`actividad-simulador-ley-ohm.md`](actividad-simulador-ley-ohm.md).
- Presentación de aula: [`presentacion-ley-de-ohm.pptx`](presentacion-ley-de-ohm.pptx).

## Desarrollo de la sesión

1. Presentación del reto técnico: proteger un LED del sistema de avisos.
2. Explicación de voltaje, intensidad y resistencia con la presentación y el simulador PhET.
3. Ejemplo docente de cálculo con datos distintos a los de la actividad del alumnado.
4. Trabajo autónomo guiado con `actividad-simulador-ley-ohm.md`.
5. Decisión técnica final, entrega de evidencias y valoración docente con `lista-cotejo.md`.

## Pasos de cálculo y simulación

1. Identificar la tensión de alimentación del circuito.
2. Anotar la caída de tensión aproximada del LED.
3. Elegir la corriente deseada y convertirla a amperios.
4. Aplicar la fórmula `R = (V_alimentación - V_LED) / I`.
5. Comparar el resultado con valores comerciales disponibles.
6. Elegir un valor seguro y justificar la decisión.
7. Montar o abrir la simulación en Tinkercad.
8. Probar al menos dos resistencias y observar el brillo del LED.
9. Registrar resultados, captura y conclusiones en la plantilla.

## Esquema del circuito

```mermaid
flowchart LR
    A["Salida Arduino o 5 V"] --> B["Resistencia limitadora"]
    B --> C["LED indicador"]
    C --> D["GND"]
```

## Actividad del alumnado

Completar `actividad-simulador-ley-ohm.md`, aplicar la ley de Ohm al LED del proyecto, comparar valores comerciales en Tinkercad y justificar una decisión técnica final.

## Evidencias

- `actividad-simulador-ley-ohm.md` completada.
- `plantilla-calculos.md` completada.
- Tabla de comparación entre 220 Ω, 330 Ω y 1 kΩ.
- Captura o enlace de la simulación de Tinkercad.
- Decisión técnica final justificada.

## Explicación para el alumnado

Para diseñar circuitos electrónicos es necesario distinguir tres magnitudes básicas: tensión, corriente y resistencia. La tensión, medida en voltios, puede entenderse como la diferencia de energía eléctrica entre dos puntos. La corriente, medida en amperios, indica la cantidad de carga que circula por el circuito. La resistencia, medida en ohmios, se opone al paso de esa corriente.

La ley de Ohm relaciona estas tres magnitudes:

```text
V = I · R
```

Donde `V` es la tensión en voltios, `I` la corriente en amperios y `R` la resistencia en ohmios. Esta fórmula permite calcular valores antes de montar. En electrónica no conviene conectar componentes "a ojo", porque una corriente excesiva puede dañarlos.

En el sistema del invernadero usaremos LED como indicadores. Un LED puede avisar de temperatura alta, otro de poca luz y otro de humedad fuera de rango. Para que un LED funcione correctamente, debe llevar una resistencia limitadora en serie. Esa resistencia reduce la corriente y protege tanto el LED como la salida de Arduino.

La relación entre cálculo y montaje real es directa. Primero se calcula un valor aproximado, después se escoge un valor comercial disponible y finalmente se comprueba en Tinkercad o en el montaje físico. La elección no debe basarse solo en el brillo, sino en la protección del LED y de la salida de Arduino.

## Desarrollo guiado de la sesión

La sesión comienza con el reto técnico: los LED de aviso del invernadero no pueden conectarse directamente a 5 V porque una corriente excesiva puede dañarlos. Cada alumno escribe una hipótesis breve sobre qué cree que ocurriría si el LED se conectara sin resistencia. Esta hipótesis permite detectar ideas previas antes de introducir la ley de Ohm.

Después se introduce la ley de Ohm con `presentacion-ley-de-ohm.pptx` y el simulador PhET. La presentación se centra en voltaje, intensidad, resistencia y lectura de la fórmula. El docente muestra primero qué ocurre si aumenta el voltaje con resistencia fija y después qué ocurre si aumenta la resistencia con voltaje fijo. El objetivo es que el alumnado comprenda la relación antes de aplicarla al LED.

Antes de iniciar la actividad autónoma, el docente resuelve un ejemplo de cálculo con datos distintos a los que usará el alumnado. Este ejemplo sirve para enseñar el procedimiento sin anticipar la respuesta de la actividad.

El trabajo principal del alumnado se realiza con `actividad-simulador-ley-ohm.md`. La actividad tiene cinco partes: observación de la ley de Ohm en PhET, cálculo previo del LED, aplicación en Tinkercad, decisión técnica y evidencia final. En la simulación de Tinkercad se prueban 220 Ω, 330 Ω y 1 kΩ, se observa el brillo del LED y se registra la evidencia.

Durante el trabajo autónomo, el docente interviene con preguntas. Si detecta errores de cálculo, pregunta por la conversión de mA a A, la tensión que cae en la resistencia y la diferencia entre valor calculado y valor comercial. Si el LED no funciona en Tinkercad, pregunta por polaridad, resistencia en serie, conexión a GND y coherencia entre cálculo y montaje.

La sesión finaliza con la decisión técnica del equipo y la entrega de evidencias. Cada equipo debe explicar qué resistencia usaría para un LED de aviso del invernadero, por qué no elige simplemente la resistencia que produce más brillo y cómo se relaciona la elección con la seguridad del circuito. Después, el docente utiliza `lista-cotejo.md` para valorar la actividad, registrar observaciones y decidir qué retroalimentación necesita cada equipo.

## Ejemplo guiado

El docente resuelve este ejemplo antes del trabajo autónomo. Los datos no coinciden con los de la actividad del alumnado.

Queremos conectar un LED a una alimentación de 9 V. Suponemos que el LED tiene una caída de tensión aproximada de 2,1 V y queremos que circule una corriente de 15 mA.

```text
Tensión en la resistencia = 9 V - 2,1 V = 6,9 V
Corriente deseada = 15 mA = 0,015 A
R = V / I = 6,9 / 0,015 = 460 ohmios
```

Como 460 ohmios no siempre es un valor disponible, se puede escoger un valor comercial cercano y seguro, por ejemplo 470 ohmios.

## Mini-ejercicios

1. Calcula la resistencia necesaria para un LED conectado a 9 V si su caída de tensión es 2,1 V y queremos 10 mA.
2. Calcula la corriente que circula por una resistencia de 220 ohmios conectada a 5 V.
3. Explica qué podría ocurrir si conectas un LED directamente a 5 V sin resistencia.
4. Elige entre 220 ohmios, 330 ohmios y 1 kiloohmio para proteger un LED. Justifica tu elección.

## Recursos

- Valores de referencia para LED de 5 mm: rojo 2,0 V, amarillo 2,1 V, verde 2,2 V, corriente de trabajo 10 mA y resistencia recomendada de 330 Ω. Más detalle en [`../../07-recursos-tecnicos/componentes-y-valores.md`](../../07-recursos-tecnicos/componentes-y-valores.md).
- Guion docente detallado de implementación: [`guion-docente-sesion-03.md`](guion-docente-sesion-03.md).
- Actividad de simulación para el alumnado: [`actividad-simulador-ley-ohm.md`](actividad-simulador-ley-ohm.md).
- Presentación para explicar tensión, corriente, resistencia y cálculo de LED: [`presentacion-ley-de-ohm.pptx`](presentacion-ley-de-ohm.pptx).
- Simulador obligatorio para introducir la ley de Ohm: [PhET Ley de Ohm](https://phet.colorado.edu/sims/html/ohms-law/latest/ohms-law_all.html).
- Simulación de Tinkercad con pila, LED y resistencia: [ejemplo pila LED R](https://www.tinkercad.com/things/lXa7S6Mi7Ev-ejemplo-pila-led-r?sharecode=9hK1W_MurxI69iXQonJ_-hiSQ_bVDPTSXZ4aiv7R320).
- Plantilla de cálculos: [`plantilla-calculos.md`](plantilla-calculos.md).
- Lista de cotejo docente de la sesión: [`lista-cotejo.md`](lista-cotejo.md).
- Ejercicios adicionales: calcular resistencias para LED con alimentación de 3,3 V, 5 V y 9 V, usando corrientes de 5 mA, 10 mA y 15 mA.

![Captura de la simulación de pila, LED y resistencia](ejemplo_tinkercad_led.png)

## Tareas y reflexión

1. Completa `actividad-simulador-ley-ohm.md`.
2. Completa `plantilla-calculos.md` con el cálculo del LED de la actividad.
3. Compara 220 Ω, 330 Ω y 1 kΩ en Tinkercad.
4. Escribe la decisión técnica final y entrega las evidencias indicadas.

## Tarea para casa

Resolver ejercicios de dimensionado de resistencias para diferentes tensiones de alimentación y corrientes de LED.
