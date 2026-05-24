# Plantilla de pruebas de sensores e indicadores

| Componente | Pin | Situación de prueba | Lectura esperada | Lectura obtenida | Salida activada | Observaciones |
| --- | --- | --- | --- | --- | --- | --- |
| LDR | A0 | Luz alta | Valor alto |  | LED luz apagado |  |
| LDR | A0 | Luz baja | Valor bajo |  | LED luz encendido |  |
| TMP36 | A1 | Temperatura ambiente | Valor coherente |  | LED temperatura según umbral |  |
| Potenciómetro | A2 | Giro mínimo | Valor bajo |  | LED humedad según umbral |  |
| Potenciómetro | A2 | Giro máximo | Valor alto |  | LED humedad según umbral |  |
| Zumbador | 7 | Alarma activa | Sonido |  | Zumbador activo |  |

## Observaciones generales

- Si la lectura no cambia, revisar conexión a 5 V, GND y entrada analógica.
- Si el LED no enciende, revisar polaridad y resistencia.
- Si el zumbador no suena, comprobar pin y alimentación.
