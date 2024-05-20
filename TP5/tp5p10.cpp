/*Escribir un programa que le permita al usuario ingresar la diagonal principal de una matriz
de 5x5 y que los otros lugares se completen con una X.*/

#include <iostream>
using namespace std;
int main() {
    int Matriz[5][5];
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (i==j) {
            cout << "Ingrese numero: " ;cin>>Matriz[i][j];
            }
        }
    }
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (i==j)     
                cout << Matriz[i][j] << ' ';
            else 
                cout << "X ";
            }
            cout << endl;
        }
        
    return 0;
}
    

