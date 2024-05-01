/*Hacer un programa en C++, para ayudar a un trabajador a saber cuál será su sueldo 
semanal, se sabe que, si trabaja 40 horas o menos, se le pagará $1000 por hora, pero si 
trabaja más de 40 horas entonces las horas extras se le pagarán a $2000 por hora. */
#include <iostream>
using namespace std;

int main() {
    double pago_x_hora=1000,pago_x_hora_ex=2000,sueldo_sem;
    int horas_t,horas_ex;
    cout << "Ingresar horas trabajadas: ";cin >> horas_t;
    if (horas_t > 40) {
        horas_ex = horas_t - 40;
        sueldo_sem = ((horas_t-horas_ex)*1000+(horas_ex*2000));
        
    } else if (horas_t <= 40) {
        sueldo_sem = horas_t*1000;
    }
    cout<<"Sueldo semanal despues de trabajar "<<horas_t<<" horas: "<<sueldo_sem;
    return 0;
}