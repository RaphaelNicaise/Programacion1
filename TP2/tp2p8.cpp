/*Crea un programa que pida al usuario ingresar las coordenadas (x, y) de dos puntos en un 
plano cartesiano, y luego calcule e imprima en pantalla la distancia entre los dos puntos.*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double distancia,x1,x2,y1,y2;
    cout<<"Ingrese x coordenada del punto 1:";cin>>x1; 
    cout<<"Ingrese y coordenada del punto 1:";cin>>y1;
    cout<<"Ingrese x coordenada del punto 2:";cin>>x2;
    cout<<"Ingrese y coordenada del punto 2:";cin>>y2;
    distancia =sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    cout<<"Distancia entre los dos puntos: "<<distancia;
    return 0;
}