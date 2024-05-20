/*Escribe un programa que genere un arreglo de 8 elementos, llenándolo con números aleatorios
del 1 al 10. Luego, el programa debe encontrar y mostrar los valores mayor y menor del
arreglo. Además, contar y mostrar cuantas veces se repiten en el arreglo.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
 int arreglo[8],mayor,menor,cantMayor,cantMenor;
 srand(time(NULL));
 for (int i=0;i<8;i++) {
    arreglo[i] = rand() % 10 + 1;
 }
 for (int i=0;i<8;i++) {
    cout << arreglo[i] << endl;
 }
 return 0;   
}