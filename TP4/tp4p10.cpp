/*Misma consigna que el ejercicio anterior pero ahora dejando los espacios del medio sin llenar. 
Por ejemplo, al ingresar lado = 4, el dibujo debe quedar de la siguiente manera. 

*  *  *  *
*        *
*  *  *  *

*/

#include <iostream>
using namespace std;
int main()  {
    int n;
    cout << "Ingrese medida del cuadrado de (*): ";cin >> n;
    for (int i=1;i<=n;i++) { // i fila
        for(int j=1;j<=n;j++) { // j columna
           (i==1 || j==1 || i==n || j==n ) ? cout<<" * ": cout<<"   ";   
        }
        cout << endl << endl;
    }
    return 0;
}