/*Desarrolla un programa que genere dos arreglos de tamaño 5 y los llene con números
aleatorios entre 3 y 57. Luego, crea un tercer arreglo del mismo tamaño donde cada elemento
sea la suma de los elementos correspondientes de los dos primeros arreglos. */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    typedef int tArr[5];
    tArr Arreglo1,Arreglo2,Arreglo3;
    for (int i=0;i<5;i++) {
        Arreglo1[i] = rand() % 55 + 3;
        Arreglo2[i] = rand() % 55 + 3;
    }
    for (int i=0;i<5;i++) {
        Arreglo3[i]=Arreglo1[i]+Arreglo2[i];
    }
    for (int i=0;i<5;i++) {
        cout<<Arreglo1[i]<<' ';
    }
    cout << endl;
    for (int i=0;i<5;i++) {
        cout<<Arreglo2[i]<<' ';
    }
    cout << endl;
    for (int i=0;i<5;i++) {
        cout<<Arreglo3[i]<<' ';
    }
    cout << endl;
    return 0;
}