/*Implementa una función llamada "quitarVocales" que reciba una cadena de caracteres y
elimine todas las vocales de la palabra, manteniendo el resultado en la misma variable.
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void quitarVocales(string &palabra); 
char vocales[5] = {'a','e','i','o','u'};
int main(){
    string palabra;
    cin >> palabra;
    quitarVocales(palabra);
    cout << palabra;
}
void quitarVocales(string &palabra){
    for (int i=0;i < palabra.length();i++){
        for (int k=0;k<5;k++){
            if (tolower(palabra[i]) == vocales[k]){
                palabra[i] = ' ';
            }
        }
    }
}