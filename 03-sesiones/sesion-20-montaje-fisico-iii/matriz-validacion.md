# Matriz de validación final

| Escenario | Luz | Temperatura | Humedad simulada | Respuesta esperada | Respuesta observada | Corrección |
| --- | --- | --- | --- | --- | --- | --- |
| Condiciones normales | En rango | En rango | En rango | Sin alarma |  |  |
| Luz baja | Fuera de rango | En rango | En rango | LED de luz y zumbador |  |  |
| Temperatura alta | En rango | Fuera de rango | En rango | LED de temperatura y zumbador |  |  |
| Humedad fuera de rango | En rango | En rango | Fuera de rango | LED de humedad y zumbador |  |  |
| Varias alarmas | Fuera de rango | Fuera de rango | En rango | Varios LED y zumbador |  |  |
| Control del servo | Diferencia entre LDR | En rango | En rango | Movimiento gradual del servo |  |  |

## Criterio de aceptación

El prototipo se considerará validado si responde correctamente al menos a los escenarios de luz baja, temperatura alta, humedad fuera de rango y condiciones normales.
