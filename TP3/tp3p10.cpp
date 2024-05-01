/*Mediante programación C++, crea una calculadora haciendo uso de la estructura de 
control condicional Switch (sumar, restar, multiplicar y dividir).*/
#include <iostream>
// #include <cmath>
// #include <string>
using namespace std;
int main() {
    double resultado,num1,num2; 
    char opcion;
    cout << "Ingrese una opcion (+,-,*,/):";cin >> opcion; 
    cout << "Ingrese numero 1: ";cin >> num1;
    cout << "Ingrese numero 2: ";cin >> num2;
    switch (opcion)
    {
    case '+':
        resultado = num1+num2;
        cout<<"La suma entre "<<num1<<" y "<<num2<<" es: "<<resultado<<endl;
        break;
    case '-':
        resultado = num1-num2;
        cout<<"La resta de: "<<num2<< " a "<<num1<<" es de: "<<resultado;
        break;
    case '*':
        resultado = num1*num2;
        cout << "La multiplicacion entre "<<num1<<" y "<<num2<<" es: "<<resultado<<endl;
        break;
    case '/':
        if (num2 != 0) {
            resultado=num1/num2;
            cout << "La division entre "<<num1<<" y "<<num2<<" es: "<<resultado<<endl;
        } else {
            cout << "No se puede dividir por 0 \n";
        }
        break;    
    default:
        cout << "No ingresaste ninguna operacion valida.";
        break;
    }
}