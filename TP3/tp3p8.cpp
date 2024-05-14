/*Hacer un programa en C++, que solicite al usuario que ingrese una fecha y calcule el 
día correspondiente del año. Ejemplo, si se ingresa la fecha 31 12, el número que se 
visualizará será 365. (la fecha se debe ingresar en dos variables diferentes: dia y mes). */
#include <iostream>
using namespace std;
int main() {
    int dia, mes;
    cout << "Ingrese el dia: ";cin >> dia;
    cout << "Ingrese el mes: ";cin >> mes;
    int dias_t = 0;
    // switch para sumar los dias de los meses anteriores al ingresado ya que el mes ingresado no se suma
    switch (mes) {
        case 12: dias_t += 30; 
        case 11: dias_t += 31;
        case 10: dias_t += 30;
        case 9: dias_t += 31;
        case 8: dias_t += 31;
        case 7: dias_t += 30;
        case 6: dias_t += 31;
        case 5: dias_t += 30;
        case 4: dias_t += 31;
        case 3: dias_t += 28;
        case 2: dias_t += 31; // sin ingresas mes 3, se suman los dias de enero y febrero, mas los dias ingresados
        case 1: dias_t += dia;
            break;
        default:
            cout << "Mes invalido" << endl;
            return 1;
    }
    cout << "El dia " << dia << " del mes " << mes << " es el dia " << dias_t << " del año" << endl;
    return 0;
}