Objetivo 3: Sistema de colas

Descripción

En este objetivo se desarrolla un programa en C++ para distribuir a las personas que llegan a una clinica en tres colas diferentes, según el tipo de operación que necesitan realizar.

A cada persona se le asigna un número correlativo de llegada y el número de la operación que debe efectuar.

a). Función Distribuir

Se implementó la función Distribuir(), encargada de retirar las personas de una cola general y colocarlas en la cola correspondiente.

La distribución se realiza de la siguiente manera:

- Cola 1:operaciones 1, 2 y 3.
- Cola 2:operaciones 4, 5 y 6.
- Cola 3:operaciones 7, 8 y 9.

La función conserva el orden de llegada de las personas dentro de cada cola.

Archivo: 3a-distribuir.cpp

b). Estructura de datos

Se utilizó una cola enlazada con manejo dinámico de memoria. Para su funcionamiento se definieron las siguientes estructuras:

- Persona:almacena el número de llegada y el número de operación.
- Nodo:contiene los datos de una persona y un puntero al siguiente nodo.
- Cola:administra el frente y el final de la cola.

También se implementaron las operaciones para agregar y retirar personas, comprobar si la cola está vacía y liberar la memoria utilizada.

Archivo: 3b-estructura.cpp

Prueba del programa

Se probó la función Distribuir() utilizando cuatro personas con diferentes números de operación.

Los resultados fueron los siguientes:

- La persona 1, con operación 2, fue enviada a la cola 1.
- La persona 2, con operación 5, fue enviada a la cola 2.
- La persona 3, con operación 8, fue enviada a la cola 3.
- La persona 4, con operación 1, fue enviada a la cola 1.

La prueba permitió comprobar que las personas se distribuyen según su operación y que se conserva el orden de llegada dentro de cada cola.

Archivo de prueba: prueba-distribuir.cpp

El archivo prueba-distribuir.cpp contiene los elementos necesarios para ejecutar la prueba de forma independiente. En él se crean las cuatro personas, se llama a la función Distribuir() y se muestra el contenido de las tres colas.

Conclusión

Con esta actividad aplicamos el uso de estructuras, punteros y memoria dinámica en C++. Se implementó una cola enlazada y una función para distribuir las personas según la operación que necesitan realizar, respetando el orden en que llegaron.
