/*Escribe un programa que genere un arreglo de 8 elementos, llenándolo con números aleatorios
del 1 al 10. Luego, el programa debe encontrar y mostrar los valores mayor y menor del
arreglo. Además, contar y mostrar cuantas veces se repiten en el arreglo.  */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
 int arreglo[8],mayor=0,menor=10,cantMayor,cantMenor;
 srand(time(NULL));
 for (int i=0;i<8;i++) {
    arreglo[i] = rand() % 10 + 1;
    cout << arreglo[i] << ' ';
 }
 for (int i=0;i<8;i++) {
   if (arreglo[i]>mayor) mayor = arreglo[i];
   if (arreglo[i]<menor) menor = arreglo[i];
 }
 for (int i=0;i<8;i++){
   if (arreglo[i] == mayor)  cantMayor += 1;
   if (arreglo[i] == menor) cantMenor += 1;
 }
 cout<<endl<<"El numero mayor es: "<<mayor<<" y aparece "<<cantMayor<<" veces.";
 cout<<endl<<"El numero menor es: "<<menor<<" y aparece "<<cantMenor<<" veces.";
 return 0;   
}