/*Hacer un programa en C++, que lea tres números y diga cuál es el mayor. */
#include <iostream>
using namespace std;
int main() {
    int num1,num2,num3,mayor;
    cout <<"ingrese num1: ";cin >> num1;
    cout <<"ingrese num2: ";cin >> num2;
    cout <<"ingrese num3: ";cin >> num3;
    if (num1 > num2 && num1 > num3){
        mayor = num1;
    } else if (num2>num3){
        mayor=num2;
    } else {
        mayor=num3;
    }
    cout << "el numero mayor es: "<<mayor;
    return 0;
}