/*Calcular el valor del coseno, seno y tangente de un ángulo (entero) en grados, ingresado 
por el usuario. Recuerde que las funciones “cos”, “sin” y “tan” trabajan con ángulos en 
radianes. */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.141592;
    double radianes,grados;
    cout << "Ingresa grados: ";cin >> grados;
    radianes = (grados*2*pi)/360;
    cout <<"coseno de: "<<grados<<" grados es: "<<cos(radianes)<<endl;
    cout <<"seno de: "<<grados<<" grados es: "<<sin(radianes)<<endl; 
    cout <<"tangente de: "<<grados<<" grados es: "<<tan(radianes)<<endl;  
    return 0;
}
