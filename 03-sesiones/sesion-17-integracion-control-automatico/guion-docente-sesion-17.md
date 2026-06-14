# Guion docente de la sesión 17: integración del control automático

Nivel: 1.º de Bachillerato  
Duración orientativa: 55 minutos  
Agrupamiento: equipos de 3 estudiantes, un ordenador por equipo  
Roles: coordinación-documentación, simulación-montaje y programación-verificación

Este archivo es de uso docente. Para la clase se abre después de revisar el README de la sesión. La introducción conceptual se realiza proyectando los diagramas Mermaid incluidos en el README, y la actividad que completa el alumnado está separada en `actividad-integracion-control.md`.

## Finalidad de la sesión

El alumnado debe integrar sensores, avisos y servomotor en una propuesta de control automático. La sesión es más compleja que las anteriores porque ya no se comprueba un componente aislado, sino la coordinación de varias partes del sistema.

La pregunta de trabajo es:

> ¿Cómo comprobamos que el sistema mide, decide y actúa de forma coherente?

## Preparación previa del docente

Antes de clase, el docente debe tener preparados:

- README de la sesión;
- diagramas Mermaid del README;
- guion de actividad `actividad-integracion-control.md`;
- mapa de pines `mapa-pines-integrado.md`;
- plantilla `plantilla-integracion-control.md`;
- plantilla `plantilla-pruebas-control-automatico.md`;
- lista de cotejo de uso docente;
- simulación Tinkercad del subsistema con servo;
- código de control de servomotor como apoyo docente;
- código integrado completo reservado para el docente o sustituido por versión incompleta en el fork de alumnado.

En el fork de alumnado no conviene dejar el programa integrado final completo. Es preferible entregar fragmentos o una plantilla con huecos, para que el equipo tenga que decidir pines, comprobar sensores y justificar umbrales.

## Organización del aula

Cada equipo trabaja con un ordenador. La sesión requiere mucha coordinación, por lo que los roles deben estar visibles:

- coordinación-documentación: mantiene abierta la plantilla de integración y registra decisiones;
- simulación-montaje: revisa Tinkercad, cableado y capturas;
- programación-verificación: revisa código, pines y tabla de pruebas.

El docente debe insistir en que no se cambia todo a la vez. La integración se valida por partes.

## Secuencia de aula

| Minutos | Acción docente | Acción del alumnado | Material |
| --- | --- | --- | --- |
| 0-4 | Proyecta el README y recupera sensores, LED de aviso, zumbador, lectura analógica y servomotor. Pregunta qué parte tiene comprobada cada equipo y qué puede fallar al integrarla. | Responde desde el estado real de su equipo e identifica riesgos de integración. | README de la sesión. |
| 4-8 | Proyecta el diagrama Mermaid "Ciclo medir-decidir-actuar" y explica medir, comparar, decidir y actuar con ejemplos del invernadero. | Relaciona cada sensor con una condición y con una respuesta del sistema. | Diagrama Mermaid del README. |
| 8-12 | Pide una traducción rápida en tres columnas: variable medida, condición y acción. | Escribe ejemplos como `lecturaIzquierda > lecturaDerecha` y acción del servo. | Actividad guiada o cuaderno. |
| 12-16 | Abre `mapa-pines-integrado.md` y el diagrama de asignación de pines. Explica la tabla de integración. | Atiende a la asignación única de entradas y salidas. | Mapa de pines y diagrama Mermaid. |
| 16-20 | Pide revisar el mapa de pines en la actividad. | Marca entradas analógicas, salidas digitales y posibles duplicidades. | `actividad-integracion-control.md`. |
| 20-24 | Proyecta el diagrama Mermaid "Integración incremental" y fija la regla de probar una parte cada vez. | Ordena las comprobaciones antes de integrar condiciones. | Diagrama Mermaid del README. |
| 24-30 | Supervisa la validación por partes. | Comprueba lectura de luz, temperatura, humedad simulada, LED, zumbador y servo mínimo. | `plantilla-integracion-control.md`. |
| 30-35 | Propone integrar una primera condición sencilla y guía con preguntas. | Escribe la condición en lenguaje natural, comparación de código y acción esperada. | Actividad guiada y código parcial. |
| 35-40 | Pide ejecutar la simulación con la condición integrada y usar depuración ordenada si falla. | Prueba la condición, documenta el cambio o registra el error. | Simulación y diagrama "Depuración ordenada". |
| 40-53 | Dirige pruebas por escenarios extremos y aplica la lista de cotejo como observación docente. | Completa la tabla de pruebas con respuesta esperada, observada y corrección. | `plantilla-pruebas-control-automatico.md` y lista docente. |
| 53-55 | Cierra con commit o entrega. | Guarda evidencias con mensaje pautado. | Fork del equipo o aula virtual. |

## Explicación del ciclo medir-decidir-actuar

El docente puede explicar:

> Un sistema automático no solo muestra datos. Primero mide una variable, después compara esa información con una condición y finalmente actúa. En nuestro invernadero, medir puede ser leer luz o temperatura; decidir puede ser comprobar si se supera un umbral; actuar puede ser encender un LED, activar un zumbador o mover un servo.

Ejemplo en lenguaje natural:

```text
Si la luz de la izquierda es mayor que la de la derecha,
entonces el servo debe girar hacia la izquierda.
```

Traducción técnica:

```text
lecturaIzquierda > lecturaDerecha
```

El docente debe pedir siempre la traducción entre frase, condición y acción.

## Explicación del mapa de pines

La integración puede fallar aunque cada componente funcione por separado si el código y el cableado no usan la misma asignación de pines.

Asignación que debe respetar el equipo:

```text
LED de temperatura: pin 8.
Servomotor: pin 9.
LED de humedad: pin 10.
LED de luz: pin 11.
Zumbador: pin 7.
```

Preguntas al alumnado:

- ¿Qué pines son entradas analógicas?
- ¿Qué pines son salidas digitales?
- ¿Cada componente tiene una asignación única?
- ¿El pin indicado en el código coincide con el cableado?

## Método de integración incremental

El docente debe prohibir cambios masivos sin registro. La secuencia recomendada es:

1. Comprobar sensores en monitor serie.
2. Comprobar LED y zumbador.
3. Comprobar servo con programa mínimo.
4. Revisar mapa de pines.
5. Integrar una sola condición.
6. Probar escenarios extremos.
7. Registrar evidencia, error o comprobación.

Cada paso debe tener una evidencia breve: captura, tabla, comentario de código o registro en plantilla.

## Pruebas por escenarios

El docente propone escenarios claros:

| Escenario | Qué modifica el equipo | Respuesta esperada |
| --- | --- | --- |
| Luz izquierda mayor | LDR izquierda o valor simulado | Servo gira hacia un lado. |
| Luz derecha mayor | LDR derecha o valor simulado | Servo gira hacia el lado contrario. |
| Lecturas similares | Ambas LDR parecidas | Servo permanece centrado o cambia poco. |
| Temperatura alta | TMP36 simulado o valor equivalente | LED o alarma de temperatura se activa. |
| Humedad fuera de rango | Potenciómetro | Aviso correspondiente se activa. |

El alumnado debe completar la tabla con respuesta observada. Si no coincide, no se borra el error: se documenta.

## Depuración guiada

Si falla el servo:

1. Revisar alimentación y GND.
2. Revisar pin de señal.
3. Revisar `Servo.h`.
4. Revisar `attach(9)`.
5. Probar programa mínimo.

Si fallan los avisos:

1. Revisar si algún pin se ha movido.
2. Comprobar `pinMode()`.
3. Revisar `digitalWrite()`.
4. Probar cada LED por separado.

Si fallan las lecturas:

1. Revisar entradas analógicas.
2. Observar monitor serie.
3. Cambiar un solo valor cada vez.
4. Comprobar rangos antes de definir umbrales.

## Evidencias de la sesión

Cada equipo debe dejar:

1. Mapa de pines revisado.
2. Plantilla de integración completada.
3. Tabla de pruebas por escenarios.
4. Código parcial o integrado con cambios documentados.
5. Captura o enlace de simulación.
6. Registro de al menos un error o comprobación.
7. Commit o entrega:

```text
Sesion 17 - integracion control automatico - Equipo X
```

## Cierre didáctico

La conclusión esperada es:

> Integrar no significa juntar archivos sin más. Integrar significa comprobar que entradas, decisiones, salidas, pines y código trabajan de forma coherente. Por eso se valida por partes y se documentan pruebas.
