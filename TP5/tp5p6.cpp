/*Escribe un programa que genere un arreglo de 8 lugares y lo llene con números aleatorios.
Luego, crea otro arreglo del mismo tamaño y llena este segundo arreglo con los valores del
primero, pero en orden inverso. Finalmente, muestra ambos arreglos en pantalla. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    typedef int tArr[8];
    tArr Arreglo1,Arreglo2;
    for (int i=0;i<8;i++){
        Arreglo1[i]=rand() % 10 + 1;
    }
    int c = 7;
    for (int i=0;i<8;i++){
        Arreglo2[i]=Arreglo1[c];
        c--;
    }
    for (int i=0;i<8;i++){
        cout << Arreglo1[i] << ' ';
    }
    cout << endl;
    for (int i=0;i<8;i++){
        cout << Arreglo2[i] << ' ';
    }
    return 0;
}