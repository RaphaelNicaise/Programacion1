/*Hacer un programa en C++, que ayude a una empresa a incrementar los salarios de los 
trabajadores de la siguiente manera: 
Tipo de salario % 
◦ De 0 a $60000 20% 
◦ De $60000 a $100000 10% 
◦ De $100000 a $150000 5% 
◦ Más de $150000 3% */
#include <iostream>
using namespace std;
int main() {
    double aumento,salario_v,salario_n;
    cout << "Ingrese el salario del trabajador: ";
    cin >> salario_v;
    if (salario_v <= 60000) {
        aumento = 0.20;
    } else if (salario_v <= 100000) {
        aumento = 0.10;
    } else if (salario_v <= 150000) {
        aumento = 0.05;
    } else {
        aumento = 0.03;
    }
    salario_n= salario_v + (salario_v*aumento);
    cout<<"El salario pasa de "<<salario_v<<"$ a "<<salario_n<<"$";
    cout<<" gracias al aumento de un "<<aumento*100<<"%";
    return 0;
}