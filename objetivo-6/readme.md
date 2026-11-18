Objetivo 6: Ordenamiento Shell Sort

Descripción

El programa genera una colección de 15 números aleatorios de hasta tres cifras, los almacena en un arreglo unidimensional y los ordena de menor a mayor utilizando Shell Sort.

Archivos

- shell-sort.cpp: generación, visualización y ordenamiento de los números.

Funcionamiento

- generarNumeros() crea valores entre 1 y 999.
- mostrarNumeros() imprime la colección.
- ordenarShell() aplica Shell Sort, reduciendo progresivamente el salto entre elementos.

Compilación

g++ shell-sort.cpp -o shell-sort
./shell-sort
