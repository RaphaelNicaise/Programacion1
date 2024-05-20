/*Escribir un programa que complete una matriz de 10x10 con el número 1 para los índices que
se encuentren por encima de la diagonal principal y con 0 los que estén por debajo. Los
valores de la diagonal principal deben ir en forma descendente desde el 10 hasta el 1.*/

#include <iostream>
using namespace std;
int main() {
    int mtx[10][10];
    int c=10;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            if (i>j) {
                mtx[i][j]=0;
            } else if (i<j) {
                mtx[i][j]=1;
            } else {
                    mtx[i][j]=c;
                    c--;
                }
            }
        }
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout << mtx[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
    
