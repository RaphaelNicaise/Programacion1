/* Escribir un programa que calcule el factorial de un número utilizando un bucle for. */

#include <iostream>
using namespace std;
int main() {
    // !5 factorial de 5 es hacer 5*4*3*2*1
    int num,m;
    cout << "Ingrese numero para calcular su factorial: ";cin >> num;
    m=num; // m va a ir guardando la multiplicacion de 
    cout << num;
    for (int i=num-1;i>0;i--) {
        cout <<"x"<<i;
        m = m*i; 
    }
    cout << endl << m;
}