/*Dado un arreglo de tamaño N=16 cargado aleatoriamente. Copiar sus valores en una matriz
de 4x4. */

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int numeros[16];
    
    for (int i=0;i<16;i++) {
        numeros[i]=rand() % 10;
    }
    int matriz[4][4];
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j]=numeros[contador];
            contador++;
        }
    }
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}