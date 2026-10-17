#include <iostream>

using namespace std;

// Nodo de la lista circular que representa una ruta.
struct Nodo {
int ciudad;        // Número de la ciudad actual.
int distancia;     // Distancia hasta la siguiente ciudad.
Nodo* siguiente;   // Puntero al próximo nodo.

// Constructor del nodo.
Nodo(int c, int d) {
    ciudad = c;
    distancia = d;
    siguiente = nullptr;
}

};

// Estructura que representa la lista circular de la ruta.
struct ListaCircular {
Nodo* cabeza;

// Inicializa la lista vacía.
ListaCircular() {
    cabeza = nullptr;
}

};
