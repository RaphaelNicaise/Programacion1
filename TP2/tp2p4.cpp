/*Escribir un programa que calcule el perímetro y el área de un círculo, dependiendo del 
radio que ingrese el usuario. */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   const double pi = 3.141592;
   double radio,area,perimetro;
   cout << "Ingrese radio: ";cin >> radio;
   area = pi*pow(abs(radio),2);
   perimetro = 2*pi*abs(radio);
   cout << "Area:" <<area;
   cout << "Perimetro"<<perimetro;
   return 0;
}