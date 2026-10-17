Objetivo 2:

Descripción

En este objetivo se desarrolla una estructura de datos en C++ para representar un recorrido entre ciudades mediante una lista circular enlazada.

El recorrido comienza en una ciudad, pasa por las demás ciudades indicadas y regresa a la ciudad de origen. Cada nodo almacena el número de una ciudad, la distancia hasta la siguiente ciudad y un puntero que permite continuar el recorrido.

a). Estructura de datos

Se definieron dos estructuras principales:

- Nodo:almacena el número de la ciudad, la distancia hasta la siguiente ciudad y el enlace al próximo nodo.
- ListaCircular:administra la lista mediante un puntero a la cabeza e incorpora el método Insertar(), que permite crear nodos utilizando memoria dinámica.

También se agregó el método Liberar(), encargado de liberar la memoria utilizada por los nodos al finalizar la ejecución.

Archivo: 2a-estructura.cpp

b). Función Recorrido

Se implementó la función Recorrido(), que recibe el puntero al primer nodo de la lista circular.

La función realiza las siguientes operaciones:

1. Comprueba si la lista está vacía.
2. Recorre los nodos e imprime las ciudades en el orden establecido.
3. Suma las distancias almacenadas en cada nodo.
4. Muestra la distancia total del recorrido.

Como se trata de una lista circular, se utiliza un ciclo do-while que finaliza cuando se vuelve a llegar al primer nodo.

Archivo: 2b-recorrido.cpp

Prueba del programa

Para comprobar el funcionamiento, se utilizó OnlineGDB con las ciudades del recorrido de ejemplo 2, 3, 9, 4, 6, 2.

Se asignaron distancias ficticias únicamente para realizar la prueba.

La salida obtenida fue:

Ciudades del recorrido: 2 3 9 4 6
Distancia total recorrida: 65


El resultado corresponde a la suma de las distancias de prueba: 10 + 20 + 15 + 12 + 8 = 65. La última distancia representa el regreso desde la ciudad 6 hasta la ciudad 2.

Archivo utilizado para ejecutar la prueba completa: prueba-recorrido.cpp

Conclusión
La actividad me permitió aplicar el uso de memoria dinámica y punteros para construir una lista circular enlazada en C++. También se comprobó cómo recorrer esta estructura para mostrar las ciudades y calcular la distancia total, incluyendo el tramo de regreso a la ciudad de origen.
