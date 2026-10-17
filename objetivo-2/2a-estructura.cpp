#include <iostream>

using namespace std;

// Objetivo 2 - Inciso a
// Estructuras para representar una ruta mediante
// una lista circular enlazada.

struct Nodo {
    int ciudad;
    int distancia;
    Nodo* siguiente;

    // Constructor del nodo.
    Nodo(int c, int d) {
        ciudad = c;
        distancia = d;
        siguiente = nullptr;
    }
};

struct ListaCircular {
    Nodo* cabeza;

    // Inicializa la lista vacia.
    ListaCircular() {
        cabeza = nullptr;
    }

    // Inserta una ciudad al final de la lista circular.
    void Insertar(int ciudad, int distancia) {
        Nodo* nuevo = new Nodo(ciudad, distancia);

        // Si la lista esta vacia, el nodo se apunta a si mismo.
        if (cabeza == nullptr) {
            cabeza = nuevo;
            nuevo->siguiente = cabeza;
        } else {
            Nodo* actual = cabeza;

            // Busca el ultimo nodo de la lista.
            while (actual->siguiente != cabeza) {
                actual = actual->siguiente;
            }

            // Enlaza el nuevo nodo y conserva la circularidad.
            actual->siguiente = nuevo;
            nuevo->siguiente = cabeza;
        }
    }
};
