/*Escribir un programa que pida al usuario una palabra y muestre sus letras una por una 
utilizando un bucle while. 
Ayuda: usar la función length(), propia de la librería string para saber la cantidad de caracteres 
de la palabra. Además, saber que si: 
string palabra = “ejercicio”; 
cout « palabra[3];   
cout « palabra[8]  
//Muestra la letra r porque la primera letra ocupa el lugar 0 
//Muestra la letra o porque la última letra es palabra.length() – 1  */

#include <iostream>
#include <string>
using namespace std;
int main() {
    string palabra;
    int i=0;
    cout << "Ingresar palabra:";cin >> palabra;
    while(i<palabra.length()-1){
        cout << palabra[i] << endl;
        i++;
    }
    return 0;
}