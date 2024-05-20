/*Escribe un programa que ingrese 10 números y los almacene en un arreglo, estos deben ser
{24, 5, 58, 100, 0, -8, 94, 96, -16, 105}. Luego, el programa debe pedirle al usuario que
ingrese un número para buscar en el arreglo. Si el número se encuentra en el arreglo, el
programa debe mostrar la posición en la que se encuentra. Si el número no está en el arreglo,
el programa debe mostrar un mensaje indicando que no se encontró*/
#include <iostream>
using namespace std;
int main() {
    int arreglo[10] = {24, 5, 58, 100, 0, -8, 94, 96, -16, 105},num,indice;
    bool encontrado = false;
    cout << "Ingrese un numero: ";cin >> num;
    for (int i=0;i<10;i++) {
        if (arreglo[i]==num) {
                encontrado = true;
                indice = i;
                break;
        }
    }
    if (encontrado) {
        cout << "El numero: "<<num<<" esta en el indice: "<<indice<<" Posicion: "<<indice+1;
    } else {
        cout << "El numero no se encuentra en el arreglo";
    }
    return 0;
}