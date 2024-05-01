/*Escribir un programa que realice la conversión de grados a radianes. Dato: pi=180° */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.141592;
    double grados,radianes;
    cout << "grados: ";cin >> grados;
    radianes = (grados*2*pi)/360;
    cout << radianes;
    return 0;
}