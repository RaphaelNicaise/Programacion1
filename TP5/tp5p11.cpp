/*Escribe un programa donde la cantidad de filas y columnas de la matriz estén definidas por
constantes distintas. Luego, completa los elementos de la matriz siguiendo estas reglas: si la
suma de los índices de un lugar es par, ese lugar se llenará con la raíz cuadrada de la suma de
los índices. En caso de que la suma de los índices sea impar, ese lugar se llenará con un valor
de 0.*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    typedef const int cint;
    cint f=5,c=4;
    float mtx[f][c];
    for (int i=0;i<f;i++){
        for (int j=0;j<c;j++){
            if ((i+j)%2==0) {
                mtx[i][j]=sqrt((i+j+2)); // ponemos +2 porq necesitamos q los indices arranquen del 1
            } else {
                mtx[i][j]=0; 
            }        
        }
    }
    for (int i=0;i<f;i++){
        for (int j=0;j<c;j++){
            cout << mtx[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}