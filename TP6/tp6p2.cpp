/* Implementa una función que reciba un arreglo de enteros y calcule la suma de todos sus
elementos.*/
#include <iostream>
using namespace std;

int sumaArreglo (int arreglo[],int n){
    int suma=0;
    for (int i = 0; i < n; i++) {
        suma+=arreglo[i];
    }
    return suma;
}

int main() {
    int n=4,arr[n]={4,2,3,1};
    cout << "Suma de elementos del array: "<<sumaArreglo(arr,n);
    return 0;
}