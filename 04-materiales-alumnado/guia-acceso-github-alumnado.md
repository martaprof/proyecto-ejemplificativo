# Guía rápida de acceso a GitHub para el alumnado

Esta guía explica cómo trabajar con el repositorio del proyecto desde el navegador. Está pensada para alumnado de 1.º de Bachillerato y no requiere usar comandos de Git.

Todas las acciones se realizan desde **GitHub web**. No se usa terminal ni Git en local: el equipo trabajará entrando en su repositorio desde el navegador.

## Qué repositorio debes usar

El profesor compartirá un enlace al **repositorio limpio de aula**. Ese repositorio contiene las instrucciones, plantillas y recursos que necesitáis, pero no incluye las soluciones completas del profesor.

No trabajéis sobre el repositorio original del docente. Cada equipo debe crear su propia copia para completar el proyecto.

## Antes de empezar

Cada equipo debe tener:

- un ordenador;
- acceso a internet;
- el enlace del repositorio limpio;
- una cuenta de GitHub autorizada por el centro o una cuenta de equipo;
- nombre de equipo;
- roles asignados.

Si el centro no usa cuentas de GitHub para alumnado, el profesor indicará cómo entregar las plantillas y evidencias por el aula virtual.

## Crear el fork del equipo

1. Abre el enlace del repositorio limpio que ha compartido el profesor.
2. Pulsa el botón **Fork**.
3. Selecciona tu cuenta o la cuenta del equipo.
4. Cambia el nombre del repositorio si el profesor lo pide.
5. Usa un nombre claro, por ejemplo:

```text
invernadero-abp-equipo-04
```

6. Pulsa **Create fork**.

El fork es vuestra copia de trabajo. A partir de ese momento, los cambios se guardan en el repositorio del equipo.

## Acciones que usarás en GitHub web

Durante el proyecto, el equipo no necesita conocer Git avanzado. Las acciones habituales serán:

- abrir el `README.md` de cada sesión;
- editar plantillas Markdown;
- crear archivos de evidencia cuando el profesor lo pida;
- subir capturas, código o documentos;
- pegar enlaces de Tinkercad en las plantillas;
- guardar cambios con commits;
- revisar la lista de archivos y comprobar que las evidencias están en el lugar correcto.

## Cómo abrir una sesión del proyecto

1. Entra en el fork de tu equipo.
2. Abre la carpeta `03-sesiones`.
3. Busca la sesión indicada por el profesor.
4. Abre el archivo `README.md`.
5. Lee la pregunta de trabajo, la actividad, los recursos y las evidencias.
6. Abre las plantillas enlazadas desde el README.

El README funciona como guion de trabajo: indica qué se va a aprender, qué hay que hacer y qué se debe entregar.

## Cómo editar un README o una plantilla

1. Abre el archivo indicado por el profesor, por ejemplo `README.md`, `plantilla-calculos.md`, `plantilla-programacion.md` o una actividad guiada.
2. Pulsa el icono del lápiz.
3. Completa los apartados que correspondan.
4. Usa la pestaña **Preview** para comprobar que las tablas, listas y enlaces se ven bien.
5. Revisa que el texto esté claro y que las unidades sean correctas.
6. Baja hasta **Commit changes**.
7. Escribe un mensaje de commit.
8. Pulsa **Commit changes**.

Ejemplo de mensaje:

```text
Sesion 03 - completa plantilla de calculos - Equipo 4
```

## Cómo crear un archivo nuevo

Esta acción se usa cuando el profesor pide una evidencia específica que no tiene plantilla previa:

1. Entra en la carpeta indicada por el profesor.
2. Pulsa **Add file**.
3. Elige **Create new file**.
4. Escribe un nombre claro, por ejemplo `registro-errores-sesion-17-equipo-04.md`.
5. Redacta el contenido siguiendo las indicaciones de la sesión.
6. Revisa la pestaña **Preview** si es un archivo Markdown.
7. Escribe un commit claro.
8. Pulsa **Commit changes**.

No crees archivos sueltos con nombres como `final.md`, `prueba.md` o `cosas.md`. El nombre debe indicar sesión, tarea y equipo.

## Qué es un commit

Un commit es un registro de un cambio. Sirve para saber qué se ha modificado y cuándo.

No hace falta escribir mensajes largos, pero deben ser claros:

```text
Sesion 11 - cambia tiempo de parpadeo - Equipo 4
Sesion 17 - añade tabla de pruebas - Equipo 4
```

Evita mensajes poco útiles como:

```text
cambios
prueba
final
```

## Cómo guardar capturas o enlaces

Cuando trabajes en Tinkercad:

1. guarda el proyecto con un nombre claro;
2. copia el enlace compartido si el profesor lo solicita;
3. realiza una captura si hace falta;
4. pega el enlace o el nombre del archivo en la plantilla de la sesión.

Si el repositorio no permite subir imágenes, entrega la captura por el aula virtual y escribe en la plantilla dónde se ha entregado.

## Cómo subir una captura o archivo al repositorio

Cuando el profesor pida subir una evidencia al fork del equipo:

1. Entra en la carpeta indicada, por ejemplo `08-resultados-y-evidencias` o la carpeta de la sesión.
2. Pulsa **Add file**.
3. Elige **Upload files**.
4. Arrastra la captura, el archivo `.ino`, el PDF o el documento que corresponda.
5. Comprueba que el nombre del archivo es claro, por ejemplo `sesion-03-simulacion-led-equipo-04.png`.
6. Escribe un commit, por ejemplo `Sesion 03 - sube captura simulacion LED - Equipo 4`.
7. Pulsa **Commit changes**.

Si subes una imagen y debes mostrarla en una plantilla Markdown, puedes escribir una referencia como esta:

```md
![Simulación LED del equipo 4](sesion-03-simulacion-led-equipo-04.png)
```

## Cómo pegar un enlace de Tinkercad

1. Abre el proyecto de Tinkercad.
2. Comprueba que la simulación tiene un nombre claro.
3. Usa la opción de compartir que indique el profesor.
4. Copia el enlace.
5. Vuelve al archivo Markdown de la sesión.
6. Pega el enlace en el apartado de evidencias.
7. Guarda el cambio con un commit.

El enlace debe ir acompañado de una frase breve que explique qué muestra la simulación.

## Cómo comprobar el trabajo guardado

1. Vuelve a la página principal del fork del equipo.
2. Entra en la carpeta de la sesión.
3. Comprueba que aparecen las plantillas editadas y los archivos subidos.
4. Abre cada archivo para revisar que se visualiza correctamente.
5. Entra en **Commits** para comprobar que el último cambio tiene un mensaje claro.
6. Avisa al profesor si el archivo está en una carpeta equivocada o si falta alguna evidencia.

## Reparto de tareas en el equipo

Cada equipo de 3 trabajará con estos roles:

| Rol | Qué hace durante la sesión |
| --- | --- |
| Coordinación-documentación | Lee instrucciones, controla tiempos, completa plantillas y prepara el commit. |
| Simulación-montaje | Maneja Tinkercad, revisa conexiones y guarda capturas o enlaces. |
| Programación-verificación | Revisa código, ejecuta pruebas y comprueba que las evidencias coinciden con la actividad. |

Los roles rotan durante el proyecto. Aunque tengas un rol, debes entender lo que hacen tus compañeros, porque todos sois responsables del resultado final.

## Cierre de cada sesión

Antes de salir de clase, el equipo debe comprobar:

- la plantilla está completada;
- la simulación, cálculo o código funciona o tiene errores documentados;
- las evidencias indicadas por el docente están preparadas;
- el commit tiene un mensaje claro;
- todos los integrantes saben explicar qué se ha aprendido.

Si algo no funciona, no se borra sin más. Se anota el error, la causa probable y la siguiente prueba que realizará el equipo.
