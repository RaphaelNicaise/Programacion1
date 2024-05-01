/* Hacer un programa en C++, que diga si un número es par o impar. */
#include <iostream>
using namespace std;
int main() {
    int num;
    cout <<"ingresar numero: ";cin >> num;
    if (num % 2 == 0){
        cout << num << " es par.";
    } else {
        cout << num << " es impar.";
    }
    return 0;    
    
}