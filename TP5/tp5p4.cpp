/*Desarrolla un programa que permita al usuario ingresar 5 valores para cada uno de dos
arreglos. Luego, debe crear un tercer arreglo que contenga la unión de los dos anteriores
ingresados por el usuario y lo muestre en consola.
*/
#include <iostream>
using namespace std;
int main(){
    int arreglo1[5];
    int arreglo2[5];
    int arreglo3[10];
    for (int i=0;i<5;i++){
        cout << "Ingrese numero para Arreglo 1: ";cin >> arreglo1[i];
    }
    for (int i=0;i<5;i++) {
        cout << arreglo1[i] << ' ';
    }
    cout << endl;
    for (int i=0;i<5;i++){
        cout << "Ingrese numero para Arreglo 2: ";cin >> arreglo2[i];
    }
    for (int i=0;i<5;i++) {
        cout << arreglo2[i] << ' ';
    }
    cout << endl;
    for (int i=0;i<10;i++){
        if (i<5){
            arreglo3[i] = arreglo1[i];
        } else {
            arreglo3[i] = arreglo2[i-5];
        }                
    }
    cout << "Arreglo 3: ";
    for (int i=0;i<10;i++) {
        cout << arreglo3[i] << ' ';
    }
    return 0;
}

