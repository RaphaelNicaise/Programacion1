#include <iostream>
using namespace std;

int main(){
    const int n = 6;
    int matriz[n][n];

    // Llenar la matriz
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matriz[i][j] = i * 10 + j;
        }
    }
    
    // Mostrar la matriz en forma matricial
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl << "Recorrido personalizado:" << endl;

    //defino n = 6;
    //tengo un inicio, ascendente, varia columna, 0 a n -1
    //4 tramos que se dividen en dos mitades
    //tramo 1: varia fila, descendente, n-1 hasta [lugar variable]
    //tramo 2: varia columna, descendente, desde columna [lugar variable] hasta 0;
    //tramo 3: varia fila, ascendente, 0 hasta [lugar variable]
    //tramo 4: varia columna, ascendente, desde [lugar variable] hasta n -1;

    // Recorrer la matriz según el patrón especificado
    for (int columna_inicio = 0; columna_inicio < n; columna_inicio++) {
        if (columna_inicio < n / 2) {
            // Tramo 1: varia fila, descendente, n-1 hasta (n/2 - 1 - columna_inicio)
            for (int fila = n - 1; fila >= (n / 2 - 1 - columna_inicio); fila--) {
                cout << matriz[fila][columna_inicio] << "\t";
            }
            // Tramo 2: varia columna, descendente, desde columna_inicio hasta 0
            for (int col = columna_inicio - 1; col >= 0; col--) {
                cout << matriz[n / 2 - 1 - columna_inicio][col] << "\t";
            }
        } else {
            // Tramo 3: varia fila, ascendente, 0 hasta (columna_inicio - n/2)
            for (int fila = 0; fila <= n - 1 - (columna_inicio - 3); fila++) {
                cout << matriz[fila][columna_inicio] << "\t";
            }
            // Tramo 4: varia columna, ascendente, desde columna_inicio hasta n-1
            for (int col = columna_inicio + 1; col < n; col++) {
                cout << matriz[n - 1 -(columna_inicio -3)][col] << "\t";
            }
        }
        cout << endl;
    }
    
    return 0;
}