/*Matriz y búsqueda.
a) Escribir un programa que complete una matriz de 10x10 con números aleatorios entre el
1 y el 100. Luego en un arreglo debe guardar el resultado de sumar cada una de las filas,
por lo tanto, va a tener 10 lugares. Mostrar el contenido del arreglo.
b) Debe permitir que el usuario ingrese un número y realizar la búsqueda de este en la matriz.
Si lo encuentra debe mostrar un mensaje que indique que lo encontró y la posición donde
está ubicado en la matriz. Si no lo encuentra que muestre un mensaje de que la búsqueda
finalizo sin éxito. Esto debe repetirse hasta que el usuario ingrese de alguna forma que
no quiere realizar más búsquedas.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int mtx[10][10],arr[10],suma_fila=0,num,i_num,j_num;
    bool encontrado=false;
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            mtx[i][j]=rand()%100+1;
        }
    }
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            suma_fila += mtx[i][j];
        }
        arr[i]=suma_fila;
        suma_fila=0;
    }
    cout<<"Matriz 10x10 con elementos random\n";
    for (int i=0;i<10;i++){
        for (int j=0;j<10;j++){
            cout << mtx[i][j] << ' ';
        }
        cout << endl;
    }
    cout<<"Array con la suma de cada fila de la matriz 10x10\n";
    for (int i=0;i<10;i++){
        cout<<arr[i]<<' ';
    }
    cout << endl;
    do {
        cout << "Ingrese numero (0 para salir): ";cin >> num;
        if (num == 0) {
            cout << "Cierra programa";
            break;
        }
        while (true) {
            for (int i=0;i<10;i++){
                for (int j=0;j<10;j++){
                    if (mtx[i][j]==num) {
                        encontrado=true;
                        i_num=i+1;
                        j_num=j+1;
                        break;
                    }
                    if (encontrado) break;
                }
                if(encontrado) break;
            }
            if(encontrado) break;
        }
        if(encontrado) {
            cout << "El numero "<<num<<" se encontro en la fila "<<i_num<<" columna "<<j_num;
            break;
        }
    } while (true);
    
    return 0;
}