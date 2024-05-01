/*Escriba un programa que solicite al usuario dos números enteros entre 1 y 10, y muestre en 
pantalla el resultado de la división entre el primero y el segundo si ambos números son pares. 
Si alguno de los números es impar, el programa debe mostrar el resultado del número mayor 
elevado al menor. Si alguno de los números no está en el rango especificado debe mostrar un 
mensaje de error. 
Tener en cuenta que la división puede dar valores decimales.*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num1,num2,resultado;
    double division;
    cout << "Ingrese numero 1: ";cin>>num1;
    cout << "Ingrese numero 2: ";cin>>num2;
    if ((num1>=1 && num1<=10) && (num2>=1 && num2<=10)) {
        if ((num1%2==0)&&(num2%2==0)) {
            division = num1/num2;
            cout << "Division -> "<<num1<<"/"<<num2<<"= "<<division<<endl;
        } else if ((num1%2!=0)||(num2%2!=0)) {
            if (num1>num2) { // al ya estar validado que sea >= 1 y <= 10 no hace falta poner si es = 0
                resultado = pow(num1,num2);
                cout << num1 <<" elevado "<< num2<<": ";
            } else if (num1<num2) {
                resultado = pow(num2,num1);
                cout << num2 <<" elevado "<< num1<<": ";
            } else {
                resultado = pow(num1,num2); // son iguales
                cout << num1 <<" elevado "<< num2<<": ";
            }
            cout<<resultado;
        }
    } else {
        cout <<"El numero no esta en el rango entre 1 y 10";
    }
    return 0;
}