/*Escribir un programa que complete una matriz de 5x5 con la suma de sus correspondientes
índices. Ejemplo en la posición fila 3 columna 2 debe guardar el número 5.*/

#include <iostream>
using namespace std;
int main() {
    int Matriz[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            Matriz[i][j] = i+j+2;
        }   
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << Matriz[i][j] << ' ';
        }
        cout << endl;   
    }
    return 0;  
}