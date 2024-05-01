/*Escribir un programa que solicite al usuario ingresar un número entero positivo y luego 
imprima en la consola una matriz cuadrada con la diagonal principal compuesta por números 
en forma ascendente hasta ese valor y los demás elementos de la matriz iguales a cero. Por 
ejemplo, si el usuario ingresa el número 6, la matriz resultante debe ser la siguiente: 
1 0 0 0 0 0
0 2 0 0 0 0
0 0 3 0 0 0
0 0 0 4 0 0
0 0 0 0 5 0
0 0 0 0 0 6
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese numero:";cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++) {
            (i==j) ? cout<<j:cout<<0;           
        }
        cout << endl;
    }
}