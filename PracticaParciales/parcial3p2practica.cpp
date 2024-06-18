    #include <iostream>
    using namespace std;

    void OrdenarPorInsercionDescendente(int arr[],int n){
        
        for (int i=0;i<n;i++){
            int pos,aux;
            pos = i;
            aux = arr[i];
            while ((pos > 0)  && (arr[pos - 1]<aux)){
                arr[pos]=arr[pos-1];
                pos--;
            }
            arr[pos]=aux; 
        }
    }
    void mostrarArreglo(int arr[],int n){
        for (int i=0;i<n;i++){
            cout << arr[i] << ", ";
        }
        cout << endl;
    }
    int main() {
        int n=7;
        int arreglo[n]={5,53,900,54,306,2,99};
        mostrarArreglo(arreglo,n);
        OrdenarPorInsercionDescendente(arreglo,n);
        mostrarArreglo(arreglo,n);
    };
