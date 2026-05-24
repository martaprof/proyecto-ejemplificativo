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
| Luz baja | LED de luz activo | Pendiente de completar. |
| Temperatura alta | LED de temperatura activo | Pendiente de completar. |
| Humedad fuera de rango | LED de humedad activo | Pendiente de completar. |

## 6. Errores encontrados

Ejemplo: conflicto del pin `9` entre el aviso de temperatura y el servomotor. Solución propuesta: mantener el servo en `9` y mover el LED de temperatura al pin `8`.

## 7. Mejoras

- Sustituir el potenciómetro por un sensor real de humedad.
- Añadir pantalla LCD.
- Registrar datos.
- Incorporar comunicación inalámbrica.
