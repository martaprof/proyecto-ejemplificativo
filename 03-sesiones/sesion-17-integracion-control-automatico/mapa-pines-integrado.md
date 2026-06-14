# Mapa de pines integrado

Este documento fija la asignación de pines que se utilizará al integrar sensores, avisos y servomotor. El equipo debe comprobar que el circuito y el código respetan esta tabla.

## Propuesta de pines

| Elemento | Pin propuesto | Tipo | Función |
| --- | --- | --- | --- |
| LDR de medición de luz | A0 | Entrada analógica | Leer luminosidad general. |
| TMP36 | A1 | Entrada analógica | Leer temperatura simulada o estimada. |
| Potenciómetro de humedad | A2 | Entrada analógica | Simular humedad variable. |
| LDR izquierda para servo | A3 | Entrada analógica | Comparar luz izquierda. |
| LDR derecha para servo | A4 | Entrada analógica | Comparar luz derecha. |
| LED de luz baja | 6 | Salida digital | Aviso visual. |
| Zumbador | 7 | Salida digital | Alarma acústica. |
| LED de temperatura | 8 | Salida digital | Aviso visual de temperatura. |
| Servomotor | 9 | Salida PWM/control servo | Actuación automática. |
| LED de humedad | 10 | Salida digital | Aviso visual de humedad. |

## Comprobación de coherencia

La propuesta integrada utiliza una asignación única para cada componente:

```text
LED de temperatura: pin 8.
Servomotor: pin 9.
```

El equipo debe comprobar que no se repite ningún pin, que cada constante del programa coincide con el cableado y que la tabla de pruebas se realiza con esta asignación.

## Lista rápida de revisión

Antes de ejecutar el sistema integrado:

- [ ] Cada componente tiene un pin único.
- [ ] Las entradas analógicas están en pines A0-A5.
- [ ] Las salidas digitales están declaradas con `pinMode()`.
- [ ] El servo aparece con `attach(PIN_SERVO)` o con el pin `9`.
- [ ] Las constantes de pines del código coinciden con el cableado.
- [ ] GND es común para todo el circuito.
- [ ] La tabla de pruebas está preparada.

## Preguntas para el equipo

1. ¿Qué pasaría si dos salidas digitales usan el mismo pin?
2. ¿Qué archivo o plantilla debe revisarse para confirmar la asignación de pines?
3. ¿Cómo comprobaríais solo el servo antes de integrarlo con sensores?
4. ¿Cómo comprobaríais solo los avisos antes de integrar el servo?
