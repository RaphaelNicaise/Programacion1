#include <iostream>
#include <cmath>
using namespace std;

void areaRectangulo(int base, int altura,bool &errorArea){
    if (base < 0 || altura <0){
        errorArea = true;
    } else {
        int area = base * altura;
    }
}
int elevar(int base,int exponente,bool &errorPotencia){
    int potencia;
    if (base < 0 || exponente <0){
        errorPotencia = true;
    } else {
        potencia = pow(base,exponente);
    }
    return potencia;
}

bool errores (bool errorArea,bool errorPotencia){
    bool nohayerrores;
    if (errorArea) {
        cout << "Error en el programa area \n";
        nohayerrores=false;
    }
    if (errorPotencia) {
        cout << "Error en la funcion elevar\n";
        nohayerrores=false;
    }
    if (!errorArea && !errorPotencia){
        cout << "Las dos funciones no registraron un error";
        nohayerrores=true;
    }
    return nohayerrores;
}
int main(){
    bool errorArea=false,errorPotencia=false;
    areaRectangulo(-3,2,errorArea);
    elevar(3,4,errorPotencia);
    errores(errorArea,errorPotencia);
    return 0;
}