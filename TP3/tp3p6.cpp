/*Hacer un programa en C++, para una tienda de helado da un descuento por compra a 
sus clientes con membresía dependiendo de su tipo, sólo existen tres tipos de 
membresía, tipo A, tipo B y tipo C. Los descuentos son los siguientes: 
◦ Tipo A 10% de descuento 
◦ Tipo B 15% de descuento 
◦ Tipo C 20% de descuento */
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main() {
    double descuento; 
    char memb;
    cout << "Ingrese Membresia (A/B/C): "; cin >> memb;
    memb = toupper(memb);
    if (memb=='A'){
        descuento = 0.10;
    } else if (memb=='B'){
        descuento = 0.15;
    } else if (memb=='C') {
        descuento = 0.20;
    } else {
        cout << "Caracter Incorrecto";
        return 0; // termina programa
    }
    cout<<"El descuento con la membresia "<<memb<<" es: "<<descuento*100 <<"%";
    return 0;
    
    
}