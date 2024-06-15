#include <iostream>
using namespace std;

bool determinarSiEsPrimo(int numero);

int main(){
    bool esPrimo;
    int numero;
    do {
        cout << "Ingrese un numero para determianr si es primo o no: ";
        cin >> numero;
    } while (numero <= 0);
    
    esPrimo = determinarSiEsPrimo(numero);
    if (esPrimo) {
        cout << "El numero "<<numero<<" es Primo"; 
    } else {
        cout << "El numero "<<numero<<" no es Primo";
    }
    return 0;
}
bool determinarSiEsPrimo(int numero){
    for (int i=2;i<numero;i++){
        if (numero % i == 0){
            return false;
        }
    }
    return true;
}