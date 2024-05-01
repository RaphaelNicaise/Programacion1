/*Escribir un programa que pida al usuario un número y determine si es primo o no utilizando 
un bucle while. */

#include <iostream>
using namespace std;
int main() {
    int num, i=2; // 2 ya que, 1 divide a todos los numeros
    bool primo;
    cout << "Ingrese un numero: "; cin >> num;
    // i -> ej num=10 -> 2,3,4,5,6,7,8,9 (ni 1 ni el numero mismo)
    while (i<num) { // 5%1=0, 5%2=1, 5%3=2, 5%4=1, 5%5=0 5 es Primo 5/1 y 5/5 = 0
        if (num%i==0) {
            primo = false;
            break;
        } else {
            primo = true;
        }
        i++;
    }
    primo ? cout<<num<<" es Primo.":cout<<num<<" no es Primo.";
}
    