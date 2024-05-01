/*Escribir un programa que devuelva la cantidad de cifras que tiene un número ingresado 
por el usuario. Sabiendo que truncando (usando la función “trunc”) el resultado del 
logaritmo en base 10 tenemos un valor que es la cantidad de cifras del número menos 1. */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero,cifras;
    cout<<"Ingrese numero para saber sus cifras: ";cin>>numero;
    cifras=trunc(log10(numero))+1;
    cout<<cifras;
    return 0;
}