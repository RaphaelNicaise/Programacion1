/*Hacer un programa en C++, para determinar el promedio de tres notas y determinar si el 
estudiante aprobó o no.*/
#include <iostream>
using namespace std;
int main() {
    double n1,n2,n3,n_final;
    bool Aprobado;
    cout << "Ingrese nota 1:"; cin >> n1;
    cout << "Ingrese nota 2:"; cin >> n2;
    cout << "Ingrese nota 3:"; cin >> n3;
    n_final = (n1+n2+n3)/3;
    Aprobado = (n_final >= 7);
    (Aprobado) ? cout << "Aprobado" : cout << "Desaprobado";
    return 0;
}