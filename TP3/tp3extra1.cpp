/* Escriba un programa que solicite al usuario dos números enteros y los intercambie si el 
primero es mayor que el segundo. Luego, muestre en pantalla los valores de ambos números.*/
#include <iostream>
using namespace std;
int main() {
    int num1,num2,auxiliar;
    cout << "Ingrese numero 1: ";cin >> num1;
    cout << "Ingrese numero 2: ";cin >> num2;
    if (num1 > num2) {
        cout << "El numero "<<num1<<" es mayor que el numero "<<num2; 
    } else if (num1 < num2) {
        auxiliar = num2;
        num2 = num1;
        num1 = auxiliar;
        cout << "El numero "<<num1<<" es mayor que el numero "<<num2;
        
    } else {
        cout << "Los numeros son iguales";
    }
    return 0;
}

