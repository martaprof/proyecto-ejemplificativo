# Ejemplo de memoria técnica final

Este documento muestra una estructura de ejemplo. Los datos concretos deberán adaptarse al prototipo realmente desarrollado.

## 1. Problema

El invernadero necesita conocer condiciones básicas de luz, temperatura y humedad para detectar situaciones que puedan afectar al crecimiento de las plantas.

## 2. Solución propuesta

Se ha diseñado un sistema con Arduino que lee una LDR, un TMP36 y un potenciómetro que simula la humedad. Cuando una variable supera el umbral establecido, se activa un aviso luminoso y acústico.

## 3. Componentes

| Componente | Función |
| --- | --- |
| Arduino compatible | Control del sistema. |
| LDR | Medición de luz. |
| TMP36 | Medición de temperatura. |
| Potenciómetro | Simulación de humedad. |
| LED | Indicadores visuales. |
| Zumbador | Alarma acústica. |
| Servomotor | Actuación opcional. |

## 4. Código

Se ha empleado como base el archivo `sistema-medicion-invernadero.ino`. Para la versión integrada se propone `sistema-invernadero-integrado.ino`.

## 5. Pruebas

| Escenario | Resultado esperado | Resultado obtenido |
| --- | --- | --- |
| Luz baja | LED de luz activo | Resultado a registrar si se valida en Tinkercad. |
| Temperatura alta | LED de temperatura activo | Resultado a registrar si se valida en Tinkercad. |
| Humedad fuera de rango | LED de humedad activo | Resultado a registrar si se valida en Tinkercad. |

## 6. Comprobaciones realizadas

Ejemplo: se comprueba que el LED de temperatura está conectado al pin `8`, que el servomotor está conectado al pin `9` y que las constantes del programa coinciden con el cableado.

## 7. Mejoras

- Sustituir el potenciómetro por un sensor real de humedad.
- Añadir pantalla LCD.
- Registrar datos.
- Incorporar comunicación inalámbrica.
