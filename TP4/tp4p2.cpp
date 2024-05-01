/*Escribir un programa que pida al usuario un número y muestre su tabla de multiplicar 
utilizando un bucle for. */

#include <iostream>

using namespace std;
int main() {
    int num;
    cout << "Ingrese un numero: ";cin >> num;
    cout << "Tabla del "<<num<<endl;
    for(int i=1;i<=10;i=i+1){
        cout <<num<<"x"<<i<<"= "<<num*i<<endl;
    }
    return 0;
}