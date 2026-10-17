Objetivo 1

Descripción

En esta carpeta se presenta el TAD CadenaBinaria y su implementación en C++. El programa trabaja con cadenas binarias de ocho bits y permite obtener su representación Gray.

Contenido

-1a.md:descripción del tipo abstracto de datos y sus operaciones.
-1b-gray.cpp: implementación de la clase CadenaBinaria, la función Gray() y la validación de la entrada.

Funcionamiento

El programa solicita una cadena binaria de ocho bits y comprueba que tenga la longitud correcta y que solo contenga los caracteres 0 y 1.

Si la entrada es válida, crea un objeto de la clase CadenaBinaria, muestra la cadena original y calcula su representación Gray. Si la entrada no cumple las condiciones, muestra un mensaje de error.

Compilación y ejecución

El código se puede compilar y ejecutar en OnlineGDB https://www.onlinegdb.com/online_c++_compiler , seleccionando C++ como lenguaje.

Prueba de referencia

Entrada:

10110010

Salida esperada:

Cadena original: 10110010
Cadena Gray:     11101011

También se puede probar con una entrada incorrecta, por ejemplo 1011, para comprobar que el programa la rechace.
