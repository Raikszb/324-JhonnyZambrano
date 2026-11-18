#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TAM = 15;

// Genera numeros aleatorios entre 1 y 999
void generarNumeros(int numeros[]) {
    for (int i = 0; i < TAM; i++) {
        numeros[i] = 1 + rand() % 999;
    }
}

// Muestra los numeros almacenados
void mostrarNumeros(int numeros[]) {
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}

// Ordena los numeros de menor a mayor mediante Shell Sort
void ordenarShell(int numeros[]) {
    for (int salto = TAM / 2; salto > 0; salto /= 2) {
        for (int i = salto; i < TAM; i++) {
            int temporal = numeros[i];
            int j = i;

            while (j >= salto && numeros[j - salto] > temporal) {
                numeros[j] = numeros[j - salto];
                j -= salto;
            }
            numeros[j] = temporal;
        }
    }
}

int main() {
    int numeros[TAM];
    srand(time(0));

    generarNumeros(numeros);

    cout << "NUMEROS ANTES DE ORDENAR:" << endl;
    mostrarNumeros(numeros);

    ordenarShell(numeros);

    cout << "\nNUMEROS DESPUES DE ORDENAR:" << endl;
    mostrarNumeros(numeros);

    return 0;
}
