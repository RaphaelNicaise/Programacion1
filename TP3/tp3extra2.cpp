
/* Escriba un programa que solicite al usuario el valor de un ángulo en grados, y muestre en 
pantalla su valor en radianes. Si el valor ingresado es mayor que 360, el programa debe 
calcular cuantas vueltas dió (1 vuelta = 360°) y en qué cuadrante se encuentra dicho ángulo. 
Si es menor que 360° que calcule el seno, coseno y tangente de dicho ángulo. */

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    const double pi = 3.141592;
    int grados,vueltas;
    double radianes;
    cout<<"Ingresar grados: ";cin>>grados;
    radianes = ((grados*2*pi)/360);
    cout<<"Radianes: "<<radianes<<endl;
    
    if (grados > 360) {

        vueltas = grados/360;
        cout<<"Vueltas: "<<vueltas<<endl;
        grados = grados-(vueltas*360); // lo llevamos a escala 0-360 para definir el cuadrante
        
        if (grados >= 0 && grados <= 90) {
            cout<<"Cuadrante 1"<<endl;
        } else if (grados > 90 && grados <= 180) {
            cout<<"Cuadrante 2"<<endl;
        } else if (grados > 180 && grados <= 270) {
            cout<<"Cuadrante 3"<<endl;
        } else if (grados > 270 && grados <= 360) {
            cout<<"Cuadrante 4"<<endl;
        }
        
    } else if (grados<=360 && grados>0) {
        cout<<"Coseno: "<<cos(radianes)<<endl;
        cout<<"Seno: "<<sin(radianes)<<endl;
        cout<<"Tangente: "<<tan(radianes)<<endl;
    } else {
        cout<<"Grados no pueden ser 0";
    }  
    return 0;
}
