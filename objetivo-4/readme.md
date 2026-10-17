Objetivo 4:

Descripción

Este objetivo consiste en implementar una función recursiva llamada Grado, que recibe la raíz de un árbol binario de búsqueda y un número entero. La función busca el número en el árbol y determina el grado del nodo correspondiente. Si el número no se encuentra, muestra un mensaje indicándolo.

Archivos

- grado.cpp: contiene la estructura del nodo y la función recursiva Grado.
- prueba-grado.cpp: contiene un programa completo para construir un árbol y comprobar el funcionamiento de la función.

Funcionamiento

Cada nodo contiene un número entero y dos punteros: uno al hijo izquierdo y otro al hijo derecho.

La función Grado busca el número de manera recursiva. Cuando lo encuentra, cuenta sus hijos directos:

- Grado 0:el nodo no tiene hijos.
- Grado 1:el nodo tiene un solo hijo.
- Grado 2:el nodo tiene dos hijos.

Si el número no está en el árbol, se muestra el mensaje: «El numero no se encuentra en el arbol».

Pruebas realizadas

Se construyó un árbol con los valores 10, 5, 15, 3 y 7.

La salida obtenida en OnlineGDB fue:

El grado del nodo 10 es: 2
El grado del nodo 5 es: 2
El grado del nodo 3 es: 0
El numero no se encuentra en el arbol.

El programa utiliza un árbol binario de búsqueda, funciones recursivas y memoria dinámica. Al finalizar las pruebas, se libera la memoria utilizada por los nodos.

Los valores del árbol se utilizan como ejemplo para comprobar la función.
