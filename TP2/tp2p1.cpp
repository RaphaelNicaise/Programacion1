/*Escribir un programa que calcule la raíz cuadrada de un número ingresado por el usuario. 
Tener en cuenta que no puede ser un número negativo, por lo tanto, solucionar ese 
problema usando alguna función de <cmath>. */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double numero,resultado;
    cout << "Ingrese numero: ";cin >> numero;
    numero = abs(numero);
    resultado = sqrt(numero);
    cout << "Raiz cuadrada de "<<numero<<" es "<<resultado;
    return 0;
}