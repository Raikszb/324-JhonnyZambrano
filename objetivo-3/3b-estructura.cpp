#include <iostream>
using namespace std;

// Datos de cada persona.
struct Persona {
    int numeroLlegada;
    int operacion;
};

// Nodo que almacena una persona.
struct Nodo {
    Persona persona;
    Nodo* siguiente;

    Nodo(Persona p) {
        persona = p;
        siguiente = nullptr;
    }
};

// Estructura de la cola enlazada.
struct Cola {
    Nodo* frente;
    Nodo* final;

    Cola() {
        frente = nullptr;
        final = nullptr;
    }

    // Agrega una persona al final.
    void Encolar(Persona persona) {
        Nodo* nuevo = new Nodo(persona);

        if (frente == nullptr) {
            frente = nuevo;
            final = nuevo;
        } else {
            final->siguiente = nuevo;
            final = nuevo;
        }
    }

    // Retira y devuelve la primera persona.
    Persona Desencolar() {
        if (frente == nullptr) {
            return {-1, -1};
        }

        Nodo* temporal = frente;
        Persona persona = temporal->persona;

        frente = frente->siguiente;

        if (frente == nullptr) {
            final = nullptr;
        }

        delete temporal;
        return persona;
    }

    // Comprueba si la cola esta vacia.
    bool EstaVacia() {
        return frente == nullptr;
    }

    // Libera la memoria de los nodos.
    void Liberar() {
        while (frente != nullptr) {
            Nodo* temporal = frente;
            frente = frente->siguiente;
            delete temporal;
        }

        final = nullptr;
    }
};

// Prueba de la estructura de datos.
int main() {
    Cola colaGeneral;

    colaGeneral.Encolar({1, 2});
    colaGeneral.Encolar({2, 5});

    while (!colaGeneral.EstaVacia()) {
        Persona persona = colaGeneral.Desencolar();

        cout << "Llegada: " << persona.numeroLlegada
             << ", Operacion: " << persona.operacion
             << endl;
    }

    colaGeneral.Liberar();

    return 0;
}
