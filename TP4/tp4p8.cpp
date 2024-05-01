/*Escribir un programa que calcule la media de una cantidad de números introducidos por 
teclado do-while. */

#include <iostream>
using namespace std;
int main() {
    int num,i=-1,suma=0;
    float promedio;
    do {
        cout<< "Ingrese numero (0 para terminar): ";cin >> num;
        suma = suma+num;
        i++;
    } while (num!=0);
    cout << "Cantidad de numeros agregados: "<<i<<endl; 
    promedio = suma/i;
    cout << "Promedio: " << promedio;
    return 0;
}