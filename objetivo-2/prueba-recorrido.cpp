#include <iostream>
using namespace std;

// Nodo de la lista circular.
struct Nodo {
    int ciudad;
    int distancia;
    Nodo* siguiente;

    Nodo(int c, int d) {
        ciudad = c;
        distancia = d;
        siguiente = nullptr;
    }
};

// Lista circular enlazada.
struct ListaCircular {
    Nodo* cabeza;

    ListaCircular() {
        cabeza = nullptr;
    }

    // Inserta una ciudad al final de la lista.
    void Insertar(int ciudad, int distancia) {
        Nodo* nuevo = new Nodo(ciudad, distancia);

        if (cabeza == nullptr) {
            cabeza = nuevo;
            nuevo->siguiente = cabeza;
        } else {
            Nodo* actual = cabeza;

            while (actual->siguiente != cabeza) {
                actual = actual->siguiente;
            }

            actual->siguiente = nuevo;
            nuevo->siguiente = cabeza;
        }
    }

    // Libera la memoria utilizada por los nodos.
    void Liberar() {
        if (cabeza == nullptr) {
            return;
        }

        Nodo* actual = cabeza->siguiente;

        while (actual != cabeza) {
            Nodo* temporal = actual;
            actual = actual->siguiente;
            delete temporal;
        }

        delete cabeza;
        cabeza = nullptr;
    }
};

// Recorre la lista e imprime las ciudades
// y la distancia total del recorrido.
void Recorrido(Nodo* cabeza) {
    if (cabeza == nullptr) {
        cout << "La lista esta vacia." << endl;
        return;
    }

    Nodo* actual = cabeza;
    int distanciaTotal = 0;

    cout << "Ciudades del recorrido: ";

    do {
        cout << actual->ciudad << " ";
        distanciaTotal += actual->distancia;
        actual = actual->siguiente;
    } while (actual != cabeza);

    cout << endl;
    cout << "Distancia total recorrida: " << distanciaTotal << endl;
}

int main() {
    ListaCircular ruta;

    // Distancias ficticias para comprobar el funcionamiento.
    // La distancia de la ciudad 6 corresponde al regreso
    // a la ciudad 2, cerrando el recorrido circular.
    ruta.Insertar(2, 10);
    ruta.Insertar(3, 20);
    ruta.Insertar(9, 15);
    ruta.Insertar(4, 12);
    ruta.Insertar(6, 8);

    // Mostrar el recorrido y calcular su distancia total.
    Recorrido(ruta.cabeza);

    // Liberar la memoria dinámica.
    ruta.Liberar();

    return 0;
}
