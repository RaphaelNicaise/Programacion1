/*Crea un juego de adivinanzas numéricas. El programa debe tener las siguientes funciones:
generarNumeroAleatorio: Esta función genera y devuelve un número aleatorio dentro de
un rango especificado 1 a 1000.
validarEntrada: Esta función recibe un número ingresado por el usuario y verifica si es
válido (por ejemplo, si es un número dentro del rango establecido).
comprobarAdivinanza: Esta función recibe el número ingresado por el usuario y el número
objetivo a adivinar, y devuelve un mensaje indicando si el usuario adivinó el número o si es
mayor o menor que el objetivo.
El programa principal debe utilizar estas funciones para permitir que el usuario intente adivinar
el número objetivo. El juego debe proporcionar pistas al usuario indicando si el número ingresado
es mayor o menor que el número objetivo, hasta que el usuario adivine el número correcto*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarNumeroAleatorio();
bool validarEntrada(int num_ingresado,bool& valido);
bool comprobarAdivinanza(int numero_ingresado,int numero_a_adivinar,bool& adivinado);

int main(){
    int numero_a_adivinar = generarNumeroAleatorio(),numero_elegido;
    bool adivinado=false,valido=false;
    do {    
        cout << "Digite un numero del 1 al 1000: ";
        cin >> numero_elegido;
        validarEntrada(numero_elegido,valido);
        if (valido){
            comprobarAdivinanza(numero_elegido,numero_a_adivinar,adivinado);
            if (adivinado) {
                cout << "Adivinaste el numero "<<numero_a_adivinar;
            } else {
                if (numero_a_adivinar > numero_elegido) cout << "El numero secreto es mayor a "<<numero_elegido<<endl;
                else cout << "El numero secreto es menor a "<<numero_elegido<<endl;
            }
        } else {
            cout << "El numero elegido no es valido (Rango de 1 a 1000)\n";
        }
    } while (adivinado==false);
    return 0;
}

int generarNumeroAleatorio(){
    srand(time(NULL));
    int numero_random = rand() % 1000 + 1;
    return numero_random;
}

bool validarEntrada (int num_ingresado,bool& valido){
    if ((num_ingresado <= 1000) && (num_ingresado>=1)){
        valido=true;
    } else {
        valido=false;
    }
    return valido;
}
bool comprobarAdivinanza(int numero_ingresado,int numero_a_adivinar,bool& adivinado){
    if (numero_ingresado==numero_a_adivinar){
        adivinado=true;
    }
    return adivinado;
}