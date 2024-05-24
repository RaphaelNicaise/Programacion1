#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int n=6;
    int arr[n][n];
    srand(time(NULL));
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            arr[i][j]=rand()%10;
        }
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int j=0;j<(j/n);j++){ // inicio 1 varia columna de forma ascendente hasta la mitad
        for (int i=n-1;i>=(n/2)-j;i--){ // tramo 1 recorre filas de forma descendente hasta la mitad de la matriz  
            cout << arr[i][j] << ' ';
        }
        for (int i=j;i>-1;i--){
            cout << arr[(n/2)-1-j][i] << ' ';
        }
        cout << endl;   
    }
    for (int j=(n/2);j<n;j++){
        for (int i=0;n+(n/2)-j-1;i++) {
            cout << arr[i][j] << ' ';
        }
        for (int i=j;i<n;i++){
            cout << arr[n+(n/2)-1-j][i] << ' ';
        }
        cout << endl;

    }

    return 0;
}