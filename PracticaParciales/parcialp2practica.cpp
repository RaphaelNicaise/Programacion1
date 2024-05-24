#include <iostream>
using namespace std;
int main(){
    // inicia desde la fila de forma descendente, y va variando la columna, en el momento que el valor de la columna llega
    // a la diagonal principal se recorre la columna de forma ascendente
    int n = 6;
    int matriz[n][n];
    int contador = 1;
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if(j == i){
                for(int k = 0; k < n; k++){
                    matriz[k][j] = contador;
                    contador++;
                }
            }
        }
    }
}