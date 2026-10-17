#include <iostream>

using namespace std;

// Recorre la lista circular e imprime las ciudades
// y calcula la distancia total de la ruta.

void Recorrido(Nodo* cabeza) {
    // Verifica si la lista esta vacia.
    if (cabeza == nullptr) {
        cout << "La lista esta vacia." << endl;
        return;
    }

    Nodo* actual = cabeza;
    int distanciaTotal = 0;

    cout << "Ciudades del recorrido: ";

    // Recorre los nodos hasta regresar al primero.
    do {
        cout << actual->ciudad << " ";
        distanciaTotal += actual->distancia;
        actual = actual->siguiente;
    } while (actual != cabeza);

    cout << endl;
    cout << "Distancia total recorrida: " << distanciaTotal << endl;
}
