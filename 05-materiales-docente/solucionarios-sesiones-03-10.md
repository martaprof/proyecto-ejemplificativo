# Solucionarios y ejemplos resueltos de las sesiones 03-10

## Sesión 03. Resistencia para LED

Ejemplo: LED rojo con tensión directa aproximada de 2 V, corriente deseada de 10 mA y alimentación de 5 V.

```text
R = (5 V - 2 V) / 0,01 A = 300 ohmios
```

Se puede usar una resistencia comercial de 330 ohmios para reducir ligeramente la corriente y proteger el LED.

## Sesión 04. Divisor de tensión con LDR

En un divisor con una LDR y una resistencia fija de 10 kΩ:

```text
Vout = Vin * Rfija / (RLDR + Rfija)
```

Si `Vin = 5 V`, `Rfija = 10 kΩ` y `RLDR = 10 kΩ`:

```text
Vout = 5 * 10000 / (10000 + 10000) = 2,5 V
```

La lectura analógica aproximada sería:

```text
lectura = 2,5 / 5 * 1023 = 511
```

## Sesión 05. Regulación con Zener

Para un Zener de 5,1 V con entrada de 9 V, si se desea una corriente aproximada de 10 mA:

```text
R = (9 V - 5,1 V) / 0,01 A = 390 ohmios
```

Este cálculo es una aproximación didáctica. En un diseño real habría que considerar la corriente de carga y la potencia disipada.

## Sesión 06. Transistor como interruptor

Para usar un transistor NPN como interruptor:

- la carga se coloca en el colector;
- el emisor se conecta a GND;
- la base recibe la señal de control mediante una resistencia;
- cuando la base recibe nivel alto, el transistor conduce y activa la carga.

Ejemplo de resistencia de base:

```text
Rb = (5 V - 0,7 V) / 0,005 A = 860 ohmios
```

Puede utilizarse un valor comercial de 1 kΩ.

## Sesión 07. Comparador analógico

Un comparador activa su salida en función de la diferencia entre una señal medida y una referencia.

Ejemplo:

- Entrada no inversora: tensión del sensor.
- Entrada inversora: tensión de referencia.
- Si la tensión del sensor es mayor que la referencia, la salida cambia de estado.

## Sesiones 09 y 10. Lógica de alarma

Si se desea activar una alarma cuando cualquiera de las variables está fuera de rango:

```text
A = L OR T OR H
```

Donde:

- `L`: luz fuera de rango;
- `T`: temperatura fuera de rango;
- `H`: humedad fuera de rango;
- `A`: alarma general.

Tabla resumida:

| L | T | H | A |
| --- | --- | --- | --- |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 1 | 1 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 1 |
