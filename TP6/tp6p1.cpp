/*Escribe una función que reciba dos números enteros y devuelva su suma.*/
#include <iostream>
using namespace std;

int sumar(int num1,int num2);

int main(){
    int num1,num2;
    cout << "Ingrese num1:";cin >> num1;
    cout << "Ingrese num2:";cin >> num2;
    cout << "Suma de "<<num1<<"+"<<num2<<": "<<sumar(num1,num2);
    return 0;
}

int sumar(int num1,int num2){
    int suma=num1+num2;
    return suma;
}


