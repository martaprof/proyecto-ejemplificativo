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

- presentación `presentacion-sesion-03-ley-ohm.pptx`;
- README de la sesión proyectado;
- plantilla de cálculos `plantilla-calculos.md`;
- actividad del simulador `actividad-simulador-ley-ohm.md`;
- lista de cotejo `lista-cotejo.md`;
- enlace al simulador PhET Ley de Ohm: https://phet.colorado.edu/sims/html/ohms-law/latest/ohms-law_all.html;
- enlace a la simulación Tinkercad de LED con resistencia;
- resistencias reales de 220 ohmios, 330 ohmios y 1 kiloohmio;
- un LED de 5 mm;
- placa Arduino o fuente de 5 V simulada;
- un ordenador por equipo.

Si se trabaja con fork de alumnado, el docente debe comprobar que el alumnado no tiene acceso al solucionario de la sesión 03. Debe conservar la plantilla y la lista de cotejo, pero retirar los cálculos resueltos del fork visible para equipos.

## Distribución del aula

Cada equipo se sienta alrededor de un ordenador. El docente proyecta la presentación y mantiene abierta la simulación visual. Los materiales físicos se muestran en la mesa docente y se reparten solo si se va a hacer comprobación real.

Roles durante la sesión:

- coordinación-documentación: abre el README, lee la tarea y completa la plantilla;
- simulación-montaje: maneja el simulador PhET Ley de Ohm durante la explicación y Tinkercad durante la aplicación al LED;
- programación-verificación: revisa unidades, cálculo y lista de cotejo.

Al cierre, el equipo debe rotar el control del ordenador al menos una vez para que no trabaje siempre la misma persona.

## Secuencia de aula

| Minutos | Acción docente | Acción del alumnado | Material |
| --- | --- | --- | --- |
| 0-5 | Presenta el reto de la sesión: proteger un LED del sistema de avisos. | Escribe una hipótesis sobre qué ocurre si un LED se conecta sin resistencia. | Diapositivas 1-2, README. |
| 5-12 | Explica tensión, corriente y resistencia con apoyo visual. | Relaciona cada magnitud con una parte del circuito. | Diapositivas 3-6 y simulador PhET Ley de Ohm. |
| 12-20 | Muestra la ley de Ohm como decisión de diseño. | Sigue el cálculo guiado y anota unidades. | Diapositivas 5-6, pizarra. |
| 20-30 | Propone cálculo individual del LED. | Completa la primera parte de `plantilla-calculos.md`. | Plantilla de cálculos. |
| 30-38 | Pide contraste por equipos y elección de valor comercial. | Compara 220, 330 y 1000 ohmios y justifica elección. | Resistencias reales o tabla de valores. |
| 38-48 | Guía la aplicación al LED con distintos valores de resistencia. | Prueba valores, observa brillo/corriente y guarda evidencia. | Tinkercad con LED y resistencia. |
| 48-53 | Pide conclusión técnica. | Escribe qué resistencia usará y por qué. | Plantilla y lista de cotejo. |
| 53-55 | Indica commit o entrega. | Guarda cambios con mensaje pautado. | Fork del equipo o aula virtual. |

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

El docente resuelve en pizarra:

```text
Alimentación: 5 V
Caída aproximada del LED rojo: 2 V
Corriente deseada: 10 mA = 0,01 A

Tensión en la resistencia = 5 V - 2 V = 3 V
R = V / I = 3 / 0,01 = 300 ohmios
```

Decisión:

```text
Valor comercial elegido: 330 ohmios
Motivo: es cercano al cálculo y reduce ligeramente la corriente, protegiendo el LED.
```

Errores que se deben anticipar:

- usar `10` en lugar de `0,01`;
- no restar la caída del LED;
- escribir ohmios sin comprobar si el valor existe;
- elegir 220 ohmios solo porque el LED brilla más;
- confundir tensión de alimentación con tensión en la resistencia.

## Intervención docente durante el trabajo

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
4. Lista de cotejo revisada.
5. Commit o entrega con mensaje:

```text
Sesion 03 - calculo resistencia LED - Equipo X
```

## Cierre didáctico

La conclusión esperada es:

> La ley de Ohm permite calcular una resistencia antes de montar el circuito. En el proyecto del invernadero, esa resistencia protege los LED de aviso y ayuda a que el sistema sea seguro y justificable técnicamente.
