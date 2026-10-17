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

// Inserta un numero en el arbol binario de busqueda.
Nodo* Insertar(Nodo* raiz, int valor) {
    if (raiz == nullptr) {
        return new Nodo(valor);
    }

    if (valor < raiz->dato) {
        raiz->izquierdo = Insertar(raiz->izquierdo, valor);
    } else if (valor > raiz->dato) {
        raiz->derecho = Insertar(raiz->derecho, valor);
    }

    return raiz;
}

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

// Libera la memoria del arbol.
void Liberar(Nodo* raiz) {
    if (raiz != nullptr) {
        Liberar(raiz->izquierdo);
        Liberar(raiz->derecho);
        delete raiz;
    }
}

int main() {
    Nodo* raiz = nullptr;

    // Construccion del arbol para la prueba.
    raiz = Insertar(raiz, 10);
    raiz = Insertar(raiz, 5);
    raiz = Insertar(raiz, 15);
    raiz = Insertar(raiz, 3);
    raiz = Insertar(raiz, 7);

    // Pruebas de los grados.
    Grado(raiz, 10);
    Grado(raiz, 5);
    Grado(raiz, 3);
    Grado(raiz, 20);

    Liberar(raiz);

    return 0;
}
