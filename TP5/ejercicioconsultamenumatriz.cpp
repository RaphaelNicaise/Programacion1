#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    const int tamanio=6;
    int matriz[tamanio][tamanio];
    int opcion;
    // menu
    do {
        cout << "Ingrese la ocpion a realizar \n";
        cout << "1: Cargar Matriz\n";
        cout << "2: Mostrar matriz\n";
        cout << "3: Recorrer matriz\n";
        cout << "4: Salir\n";
        cin >> opcion;
        switch (opcion){
            case 1: 
                for (int i=0;i<tamanio;i++){
                    for (int j=0;j<tamanio;j++){
                        matriz[i][j]=i*10+j;
                    }
                }
                break;
            case 2:
                cout << "Mostrando \n";
                
            case 3:
                for (int col_in=(tamanio/2)-1;col_in>=0;col_in--){
                    //tramo 1
                    int tope_fila=0;
                    int tope_col=1;
                    for (int fila=0;fila<=tamanio-1-tope_fila;fila++){
                        cout<<matriz[fila][col_in]<<"\t";
                    }
                    
                    //tramo 2
                    for (int col=tope_col;col>-1;col--){
                        cout <<matriz[tamanio-1-tope_fila][col]<<"\t";
                    }
                    tope_fila++;
                    tope_col--;
                    cout << endl;
                    //tramo 3
                    for (int fila=0;fila<=col_in+(tamanio/2);fila++){
                        cout << matriz[fila][tamanio-col_in]<<"\t";
                    }
                    // tramo 4
                    for (int col=tamanio-col_in;col<=tamanio-1;col++){
                        cout << matriz[tamanio-col_in-1][col]<<"\t";
                    }
                    cout << endl;    
            }
            break;
    } 
    }while (opcion !=4);
    return 0;
}