
Objetivo 7

Descripción

En esta carpeta se presenta un programa en C++ que permite buscar números enteros comprendidos entre 1 y 50 dentro de una estructura formada por cinco urnas. Para organizar los datos se utiliza una función hash basada en la operación módulo.

Contenido

-tablas-hash.cpp: definición de las cinco urnas, carga de los números de ejemplo, cálculo de la posición mediante la función hash y búsqueda de los valores introducidos por el usuario.

Funcionamiento

El programa carga inicialmente los números 7, 12, 18, 23, 31, 36, 42 y 49. Estos valores se distribuyen automáticamente en las cinco urnas mediante la función:

h(n) = n % 5

El resultado de la operación determina una posición interna entre 0 y 4. Para mostrar las urnas numeradas del 1 al 5, el programa suma uno a dicha posición. Por ejemplo, el número 12 produce una posición interna 2 y se muestra en la urna 3.

Después de cargar los datos, el programa solicita números al usuario de forma continua. Si el número se encuentra almacenado, muestra en cuál urna está; de lo contrario, informa que no se encuentra en la estructura. El usuario puede introducir 0 para finalizar.

La lista de números iniciales es una distribución de ejemplo, ya que el enunciado no especifica cuáles deben estar almacenados en las urnas.

Compilación y ejecución

El código se puede compilar y ejecutar en OnlineGDB https://www.onlinegdb.com/online_c++_compiler , seleccionando C++ como lenguaje. Se pueden introducir números entre 1 y 50 para probar la búsqueda. El número 0 permite finalizar el programa.

Prueba de referencia

Entrada:

12
16
11
7
0

Salida esperada:

BUSQUEDA DE NUMEROS EN URNAS
Introduzca un numero entre 1 y 50.
Escriba 0 para finalizar.

Numero: 12
El numero 12 se encuentra en la urna 3.

Numero: 16
El numero no se encuentra en la estructura.

Numero: 11
El numero no se encuentra en la estructura.

Numero: 7
El numero 7 se encuentra en la urna 3.

Numero: 0
Programa finalizado.
