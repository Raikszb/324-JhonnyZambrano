#include <iostream>
using namespace std;

const int CANTIDAD_URNAS = 5;
const int MAX_ELEMENTOS = 10;

// Matriz que representa las cinco urnas y contador de elementos
int urnas[CANTIDAD_URNAS][MAX_ELEMENTOS];
int cantidad[CANTIDAD_URNAS] = {0};

// Calcula la posicion de la urna (entre 0 y 4)
int calcularUrna(int numero) {
    return numero % CANTIDAD_URNAS;
}

// Inserta un numero en su urna correspondiente
void insertarNumero(int numero) {
    int posicion = calcularUrna(numero);

    if (cantidad[posicion] < MAX_ELEMENTOS) {
        urnas[posicion][cantidad[posicion]] = numero;
        cantidad[posicion]++;
    }
}

// Carga numeros de ejemplo para realizar las busquedas
void cargarDatos() {
    int datos[] = {7, 12, 18, 23, 31, 36, 42, 49};

    for (int i = 0; i < 8; i++) {
        insertarNumero(datos[i]);
    }
}

// Busca el numero y devuelve la urna visible (entre 1 y 5)
bool buscarNumero(int numero, int &urnaEncontrada) {
    int posicion = calcularUrna(numero);

    for (int i = 0; i < cantidad[posicion]; i++) {
        if (urnas[posicion][i] == numero) {
            urnaEncontrada = posicion + 1;
            return true;
        }
    }
    return false;
}

int main() {
    int numero;
    int urna;

    cargarDatos();

    cout << "BUSQUEDA DE NUMEROS EN URNAS" << endl;
    cout << "Introduzca un numero entre 1 y 50." << endl;
    cout << "Escriba 0 para finalizar." << endl;

    do {
        cout << "\nNumero: ";
        cin >> numero;

        if (numero == 0) {
            break;
        }

        if (numero < 1 || numero > 50) {
            cout << "El numero debe estar entre 1 y 50." << endl;
        } else if (buscarNumero(numero, urna)) {
            cout << "El numero " << numero
                 << " se encuentra en la urna " << urna << "." << endl;
        } else {
            cout << "El numero no se encuentra en la estructura." << endl;
        }

    } while (true);

    cout << "\nPrograma finalizado." << endl;
    return 0;
}
