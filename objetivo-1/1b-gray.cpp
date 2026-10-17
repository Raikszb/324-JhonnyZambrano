
#include <iostream>
#include <string>

using namespace std;

const int TAM = 8;

class CadenaBinaria {
private:
    string bits;

public:
    // Constructor: guarda una cadena binaria de 8 bits.
    CadenaBinaria(string cadena) {
        bits = cadena;
    }

    // Devuelve la cadena almacenada.
    string ObtenerCadena() const {
        return bits;
    }

    // Calcula el codigo Gray de la cadena.
    string Gray() const {
        string resultado(TAM, '0');

        // El primer bit se conserva.
        resultado[0] = bits[0];

        // Se aplica XOR entre cada bit y el anterior.
        for (int i = 1; i < TAM; i++) {
            if (bits[i] == bits[i - 1]) {
                resultado[i] = '0';
            } else {
                resultado[i] = '1';
            }
        }

        return resultado;
    }
};

// Comprueba que la cadena tenga 8 bits binarios.
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
        cout << "Error: ingrese exactamente 8 caracteres, "
             << "solo 0 y 1." << endl;
        return 1;
    }

    CadenaBinaria cadena(entrada);

    cout << "Cadena original: " << cadena.ObtenerCadena()
         << endl;
    cout << "Cadena Gray:     " << cadena.Gray() << endl;

    return 0;
}
