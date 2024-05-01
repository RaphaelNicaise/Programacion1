/* Escriba un programa que solicite al usuario un número entero, y muestre en pantalla si es par 
o impar. Si es par mostrar en consola la cantidad de cifras que tiene el número ingresado y si 
es impar mostrar en consola la primera cifra del número ingresado. */
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num,cifras;
    cout<<"Ingresar un numero entero: ";cin>>num;
    if (num%2==0) {
        cout<<"El numero es Par \n";
        cifras = (trunc(log10(num))+1);
        cout<<"Cifras de "<<num<<" -> "<<cifras;
    } else {
        cout<<"El numero es Impar \n";
        // si es impar mostrar en consola la primera cifra del número ingresado. 
        cout<<"Primera cifra de "<<num<<" -> "<<trunc(num/pow(10,(trunc(log10(num))))); 
        // trunc(num/pow(10,(trunc(log10(num))))) num/10 elevado a cantidad de cifras, todo truncado
    }
    return 0;
}