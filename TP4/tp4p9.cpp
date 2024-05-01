/*Escribir un programa que al ingresar el lado de un cuadrado dibuje en consola un cuadrado 
con el carácter “*”. Por ejemplo, al ingresar lado = 4, el dibujo debe quedar de la siguiente 
manera.
 *  *  *  *
 *  *  *  *
 *  *  *  * 
 *  *  *  *
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ingrese medida del cuadrado de (*): ";cin >> n;
    for (int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << "  *  ";
        }
        cout << endl << endl;
    }
    
}