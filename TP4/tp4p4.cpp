/*Escribir un programa que pida al usuario un número y muestre sus divisores utilizando un 
bucle for.*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingresar numero para mostrar sus divisores: ";cin >> n;
    cout << "Divisores de: "<< n << endl;
    for (int i = n; i>0; i--) {
        if (n%i==0) {
            cout << i <<endl;
        }
    }
    return 0;

}