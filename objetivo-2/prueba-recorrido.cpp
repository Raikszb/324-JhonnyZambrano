#include <iostream>
using namespace std;

// Nodo de la lista circular: ciudad, distancia al siguiente nodo y enlace.
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

// Recorre la lista circular y calcula la distancia total.
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

int main() {
    // Datos ficticios para probar la funcion.
    // Las distancias representan el tramo desde cada ciudad
    // hasta la siguiente, incluido el regreso a la ciudad inicial.
    Nodo* ciudad2 = new Nodo(2, 10);
    Nodo* ciudad3 = new Nodo(3, 20);
    Nodo* ciudad9 = new Nodo(9, 15);
    Nodo* ciudad4 = new Nodo(4, 12);
    Nodo* ciudad6 = new Nodo(6, 8);

    // Enlaza los nodos formando una lista circular.
    ciudad2->siguiente = ciudad3;
    ciudad3->siguiente = ciudad9;
    ciudad9->siguiente = ciudad4;
    ciudad4->siguiente = ciudad6;
    ciudad6->siguiente = ciudad2;

    // Muestra las ciudades y calcula la distancia total.
    Recorrido(ciudad2);

    // Libera la memoria reservada dinamicamente.
    delete ciudad6;
    delete ciudad4;
    delete ciudad9;
    delete ciudad3;
    delete ciudad2;

    return 0;
}
