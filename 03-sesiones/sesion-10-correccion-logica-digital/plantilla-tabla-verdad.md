# Plantilla para tablas de verdad

## Condiciones de entrada

| Símbolo | Condición |
| --- | --- |
| L | Luz fuera de rango |
| T | Temperatura fuera de rango |
| H | Humedad fuera de rango |
| A | Alarma general |

## Tabla de verdad

| L | T | H | A esperada | A simulada | Observaciones |
| --- | --- | --- | --- | --- | --- |
| 0 | 0 | 0 | 0 |  |  |
| 0 | 0 | 1 | 1 |  |  |
| 0 | 1 | 0 | 1 |  |  |
| 0 | 1 | 1 | 1 |  |  |
| 1 | 0 | 0 | 1 |  |  |
| 1 | 0 | 1 | 1 |  |  |
| 1 | 1 | 0 | 1 |  |  |
| 1 | 1 | 1 | 1 |  |  |

## Expresión lógica propuesta

```text
A = L OR T OR H
```

## Explicación

La alarma se activa cuando cualquiera de las variables medidas está fuera del rango establecido.
