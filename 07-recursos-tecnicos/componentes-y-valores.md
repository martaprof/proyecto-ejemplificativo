# Componentes y valores seleccionados

Esta selección fija una propuesta realista para desarrollar el sistema de medición de condiciones atmosféricas de un invernadero con Arduino y Tinkercad. Los modelos se han elegido por disponibilidad habitual en kits educativos, compatibilidad con simulación y adecuación al nivel de 1.º de Bachillerato.

## Componentes principales

| Elemento | Modelo o valor seleccionado | Uso en el proyecto | Referencia técnica |
| --- | --- | --- | --- |
| Placa de control | Arduino Uno Rev3 o compatible | Lectura de sensores, control de salidas y programación del sistema. | [Arduino Uno Rev3](https://docs.arduino.cc/hardware/uno-rev3) |
| Protoboard | 830 puntos | Montaje sin soldadura. | Referencia genérica de aula. |
| Cables | Dupont macho-macho | Conexiones entre Arduino, protoboard y componentes. | Referencia genérica de aula. |
| LDR | GL5528 | Medición de luz ambiental y comparación entre dos zonas iluminadas. | [GL5528](https://www.digikey.jp/htmldatasheets/production/2014143/0/0/1/gl5528.html) |
| Sensor de temperatura | TMP36 | Medición analógica de temperatura. | [TMP36](https://www.analog.com/en/products/tmp36.html) |
| Potenciómetro | Lineal de 10 kΩ | Simulación de humedad. | Referencia genérica de aula. |
| LED | LED de 5 mm, rojo, amarillo o verde | Avisos visuales de estado o alarma. | Referencia genérica de aula. |
| Zumbador | Zumbador activo de 5 V | Alarma acústica sencilla. | Referencia genérica de aula. |
| Transistor NPN | 2N2222A | Activación de cargas sencillas, como zumbador. | [2N2222A](https://www.onsemi.com/download/data-sheet/pdf/2n2222a-d.pdf) |
| Diodo Zener | 1N4733A, 5,1 V, 1 W | Práctica de regulación de tensión. | [1N4733A](https://www.datasheets.com/onsemi/1N4733A) |
| Regulador lineal | L7805CV o LM7805, 5 V | Regulación de alimentación a 5 V. | [L7805CV](https://www.digikey.com/en/products/detail/stmicroelectronics/L7805CV/585964) |
| Comparador | LM339 | Comparación analógica de señales de sensores. | [LM339](https://www.ti.com.cn/lit/ds/symlink/lm339.pdf) |
| Puerta AND | 74HC08 | Lógica digital de alarma. | [SN74HC08](https://www.ti.com/lit/ds/symlink/sn74hc08.pdf) |
| Puerta OR | 74HC32 | Lógica digital de alarma. | [SN74HC32](https://www.ti.com/lit/ds/symlink/sn74hc32.pdf) |
| Servomotor | SG90, microservo de 9 g | Actuación automática o ampliación del prototipo. | [SG90](https://datasheet4u.com/datasheet-pdf/TowerPro/SG90/pdf.php?id=791970) |
| Panel solar | 5 V, baja potencia, entre 0,5 W y 1 W | Análisis de alimentación sostenible y práctica de regulación. | Referencia genérica de aula. |

## Resistencias seleccionadas

| Valor | Uso recomendado |
| ---: | --- |
| 220 Ω | LED con mayor brillo en pruebas puntuales. |
| 330 Ω | Valor recomendado para LED de 5 mm en salidas de 5 V. |
| 1 kΩ | Resistencia de base para transistor 2N2222A en conmutación sencilla. |
| 10 kΩ | Divisores de tensión con LDR, pull-up/pull-down y potenciómetro. |
| 220 Ω o 330 Ω | Resistencia serie en prácticas con Zener, ajustando según corriente. |

## Valores didácticos de referencia

| Elemento | Valor de trabajo recomendado |
| --- | --- |
| LED rojo | Tensión directa aproximada: 2,0 V. Corriente de trabajo: 10 mA. Resistencia recomendada: 330 Ω. |
| LED amarillo | Tensión directa aproximada: 2,1 V. Corriente de trabajo: 10 mA. Resistencia recomendada: 330 Ω. |
| LED verde | Tensión directa aproximada: 2,2 V. Corriente de trabajo: 10 mA. Resistencia recomendada: 330 Ω. |
| LDR GL5528 | Usar con resistencia fija de 10 kΩ en divisor de tensión. |
| Potenciómetro | 10 kΩ lineal entre 5 V y GND, cursor a entrada analógica. |
| TMP36 | Alimentación a 5 V, salida analógica a Arduino, conversión `temperaturaC = (tension - 0.5) * 100.0`. |
| LM339 | Alimentación a 5 V y salida con resistencia pull-up de 10 kΩ. |
| 74HC08 y 74HC32 | Alimentación a 5 V, entradas desde señales digitales o comparadores adaptados. |
| SG90 | Alimentación a 5 V, señal de control desde pin PWM, masa común con Arduino. |

## Referencias de compra o inventario

Para el aula se recomienda adquirir o inventariar los componentes por categorías, no por un único proveedor:

- placa Arduino Uno Rev3 oficial o placa compatible con ATmega328P;
- kit básico de protoboard y cables Dupont macho-macho;
- surtido de resistencias con valores de 220 Ω, 330 Ω, 1 kΩ y 10 kΩ;
- LED de 5 mm rojos, amarillos y verdes;
- LDR GL5528 o equivalente de la serie GL55;
- TMP36;
- potenciómetro lineal de 10 kΩ;
- zumbador activo de 5 V;
- transistor NPN 2N2222A;
- diodo Zener 1N4733A de 5,1 V;
- regulador L7805CV o LM7805;
- comparador LM339;
- puertas lógicas 74HC08 y 74HC32;
- microservo SG90;
- panel solar didáctico de 5 V y baja potencia.

Si el centro ya dispone de otros modelos equivalentes, pueden utilizarse siempre que se revise su hoja de características y se ajusten conexiones, pines y valores de trabajo.

