#include <iostream>
using namespace std;

struct Persona {
    int numeroLlegada;
    int operacion;
};

struct Nodo {
    Persona persona;
    Nodo* siguiente;

    Nodo(Persona p) {
        persona = p;
        siguiente = nullptr;
    }
};

struct Cola {
    Nodo* frente;
    Nodo* final;

    Cola() {
        frente = nullptr;
        final = nullptr;
    }

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

    bool EstaVacia() {
        return frente == nullptr;
    }

    void Mostrar() {
        Nodo* actual = frente;

        while (actual != nullptr) {
            cout << "Llegada: "
                 << actual->persona.numeroLlegada
                 << ", Operacion: "
                 << actual->persona.operacion
                 << endl;

            actual = actual->siguiente;
        }
    }

    void Liberar() {
        while (frente != nullptr) {
            Nodo* temporal = frente;
            frente = frente->siguiente;
            delete temporal;
        }

        final = nullptr;
    }
};

// Distribuye las personas en las tres colas.
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

int main() {
    Cola general;
    Cola cola1;
    Cola cola2;
    Cola cola3;

    // Datos de prueba.
    general.Encolar({1, 2});
    general.Encolar({2, 5});
    general.Encolar({3, 8});
    general.Encolar({4, 1});

    Distribuir(general, cola1, cola2, cola3);

    cout << "COLA 1: Operaciones 1, 2 y 3" << endl;
    cola1.Mostrar();

    cout << endl;
    cout << "COLA 2: Operaciones 4, 5 y 6" << endl;
    cola2.Mostrar();

    cout << endl;
    cout << "COLA 3: Operaciones 7, 8 y 9" << endl;
    cola3.Mostrar();

    general.Liberar();
    cola1.Liberar();
    cola2.Liberar();
    cola3.Liberar();

    return 0;
}
