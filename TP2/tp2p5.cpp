/*Escribir un programa que cuando el usuario ingrese los catetos de un triángulo rectángulo, 
calcule y muestre en consola el valor de la hipotenusa. (Teorema de Pitágoras). */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double cat1,cat2,hipo;
    cout << "cateto 1: ";cin >> cat1;
    cout << "cateto 2: ";cin >> cat2;
    hipo = sqrt(pow(abs(cat1),2)+pow(abs(cat2),2));
    cout <<"Hipotenusa: "<< hipo;
    return 0;
}