#include <iostream>
using namespace std;

int main() {
    const int tamanio = 6;
    int matriz[tamanio][tamanio];

    // a) Declarar la matriz 6x6 y cargarla con valores ingresados por el usuario
    
    for (int i = 0; i < tamanio; ++i) {
        for (int j = 0; j < tamanio; ++j) {
            matriz[i][j]=(i+1)*10+(j+1); 
        }
    }

    // b) Mostrar la matriz en forma matricial
    cout << "La matriz es:" << endl;
    for (int i = 0; i < tamanio; ++i) {
        for (int j = 0; j < tamanio; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Recorrido matriz\n";
    for (int fila=tamanio-1;fila>=0;fila--) {
        // tramo 1 fila fija,recorre columna de manera descendente hasta diagonal principal
        for (int i=tamanio-1;i+1>=tamanio-fila;i--) {
        /*              5;5>=5-2 t;4                    
                        4;4>=5-2 t;3
                        3;3>=5-2 t;2
                        2;2>=5-2 f;--    
        */
            cout << matriz[fila][i] << " ";
        }
        // tramo 2 recorre fila, columna fija, de manera descendente de fila-1 porque ya imprimimos todos
        // elemenots de la fila, entonces automaticamente ya subimos 1, esto hasta >=0 que es la fila1.
        for (int i=fila-1;i>=0;i-- ){
            cout<<matriz[i][tamanio-fila-1] << " ";
        }
        cout << endl;
        
    }

    return 0;
}
