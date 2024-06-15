/*Cargar un arreglo de 10 lugares con números aleatorios (usar el rango que quiera), ordenarlo
de manera ascendente eligiendo uno de los métodos de ordenación anteriores y realizar la
búsqueda de un número ingresado por el usuario, usando la búsqueda binaria.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int n=10,arreglo[n];
    for(int i=0;i<n;i++){
        arreglo[i]=rand()%10+1;
    }
    cout << "Arreglo sin ordenar: \n";
    for (int i = 0; i < n; i++){
        cout<< arreglo[i] << " ";
    }
    cout << endl; // metodo burbuja
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1;j++){
            if (arreglo[j]>arreglo[j+1]){
                swap(arreglo[j],arreglo[j+1]);
            }
        }
    }
    cout << "Arreglo ordenado: \n";
    for (int i = 0; i < n; i++){
        cout<< arreglo[i] << " ";
    }
    cout << endl;

    
    do {
        int primero=0,ultimo=n-1,mitad,numero_a_buscar;
        bool encontrado = false;
        cout << "Ingrese numero para comprobar si esta: ";cin >> numero_a_buscar;
        if (numero_a_buscar < 0) break;
        while (primero <= ultimo && !encontrado){
            mitad = (primero+ultimo)/2;
            if (numero_a_buscar == arreglo[mitad]){
                encontrado = true;
            } else if (numero_a_buscar < arreglo[mitad]){
                ultimo = mitad-1;
            } else if (numero_a_buscar > arreglo[mitad]){
                primero = mitad + 1;
            }
        }
    if (encontrado) cout << "El numero ingresado fue encontrado en la matriz\n";
    else cout << "El numero ingresado no fue encontrado en la matriz\n";
    } while (true);
    return 0;
}