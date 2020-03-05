Dentro de esta carpeta tenemos los archivos calc.c, calcula.c, calc.h, Makefile, hola.c, Readme.md.

Descripción de los archivos contenidos en esta carpeta.

Readme.md: Documentación sobre el contenido de la carpeta Make.

Makefile: Archivo con las instrucciones y el orden que ha de seguir `make` para la creación de los archivos ejecutables, así como la limpieza de los archivos innecesarios y la distribución, compresión e instalación del programa en el sistema.

hola.c: Código fuente de un "hola mundo" impreso por pantalla. Para compilar el fichero .c ejecutamos `gcc hola.c -o hola` que nos creará un archivo 'hola' el cual podremos ejecutar con `./hola`. De igual forma podemos compilar 'hola.c' con `make hola`.

calcula.c: Código fuente del programa principal `main`. Contiene el programa principal que llama a 'calc' para realizar las tareas ahí definidas y luego mostrar el resultado por pantalla.

calc.c: Código fuente de las funciones usadas en el programa principal. Realiza las funciones de suma, resta, multiplicación, división y comparación de dos números, devolviendo en esta última función el mayor de ambos.

calc.h: Definición de las funciones a incluir en el programa principal.