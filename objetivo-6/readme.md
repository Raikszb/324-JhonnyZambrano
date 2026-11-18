
Objetivo 6

Descripción

En esta carpeta se presenta un programa en C++ que genera una colección de 15 números aleatorios de hasta tres cifras y los ordena utilizando el algoritmo Shell Sort. Los datos se almacenan en un arreglo unidimensional.

Contenido

-shell-sort.cpp: generación de números aleatorios, visualización de los datos y ordenamiento mediante el método Shell Sort.

Funcionamiento

El programa genera automáticamente 15 números comprendidos entre 1 y 999 y los almacena en un arreglo. Primero muestra los números en el orden en que fueron generados.

Después, la función ordenarShell() aplica el algoritmo Shell Sort. Este método compara elementos que se encuentran separados por una distancia o salto, la cual se reduce progresivamente hasta llegar a uno. Finalmente, el programa muestra los mismos números ordenados de menor a mayor.

Los números pueden variar en cada ejecución porque se generan aleatoriamente.

Compilación y ejecución

El código se puede compilar y ejecutar en OnlineGDB https://www.onlinegdb.com/online_c++_compiler , seleccionando C++ como lenguaje. No es necesario introducir datos, ya que el programa genera automáticamente los números.

Prueba de referencia

Una posible salida es la siguiente:

NUMEROS ANTES DE ORDENAR:
164 727 606 990 665 156 338 864 302 534 513 364 147 615 387

NUMEROS DESPUES DE ORDENAR:
147 156 164 302 338 364 387 513 534 606 615 665 727 864 990

Los valores pueden cambiar en cada ejecución, pero la segunda lista siempre debe mostrar los números ordenados de menor a mayor.
