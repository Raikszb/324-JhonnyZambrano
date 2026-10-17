#include <iostream>
#include <string>

using namespace std;

const int TAM = 8;

// Aplica XOR a dos bits representados como caracteres.
char XOR(char bit1, char bit2) {
    return (bit1 == bit2) ? '0' : '1';
}

// Calcula Gray para una cadena binaria de 8 bits.
string Gray(const string& cadena) {
    string resultado(TAM, '0');

    // El primer bit se conserva.
    resultado[0] = cadena[0];

    // Se aplica XOR entre cada bit y el bit anterior.
    for (int i = 1; i < TAM; i++) {
        resultado[i] = XOR(cadena[i], cadena[i - 1]);
    }

    return resultado;
}

// Comprueba la longitud y el contenido de la cadena.
bool esBinariaDeOchoBits(const string& cadena) {
    if (cadena.length() != TAM) {
        return false;
    }

    for (int i = 0; i < TAM; i++) {
        if (cadena[i] != '0' && cadena[i] != '1') {
            return false;
        }
    }

    return true;
}

int main() {
    string entrada;

    cout << "Ingrese una cadena binaria de 8 bits: ";
    cin >> entrada;

    if (!esBinariaDeOchoBits(entrada)) {
        cout << "Error: ingrese exactamente 8 caracteres, solo 0 y 1."
             << endl;
        return 1;
    }

    cout << "Cadena original: " << entrada << endl;
    cout << "Cadena Gray:     " << Gray(entrada) << endl;

    return 0;
}
