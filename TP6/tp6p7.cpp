/*Implementa una función que reciba una estructura "Persona" (con campos como nombre,
edad, etc.) por valor y la imprima en pantalla.*/

#include <iostream>
#include <string>
using namespace std;

struct Persona{
    string nombre;
    int edad;
    string direccion;
};

void imprimirPersona(Persona p){
    cout<<"Nombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;
    cout<<"Direccion: "<<p.direccion<<endl;
}

int main(){
    Persona p1;
    p1.nombre="Juan";
    p1.edad=20;
    p1.direccion="Av. Siempre Viva 123";
    imprimirPersona(p1);
    return 0;
}

