#include <iostream>
using namespace std;

// Cantidad de cruces del mapa
const int N = 6;

// Matriz de adyacencia y numero de calle de cada conexion
int grafo[N][N] = {0};
int calles[N][N] = {0};
char nombres[N] = {'A', 'B', 'C', 'D', 'E', 'F'};

// Cuenta las conexiones que tiene cada vertice
int gradoVertice(int vertice) {
    int grado = 0;
    for (int i = 0; i < N; i++) {
        grado += grafo[vertice][i];
    }
    return grado;
}

// Cuenta los vertices que se pueden alcanzar desde un punto
void visitar(int actual, bool visitado[]) {
    visitado[actual] = true;
    for (int i = 0; i < N; i++) {
        if (grafo[actual][i] == 1 && !visitado[i]) {
            visitar(i, visitado);
        }
    }
}

int contarAlcanzables(int inicio) {
    bool visitado[N] = {false};
    visitar(inicio, visitado);
    int total = 0;
    for (int i = 0; i < N; i++) {
        if (visitado[i]) total++;
    }
    return total;
}

// Comprueba si quitar una calle desconecta la parte restante del grafo
bool esPuente(int a, int b) {
    int antes = contarAlcanzables(a);
    grafo[a][b] = 0;
    grafo[b][a] = 0;
    int despues = contarAlcanzables(a);
    grafo[a][b] = 1;
    grafo[b][a] = 1;
    return despues < antes;
}

// Devuelve una calle disponible que no sea puente, cuando sea posible
int elegirDestino(int actual) {
    int unicaOpcion = -1;

    for (int i = 0; i < N; i++) {
        if (grafo[actual][i] == 1) {
            unicaOpcion = i;
            if (!esPuente(actual, i)) {
                return i;
            }
        }
    }
    return unicaOpcion;
}

// Ejecuta Fleury y muestra cada calle recorrida
void fleury(int inicio) {
    int actual = inicio;
    cout << "Inicio: " << nombres[actual] << endl;

    for (int paso = 0; paso < 7; paso++) {
        int siguiente = elegirDestino(actual);

        if (siguiente == -1) {
            cout << "No quedan calles disponibles." << endl;
            return;
        }

        cout << "Calle " << calles[actual][siguiente]
             << ": " << nombres[actual] << " -> "
             << nombres[siguiente] << endl;

        // Elimina la calle para no recorrerla nuevamente
        grafo[actual][siguiente] = 0;
        grafo[siguiente][actual] = 0;
        actual = siguiente;
    }

    cout << "Fin: " << nombres[actual] << endl;
}

int main() {
    // Registra las siete calles de la figura 1
    int origen[]  = {0, 0, 1, 2, 2, 3, 4};
    int destino[] = {1, 2, 3, 3, 4, 5, 5};
    int numero[]  = {7, 3, 10, 1, 9, 8, 4};

    for (int i = 0; i < 7; i++) {
        int a = origen[i];
        int b = destino[i];
        grafo[a][b] = 1;
        grafo[b][a] = 1;
        calles[a][b] = numero[i];
        calles[b][a] = numero[i];
    }

    cout << "RECORRIDO DEL CARTERO - ALGORITMO DE FLEURY" << endl;

    int impares = 0;
    int inicio = -1;

    cout << "\nGrado de cada vertice:" << endl;
    for (int i = 0; i < N; i++) {
        int grado = gradoVertice(i);
        cout << nombres[i] << ": " << grado << endl;
        if (grado % 2 != 0) {
            impares++;
            if (inicio == -1) inicio = i;
        }
    }

    if (impares != 2) {
        cout << "\nEste ejemplo requiere exactamente dos vertices impares."
             << endl;
        return 0;
    }

    cout << "\nHay dos vertices impares. El recorrido sera abierto." << endl;
    fleury(inicio);

    cout << "\nNota: el mapa permite recorrer cada calle una vez, "
         << "pero no regresar al inicio sin repetir una calle." << endl;

    return 0;
}
