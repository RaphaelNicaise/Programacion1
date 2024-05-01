/* Escribir un programa que calcule la suma de los primeros n números naturales utilizando un 
bucle while. */

#include <iostream>
using namespace std;
int main() {
    int n,i=1,suma=0;
        cout << "Ingrese un numero natural: ";cin >> n;
        while(i<=n) {
            suma = suma + i;
            i++;
        }    
        cout << suma;
        return 0;
}
// ej -> n=5 por cada iteracion sumamos i a suma;
// i= 0 , 1 , 2 , 3, 4, 5 -> i termina siendo 15