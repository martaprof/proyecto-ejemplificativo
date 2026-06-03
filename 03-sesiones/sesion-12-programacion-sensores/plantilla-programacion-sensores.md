# Plantilla de programación de sensores

## Configuración del programa

| Sensor o entrada | Pin Arduino | Variable usada en el código | Magnitud interpretada |
| --- | --- | --- | --- |
| LDR |  |  | Luz |
| TMP36 |  |  | Temperatura |
| Potenciómetro |  |  | Humedad simulada |

## Lecturas del monitor serie

| Prueba | Lectura bruta (0-1023) | Tensión calculada | Magnitud convertida | Observaciones |
| --- | --- | --- | --- | --- |
| Luz alta |  |  |  |  |
| Luz baja |  |  |  |  |
| Temperatura simulada baja |  |  |  |  |
| Temperatura simulada alta |  |  |  |  |
| Humedad simulada baja |  |  |  |  |
| Humedad simulada alta |  |  |  |  |

## Fórmulas empleadas

```cpp
float tension = lectura * (5.0 / 1023.0);
float temperaturaC = (tension - 0.5) * 100.0;
int porcentaje = map(lectura, 0, 1023, 0, 100);
```

## Análisis de precisión

- Lectura más estable:
- Lectura más variable:
- Posible causa de error:
- Ajuste o calibración propuestos:
