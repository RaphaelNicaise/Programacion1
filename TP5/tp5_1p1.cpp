/*Cargar una matriz de NxM con valores aleatorios entre [1,100] y comprobar si existen valores
repetidos.*/

#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
    int filas, columnas;
    bool repetido=false;
    srand(time(NULL));
    int nRandom = rand() % 100;
    cout << "Ingrese la cantidad de filas: ";cin >> filas;
    cout << "Ingrese la cantidad de columnas: ";cin >> columnas;
    typedef int tMatriz[filas][columnas];
    tMatriz matriz1;
    // A CADA VALOR DE LA MATRIZ LE ASIGNAMOS UN NUMERO RANDOM
    for (int i = 0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            matriz1[i][j]=rand() % 100;  // N random del 1 al 100
        }
    // MOSTRAMOS MATRIZ
    }
    for (int i = 0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }
    for (int i= 0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            for (int k = 0; k < filas; k++) { // por cada elemento del array, volvemos a recorrer todo
                for (int l = 0; l < columnas; l++) { // para comparar si hay algun otro valor igual a el mismo
                    if (!(i==k & j==l) && matriz1[i][j]==matriz1[k][l]) { 
                        // que los indices sean distintos  y el valor del elemento comparado sea igual
                        repetido = true;
                        break;
                    }
                    
                }
                if (repetido) break;
            }
            if (repetido) break; // los break son porque ya no nos sirve seguir comparando
        }
        if (repetido) break;
    }
    repetido ? cout << "Existen valores repetidos" : cout << "No existen valores repetidos";
    return 0;
}