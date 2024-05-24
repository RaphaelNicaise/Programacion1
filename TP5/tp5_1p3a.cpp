#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n][n];
    for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                arr[i][j]=i+j+2;
                cout << arr[i][j] << ' ';
            }
            cout << endl;
        }
    cout << "Recorrido que por cada columna, muestra toda la fila, columnas de derecha a izquierda \n";
    for(int j=n-1;j>0;j--){
        for(int i=0;i<n;i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}