#include <iostream>
using namespace std;

// Estructura de cada nodo del arbol.
struct Nodo {
    int dato;
    Nodo* izquierdo;
    Nodo* derecho;

    Nodo(int valor) {
        dato = valor;
        izquierdo = nullptr;
        derecho = nullptr;
    }
};

// Busca un numero y determina el grado de su nodo.
void Grado(Nodo* raiz, int numero) {
    if (raiz == nullptr) {
        cout << "El numero no se encuentra en el arbol."
             << endl;
        return;
    }

    if (numero < raiz->dato) {
        Grado(raiz->izquierdo, numero);
    } else if (numero > raiz->dato) {
        Grado(raiz->derecho, numero);
    } else {
        int grado = 0;

        if (raiz->izquierdo != nullptr) {
            grado++;
        }

        if (raiz->derecho != nullptr) {
            grado++;
        }

        cout << "El grado del nodo " << numero
             << " es: " << grado << endl;
    }
}
