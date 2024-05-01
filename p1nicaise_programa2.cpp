/* Utilizando el concepto de la instrucción “Switch”. Realizar un programa que permita: 
1. Determinar a qué signo del zodiaco pertenece una persona, cuando se ingresa separadamente el 
“Día” y “Mes” de nacimiento de una persona. El resultado del signo al que pertenezca deberá ser 
mostrado en la salida del terminal. 
Recordar: Utilizar las bibliotecas acordes al caso, entradas/salidas acordes al caso, switch y declarar 
correctamente los tipos de datos. 
En consola del terminal tendrían que ver algo parecido a: */

#include <iostream>
#include <string>
using namespace std;
int main() {
    int dia,mes;
    string signo;
    cout << "ingrese dia de nacimiento: ";
    cin >> dia;
    cout << "ingrese mes de nacimiento entre el 1 y 12: ";
    cin >> mes;
    if (dia > 31 || dia < 1) {
        cout << "valor de dia incorrecto";
        return 0;
    }
    if (mes > 12 || mes < 1) {
        cout << "valor del mes incorrecto";
        return 0; 
    }
    switch (mes) { 
        case 1: (dia>=21) ? signo="Acuario" : signo="Capricornio";break;
        case 2: (dia>=20) ? signo="Piscis"  : signo="Acuario";break;
        case 3: (dia>=21) ? signo="Aries" : signo="Piscis";break;
        case 4: (dia>=20) ? signo="Tauro" : signo="Aries";break;
        case 5: (dia>=21) ? signo="Geminis" : signo="Tauro";break;
        case 6: (dia>=22) ? signo="Cancer" : signo="Geminis";break;
        case 7: (dia>=23) ? signo="Leo" : signo="Cancer";break;
        case 8: (dia>=24) ? signo="Virgo" : signo="Leo";break;
        case 9: (dia>=23) ? signo="Libra" : signo="Virgo";break;
        case 10: (dia>=23) ? signo="Escorpio" : signo="Libra";break;
        case 11: (dia>=23) ? signo="Sagitario" : signo="Escorpio";break;
        case 12: (dia>=22) ? signo="Capricornio" : signo="Sagitario";break;
    }
    cout << "Signo: " << signo;
    return 0;
}

