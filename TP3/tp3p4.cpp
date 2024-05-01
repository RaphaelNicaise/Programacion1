/*Hacer un programa en C++, para una tienda de zapatos que tiene una promoción de 
descuento para vender al mayor, esta dependerá del número de zapatos que se compren. 
Si son más de diez, se les dará un 10% de descuento sobre el total de la compra; si el 
número de zapatos es mayor de veinte, pero menor de treinta, se le otorga un 20% de 
descuento; y si son más treinta zapatos se otorgará un 40% de descuento. El precio de 
cada zapato es de $8000.*/
#include <iostream>
using namespace std;

int main() {
    int cant_z;
    cout << "Ingresar cantidad de zapatos: ";
    cin >> cant_z;
    double zapato = 8000,descuento,precio_total,p_sin_desc; 
    if (cant_z > 10) {
        descuento = 0.10;
    } else if (cant_z > 20 && cant_z < 30) {
        descuento = 0.20;
    } else if (cant_z >= 30) {
        descuento = 0.40;
    } else {
        descuento = 0;
    }
    p_sin_desc = (cant_z*zapato);
    precio_total = (p_sin_desc-((p_sin_desc)*descuento));
    cout << cant_z << " zapatos -> \n";
    cout << "Precio sin descuento: " << p_sin_desc << endl;
    cout << "Precio con descuento del "<< descuento*100 <<"% es:" << precio_total;
    return 0;
}