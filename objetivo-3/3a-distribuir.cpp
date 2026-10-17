#include <iostream>
using namespace std;

// Datos de cada persona.
struct Persona {
    int numeroLlegada;
    int operacion;
};

// Nodo de la cola.
struct Nodo {
    Persona persona;
    Nodo* siguiente;

    Nodo(Persona p) {
        persona = p;
        siguiente = nullptr;
    }
};

// Cola enlazada con memoria dinamica.
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

    // Retira la primera persona.
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

    // Libera la memoria utilizada.
    void Liberar() {
        while (frente != nullptr) {
            Nodo* temporal = frente;
            frente = frente->siguiente;
            delete temporal;
        }

        final = nullptr;
    }
};

// distribuye las personas
// segun el numero de operacion.
void Distribuir(Cola& general, Cola& cola1,
                Cola& cola2, Cola& cola3) {

    while (!general.EstaVacia()) {
        Persona persona = general.Desencolar();

        if (persona.operacion >= 1 &&
            persona.operacion <= 3) {
            cola1.Encolar(persona);
        } else if (persona.operacion >= 4 &&
                   persona.operacion <= 6) {
            cola2.Encolar(persona);
        } else if (persona.operacion >= 7 &&
                   persona.operacion <= 9) {
            cola3.Encolar(persona);
        } else {
            cout << "Operacion no valida para la persona "
                 << persona.numeroLlegada << endl;
        }
    }
}
