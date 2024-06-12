/*Escribe una función que tome un arreglo de enteros y lo ordene de mayor a menor.
• Inserción.
• Inserción con intercambios.
• Selección directa.
• Burbujeo.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void opciones();
void mostrarArreglo(int arr[],int n);
void OrdInsercion(int arr[],int n);
void OrdInsercionIntercambios(int arr[],int n);
void OrdSeleccionDirecta(int arr[],int n);
void OrdBurbuja(int arr[],int n);


int main(){
    srand(time(NULL));
    int n=15, arr[n],opcion;
    for (int i=0;i<n;i++){
        arr[i]=rand()%10;
        
    }
        mostrarArreglo(arr,n);
        opciones();cin>>opcion;
        switch(opcion){
            case 1: 
                OrdInsercion(arr,n);
                break;
            case 2: 
                OrdInsercionIntercambios(arr,n);
                break;
            case 3: 
                OrdSeleccionDirecta(arr,n);
                break;
            case 4: 
                OrdBurbuja(arr,n);
                break;
            default: cout << "Error";     
        }
        mostrarArreglo(arr,n);
    
}
void opciones(){
    cout << "Tipo de ordenamiento:\n";
    cout << "1 - Insercion\n";
    cout << "2 - Insercion con Intercambios\n";
    cout << "3 - Seleccion Directa\n";
    cout << "4 - Burbuja\n";
    cout << "5 - Salir\n";
    cout << "Seleccionar: ";
}
void mostrarArreglo(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void OrdInsercion(int arr[],int n){
    int pos,aux;
    for (int i=0;i<n;i++) {
        pos=i;
        aux= arr[i];  
        while ((pos>0) && (arr[pos-1]< aux)) {
            arr[pos] = arr[pos - 1]; 
            pos--;
        }
        arr[pos] = aux;       
    }
}
void OrdInsercionIntercambios(int arr[],int n){
    int tmp,pos;
    for (int i=1;i<n;i++) {
        pos = i;
        while ((pos > 0)&&(arr[pos-1]<arr[pos])){ 
            tmp = arr[pos];
            arr[pos] = arr[pos-1];
            arr[pos-1] = tmp;
            pos--;
        }
    }
}
void OrdSeleccionDirecta(int arr[],int n){
    int x,menor;
    for (int i = 0; i < n-1; ++i){
        menor = arr[i];
        x = i;
        for (int j = i; j < n; ++j){
            if (arr[j] > menor){
                menor = arr[j];
                x = j;
            }
        }
        arr[x] = arr[i];
        arr[i] = menor;
    }
}
void OrdBurbuja(int arr[],int n){
    int temp;
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            if (arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}