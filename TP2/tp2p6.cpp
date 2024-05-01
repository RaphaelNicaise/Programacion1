/*Escribir un programa que al ingresar las notas de los 3 parciales del curso, devuelva el 
valor del promedio, el valor del promedio redondeado (“round”) y el valor del promedio 
truncado (“trunc”). */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double promedio,nota1,nota2,nota3,notas;
    cout << "nota 1:"; cin >> nota1;    
    cout << "nota 2:"; cin >> nota2;
    cout << "nota 3:"; cin >> nota3;
    notas = nota1+nota2+nota3;
    promedio = notas/3;
    cout<<"promedio trunc: "<<trunc(promedio)<<endl;
    cout<<"promedio round: "<<round(promedio)<<endl;
    return 0;
}