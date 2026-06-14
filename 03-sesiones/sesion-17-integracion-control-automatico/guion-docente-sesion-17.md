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
| 0-5 | Recuerda subsistemas ya trabajados: sensores, avisos y servo. | Identifica qué partes tiene ya su equipo. | README de la sesión. |
| 5-12 | Explica el ciclo medir-decidir-actuar con el primer diagrama Mermaid. | Relaciona sensor, condición y respuesta. | Diagrama Mermaid "Ciclo medir-decidir-actuar". |
| 12-20 | Presenta el mapa de pines integrado y comprueba que no hay duplicidades. | Marca entradas, salidas y asignaciones de pines. | `mapa-pines-integrado.md`. |
| 20-30 | Pide validación por partes usando el diagrama de integración incremental. | Comprueba sensores, avisos y servo por separado. | Diagrama Mermaid "Integración incremental" y plantilla de integración. |
| 30-42 | Guía integración incremental. | Une bloques y registra cada cambio. | Código parcial o simulación. |
| 42-50 | Dirige pruebas por escenarios extremos y aplica el diagrama de depuración si aparece un fallo. | Completa tabla de pruebas. | Plantilla de pruebas y diagrama Mermaid "Depuración ordenada". |
| 50-53 | Revisa errores y decisiones y aplica la lista de cotejo como registro docente. | Completa evidencias pendientes y prepara la entrega. | Lista de cotejo docente. |
| 53-55 | Indica commit o entrega. | Guarda evidencias con mensaje pautado. | Fork del equipo. |

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
5. Integrar el servo con el código de sensores.
6. Probar una sola condición.
7. Añadir el resto de condiciones.
8. Registrar errores y soluciones.

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
