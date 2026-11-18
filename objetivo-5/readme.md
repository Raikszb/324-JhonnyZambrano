Objetivo 5

Descripción

En esta carpeta se presenta la representación del mapa de la figura 1 mediante un grafo no dirigido y su implementación en C++. Cada cruce se identifica mediante un vértice y cada calle numerada mediante una arista. El programa calcula el grado de los vértices y realiza el recorrido utilizando el algoritmo de Fleury.

Contenido

-grafos.cpp: construcción del grafo mediante una matriz de adyacencia, cálculo de los grados e implementación del algoritmo de Fleury para obtener el recorrido del cartero.

Funcionamiento

El programa registra las siete calles del mapa y las conexiones entre los cruces A, B, C, D, E y F. Después calcula el grado de cada vértice para comprobar si existe un recorrido euleriano.

En este caso, los vértices C y D tienen grado impar. Por esta razón, el grafo no posee un ciclo euleriano cerrado, pero sí permite un camino euleriano abierto. El algoritmo de Fleury comienza en C, selecciona las calles procurando no utilizar puentes cuando existen otras alternativas y elimina cada arista después de recorrerla para evitar repetir calles.

El recorrido pasa una sola vez por las siete calles y finaliza en D. Debido a que existen dos vértices de grado impar, no es posible regresar al punto de partida sin repetir una calle.

Compilación y ejecución

El código se puede compilar y ejecutar en OnlineGDB https://www.onlinegdb.com/online_c++_compiler , seleccionando C++ como lenguaje. No es necesario introducir datos, ya que las conexiones del mapa están registradas en el programa.

Prueba de referencia

Salida esperada:

RECORRIDO DEL CARTERO - ALGORITMO DE FLEURY

Grado de cada vertice:
A: 2
B: 2
C: 3
D: 3
E: 2
F: 2

Hay dos vertices impares. El recorrido sera abierto.
Inicio: C
Calle 3: C -> A
Calle 7: A -> B
Calle 10: B -> D
Calle 1: D -> C
Calle 9: C -> E
Calle 4: E -> F
Calle 8: F -> D
Fin: D

Nota: el mapa permite recorrer cada calle una vez, pero no regresar al inicio sin repetir una calle.
