/*Escribe un programa que solicite al usuario ingresar un número entero positivo. El 
programa debe calcular la raíz cuadrada de este número y quedarse con la parte entera 
del resultado. Luego, determina la cantidad de cifras que tiene el número ingresado. 
Finalmente, eleva la parte entera de la raíz cuadrada a la cantidad de cifras y muestra este 
resultado en pantalla. */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cifras,numero,raiz,resultado;
    cout<<"Ingrese numero positivo: ";cin>>numero; //89
    numero=abs(numero); //89
    raiz=trunc(sqrt(numero)); // trunc(9.4) -> 9
    cifras=trunc(log10(numero))+1; // 2
    resultado=pow(raiz,cifras); // 81

}