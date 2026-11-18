Objetivo 5: Grafos y recorrido del cartero

Descripción

Se representa el mapa de la figura 1 mediante un grafo no dirigido. Cada cruce se identifica con un vértice (A-F) y cada calle numerada con una arista.

Archivos

- grafos.cpp: construye el grafo, calcula los grados e implementa el recorrido mediante el algoritmo de Fleury.

Conexiones utilizadas

- Calle 7: A-B
- Calle 3: A-C
- Calle 10: B-D
- Calle 1: C-D
- Calle 9: C-E
- Calle 8: D-F
- Calle 4: E-F

Análisis del grafo

Los grados obtenidos son A=2, B=2, C=3, D=3, E=2 y F=2. Los vértices C y D tienen grado impar. Por el criterio de Euler, el grafo no tiene circuito euleriano cerrado, pero sí admite un camino euleriano abierto que comienza en uno de esos vértices y termina en el otro.

Funcionamiento

El programa almacena las conexiones en una matriz de adyacencia. Fleury selecciona una arista disponible, evita los puentes cuando existe otra alternativa y elimina cada calle una vez recorrida para no repetirla.

Recorrido de referencia

Calle 3 (C-A), calle 7 (A-B), calle 10 (B-D), calle 1 (D-C), calle 9 (C-E), calle 4 (E-F) y calle 8 (F-D).

El recorrido visita las siete calles una sola vez y termina en D. No puede regresar a C sin repetir una calle, porque la figura tiene dos vértices de grado impar.

Compilación

g++ grafos.cpp -o grafos
./grafos
