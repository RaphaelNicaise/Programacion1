/*Escribe un programa que le pida al usuario que ingrese 10 números y los almacene en un
arreglo. Luego, el programa debe calcular la suma de todos los elementos del arreglo y
mostrar el resultado. */

#include <iostream>
using namespace std;
int main() {
    int arreglo[10];
    int suma=0;
    for (int i=0;i<10;i++) {
        cout << "Ingrese numero entero: ";
        cin >> arreglo[i];
    }
    for (int i=0;i<10;i++) {
        suma += arreglo[i];
    }
    for (int i=0;i<10;i++) {
        cout << arreglo[i] << ' ';
    }
    cout << "\nSuma de elementos: "<<suma;
    return 0;
}