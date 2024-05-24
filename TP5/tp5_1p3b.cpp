#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
                arr[i][j]=i+j+j;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
                cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
    for (int i=0;i<n;i++){
        // si indice de fila es par reccorer de izquierda a derecha, sino de derecha a izquierda
        if(i%2==0){
            for (int j=0;j<n;j++){
                cout << arr[i][j] << ' ';
            }
        } else {
            for (int j=n-1;j>=0;j--){
                cout << arr[i][j] << ' ';
            }
        }
        cout << endl;
    }
return 0;
}
