/*Escribir un programa que le pida al usuario ingresar una palabra de no más de 10 letras, luego
debe llenar un arreglo con las letras de la palabra desde atrás hacia delante y en caso de que
queden huecos en el arreglo debe llenarse con *. Luego mostrar en consola el contenido de
dicho arreglo.
Ejemplo: Si se ingresa la palabra trabajo, el arreglo debe quedar de la siguiente manera ojabart***.*/

#include <iostream>
#include <string> // libreria de strings
using namespace std;
int main() {
    string palabra;
    char arreglo[10];
    cout << "Ingrese una palabra de no mas de 10 letras: ";
    cin >> palabra;
    int i = 0;
    for (int i=0; i<palabra.length(); i++) {
        arreglo[i] = palabra[palabra.length()-i-1];
    }
    for (int i=palabra.length();i<10;i++) {
        arreglo[i] = '*';
    }
    for (int i=0;i<10;i++) {
        cout << arreglo[i];
    }
    cout << endl;
    return 0;
    
}
