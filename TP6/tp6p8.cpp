/*Escribe una función llamada "intercambiar" que reciba dos variables de tipo string y las
intercambie entre sí.*/

#include <iostream>
#include <string>
using namespace std;

void intercambiar(string &str1,string &str2);

int main(){
    string str1,str2;
    cout << "Ingrese string 1: ";cin >> str1;
    cout << "Ingrese string 2: ";cin >> str2;
    intercambiar(str1,str2);
    cout << "String 1 ahora es "<< str1 << endl;
    cout << "String 2 ahora es "<< str2 << endl;
}
void intercambiar(string &str1,string &str2){
    string tmp = str1;
    str1 = str2;
    str2 = tmp;
}
