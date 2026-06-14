# Guía docente para preparar el fork de alumnado

Esta guía explica cómo preparar una versión del repositorio adecuada para que el alumnado de 1.º de Bachillerato trabaje sin acceder directamente a solucionarios, códigos finales o memorias resueltas.

La idea no es borrar el repositorio original, sino crear un **fork de aula**. El repositorio original queda como versión completa para el docente y el fork se convierte en la versión de trabajo de los equipos.

Todas las acciones descritas en esta guía se realizan desde **GitHub web**, usando el navegador. No es necesario instalar Git, usar terminal ni conocer comandos.

## Objetivo del fork de aula

El fork de aula debe conservar:

- la estructura general del proyecto;
- los README de presentación de cada sesión;
- las plantillas de trabajo;
- las listas de cotejo se reservan para el repositorio o carpeta de trabajo del docente;
- las imágenes y capturas de apoyo;
- los enlaces a simulaciones;
- los recursos que permiten investigar, calcular, simular y documentar.

El fork de aula debe retirar u ocultar:

- solucionarios docentes;
- memorias finales ya resueltas;
- códigos finales completamente integrados;
- respuestas completas que impidan al alumnado tomar decisiones;
- orientaciones internas que solo debe ver el profesor.

## Preparación antes de compartir el enlace

1. Entrar en GitHub con la cuenta docente.
2. Abrir el repositorio original del proyecto.
3. Pulsar **Fork**.
4. Elegir la cuenta u organización donde se alojará el fork.
5. Nombrarlo de forma clara, por ejemplo `invernadero-abp-1bach-aula`.
6. Crear el fork.
7. Revisar que el fork mantiene la misma estructura de carpetas.

Después de crear el fork, el docente entra en su copia y prepara la versión visible para el alumnado.

## Material que conviene retirar del fork de alumnado

En una aplicación real de aula, se recomienda retirar:

| Elemento | Acción recomendada | Motivo |
| --- | --- | --- |
| `05-materiales-docente/` | Eliminar la carpeta del fork de alumnado. | Contiene orientaciones internas y solucionarios. |
| `05-materiales-docente/solucionarios-sesiones-03-10.md` | Retirar junto con la carpeta docente. | Incluye cálculos y respuestas resueltas. |
| `08-resultados-y-evidencias/ejemplo-memoria-tecnica-final.md` | Eliminar o sustituir por una plantilla vacía. | Evita que el alumnado copie una memoria final. |
| `07-recursos-tecnicos/codigo/sistema-medicion-invernadero.ino` | Sustituir por una versión incompleta o mover a una zona no visible. | Es una solución funcional de referencia. |
| `07-recursos-tecnicos/codigo/sistema-invernadero-integrado.ino` | Sustituir por una versión incompleta o reservar para el docente. | Resuelve la integración final. |
| `07-recursos-tecnicos/codigo/integracion_control_servomotor.ino` | Mantener solo como apoyo docente o convertir en plantilla parcial. | Puede anticipar la solución de la sesión 17. |
| Códigos comentados finales | Valorar si se conservan parcialmente. | Pueden servir de andamiaje, pero no como entrega directa. |

No es necesario retirar ejemplos mínimos como `blink.ino`, porque en la sesión 11 se usan como práctica introductoria. La diferencia didáctica es clara: un ejemplo mínimo ayuda a aprender una instrucción, mientras que un programa integrado completo puede sustituir el proceso de diseño del equipo.

## Acciones básicas en GitHub web

### Crear el fork limpio de aula

1. Entrar en GitHub con la cuenta docente.
2. Abrir el repositorio original del proyecto.
3. Pulsar **Fork**.
4. Elegir la cuenta docente, del departamento o de la organización del centro.
5. Escribir un nombre claro, por ejemplo `invernadero-abp-1bach-aula`.
6. Confirmar con **Create fork**.
7. Entrar en el fork creado y comprobar que aparecen las carpetas principales del proyecto.

### Modificar un README o una plantilla Markdown

El docente puede adaptar instrucciones, retirar pistas excesivas o preparar una plantilla incompleta desde el navegador:

1. Entrar en el fork de aula.
2. Abrir el archivo que se quiera modificar, por ejemplo `README.md` o una plantilla `.md`.
3. Pulsar el icono del lápiz.
4. Editar el texto.
5. Usar la pestaña **Preview** para comprobar cómo se verá en GitHub.
6. Bajar hasta **Commit changes**.
7. Escribir un mensaje claro, por ejemplo `Adapta README de sesion 03`.
8. Confirmar el commit.

### Eliminar un archivo con soluciones

El fork de aula no debe incluir recursos que sustituyan el trabajo del alumnado:

1. Entrar en el fork de aula.
2. Abrir el archivo que se quiere retirar.
3. Pulsar el icono de papelera o el menú de opciones.
4. Confirmar la eliminación.
5. Escribir un commit, por ejemplo `Elimina memoria final resuelta`.
6. Confirmar el cambio.

Si el recurso está dentro de una carpeta con varios archivos, se revisa archivo por archivo para no eliminar materiales que sí sirvan como apoyo.

### Crear un archivo nuevo

Esta acción sirve para crear una plantilla vacía, una indicación adicional o un archivo de instrucciones:

1. Entrar en la carpeta donde se quiere crear el archivo.
2. Pulsar **Add file**.
3. Elegir **Create new file**.
4. Escribir el nombre del archivo, por ejemplo `plantilla-evidencias-sesion-03.md`.
5. Redactar el contenido.
6. Revisar la previsualización si es un archivo Markdown.
7. Escribir un mensaje de commit, por ejemplo `Crea plantilla de evidencias`.
8. Confirmar el cambio.

Para crear una carpeta desde GitHub web, se escribe la ruta completa en el nombre del archivo, por ejemplo `evidencias/README.md`.

### Subir una captura, PDF o archivo de apoyo

Esta acción se usa para añadir imágenes de referencia, capturas de simulación, esquemáticos o documentos de apoyo:

1. Entrar en la carpeta adecuada, por ejemplo `08-resultados-y-evidencias` o la carpeta de una sesión.
2. Pulsar **Add file**.
3. Elegir **Upload files**.
4. Arrastrar el archivo o seleccionarlo desde el ordenador.
5. Escribir un nombre de commit claro, por ejemplo `Sube captura simulacion LED`.
6. Confirmar el cambio.

Después de subir una imagen, puede enlazarse desde un Markdown con una ruta relativa, por ejemplo:

```md
![Captura de la simulación](captura-led-equipo-03.png)
```

### Compartir el enlace del fork limpio

1. Abrir la página principal del fork de aula.
2. Copiar la URL del navegador.
3. Compartirla en el aula virtual, en un QR, en la plataforma educativa o en un documento de la sesión inicial.
4. Comprobar desde una ventana privada o desde otro usuario que el alumnado accede al fork limpio y no al repositorio docente completo.

### Revisar el historial de trabajo

1. Entrar en el fork de un equipo.
2. Abrir la pestaña **Commits** o el historial del archivo.
3. Revisar mensajes, fechas y archivos modificados.
4. Usar esa información para dar retroalimentación sobre proceso, reparto de tareas y evidencias.

Para crear una versión incompleta de un código final, el docente puede conservar la estructura del archivo y sustituir partes clave por comentarios:

```cpp
// TODO Equipo: leer sensor de luz en A0.
// TODO Equipo: definir el umbral de activación.
// TODO Equipo: activar el LED de aviso cuando corresponda.
```

## Qué enlace recibe el alumnado

El alumnado no debe recibir el enlace del repositorio docente completo. Debe recibir el enlace del **fork de aula limpio**. Ese enlace puede compartirse mediante:

- aula virtual del centro;
- código QR proyectado;
- documento de la sesión 01;
- mensaje en la plataforma educativa;
- marcador del navegador en los ordenadores del aula.

## Fork de equipo del alumnado

Una vez compartido el fork limpio, cada equipo de 3 estudiantes crea su propio fork de equipo. Ese fork será su cuaderno técnico digital.

El nombre recomendado es:

```text
invernadero-abp-equipo-XX
```

Ejemplo:

```text
invernadero-abp-equipo-03
```

Cada equipo usará su fork para:

- completar plantillas;
- añadir capturas o enlaces de simulación;
- registrar cálculos;
- guardar versiones de código;
- documentar errores y correcciones;
- preparar evidencias para la memoria técnica.

## Mensajes de commit recomendados

Los commits deben indicar sesión, tarea y equipo:

```text
Sesion 03 - calculo resistencia LED - Equipo 2
Sesion 11 - modifica blink pin 8 - Equipo 2
Sesion 17 - pruebas integracion servo - Equipo 2
```

El objetivo no es enseñar Git avanzado, sino que el alumnado entienda que cada cambio queda registrado y que el proyecto técnico se construye paso a paso.

## Alternativa si el centro no permite cuentas personales

Si el centro no permite que el alumnado use cuentas personales de GitHub, el docente puede mantener el fork de aula como repositorio de consulta y pedir las evidencias por la plataforma educativa del centro.

En ese caso, cada equipo descarga o copia las plantillas, trabaja en documentos locales y entrega:

- plantilla completada;
- capturas;
- enlaces de Tinkercad;
- código;
- registro de evaluación del docente;
- reflexión final.

La memoria seguirá explicando GitHub como estructura docente reutilizable, aunque los commits del alumnado se sustituyan por entregas en el aula virtual.
