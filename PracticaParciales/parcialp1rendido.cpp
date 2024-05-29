#include <iostream>
using namespace std;
int main() {
    const int n=6;
    int matriz[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            matriz[i][j]=i*10+j;
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for (int col_inicio=0;col_inicio<n/2;col_inicio++) { // INICIO 1
        for (int i=0;i<n;i++){ // TRAMO 1
            cout << matriz[i][col_inicio] << " ";
        }
        cout << endl;
    }
    for (int fila_inicio=n/2-1;fila_inicio>=0;fila_inicio--) { // INICIO 2
        for (int j=n-1;j >=0;j--){ // TRAMO 1
            cout << matriz[fila_inicio][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
