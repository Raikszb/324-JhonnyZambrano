Objetivo 7: Búsqueda mediante tablas de dispersión

Descripción

El programa organiza una colección de números enteros en cinco urnas y permite buscar continuamente números introducidos por el usuario, dentro del rango de 1 a 50.

Archivos

- tablas-hash.cpp: distribución inicial, función hash y búsqueda.

Función hash y numeración

Se utiliza la función h(n) = n % 5. El resultado es una posición interna de 0 a 4. Para mostrar una urna numerada del 1 al 5 se suma uno a esa posición.

Ejemplos:
- 12 % 5 = 2: posición interna 2, urna visible 3.
- 23 % 5 = 3: posición interna 3, urna visible 4.
- 35 % 5 = 0: posición interna 0, urna visible 1.

Datos iniciales

El enunciado no especifica qué números deben venir cargados en las urnas. Para probar la búsqueda se utiliza esta colección de ejemplo: 7, 12, 18, 23, 31, 36, 42 y 49. Todos se distribuyen automáticamente con la función hash.

Funcionamiento

El programa calcula primero la posición asociada al número y revisa únicamente esa urna. Si lo encuentra, muestra su número de urna (1 a 5); si no, informa que no está en la estructura. El valor 0 permite finalizar.

Compilación

g++ tablas-hash.cpp -o tablas-hash
./tablas-hash
