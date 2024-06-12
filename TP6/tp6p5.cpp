/*Crea una función que tome dos matrices cuadradas y almacene su suma en una tercera matriz.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int n=5;
void sumarMatrices(int m1[n][n],int m2[n][n],int mSuma[n][n]);
void mostrarMatriz(int matriz[n][n]);
int main(){
    typedef int tMatriz[n][n]; 
    tMatriz matriz1,matriz2,matrizResultado;
    srand(time(NULL));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            matriz1[i][j]=rand()%10+1;
            matriz2[i][j]=rand()%10+1;
        }
    }
    cout << "Matriz 1:\n";
    mostrarMatriz(matriz1);
    cout << "\nMatriz 2:\n";
    mostrarMatriz(matriz2);
    sumarMatrices(matriz1,matriz2,matrizResultado);
    cout << "\nMatriz resultado:\n";
    mostrarMatriz(matrizResultado);
    return 0;
}
void sumarMatrices(int m1[n][n],int m2[n][n],int mSuma[n][n]){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            mSuma[i][j]=m1[i][j]+m2[i][j];
        }
    }
}
void mostrarMatriz(int matriz[n][n]) {  
        for (int i=0;i<n;i++){                             
            for (int j=0;j<n;j++){                         
                cout << matriz[i][j] << " "; 
            }
            cout << endl;
        }
}