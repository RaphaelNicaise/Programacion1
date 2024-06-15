/*Desarrolla un programa completo de control para un invernadero que permita administrar
distintas partes de este. Creando una función para cada caso.
• Controlar la temperatura: El usuario podrá ajustar la temperatura del invernadero
dentro de un rango deseado (entre 17.9° y 24.5°).
• Controlar la iluminación: El usuario podrá regular la intensidad de la iluminación en el
invernadero (desde 0 hasta 100 pasando solo por números enteros).
• Controlar el riego: El usuario modifica el estado de los riegos de encendido a apagado
o al revés.
• Salir del programa: El usuario podrá finalizar el programa y salir.*/

#include <iostream>
using namespace std;

void controlarTemperatura(float &temperatura);
void controlarIluminacion(int &iluminacion);
void controlarRiego(bool &riego);
void panelControl(float temperatura,int iluminacion,bool riego);
void menu();
int main(){
    float temperatura=22.3;
    int iluminacion=50;
    bool riego=false;
    int op;
    do {
        menu();
        cout << "Ingrese una opcion: ";cin >> op;
        switch (op){
            case 1: controlarTemperatura(temperatura); break;
            case 2: controlarIluminacion(iluminacion); break;
            case 3: controlarRiego(riego); break;
            case 4: panelControl(temperatura,iluminacion,riego); break;
            case 5: cout << "Saliendo del programa"; break;
            default: cout << "Error al elegir opcion";
        }
    } while (op != 5);
    
}
void menu(){
    cout << "1. Controlar temperatura \n";
    cout << "2. Controlar iluminacion \n";
    cout << "3. Controlar el Riego\n";
    cout << "4. Panel de Control\n";
    cout << "5. Salir del programa\n";
}

void controlarTemperatura(float &temperatura){
    do {
        cout << "Ajustar temperatura del invernadero: ";cin >> temperatura;
        if (temperatura < 17.9 || temperatura > 24.5){
            cout << "Temperatura fuera de rango\n";
        }
    } while (temperatura < 17.9 || temperatura > 24.5);
    cout << "Temperatura ajustada a: " << temperatura <<" grados"<< endl;
}
void controlarIluminacion(int &iluminacion){
    do {
        cout << "Ajustar temperatura del invernadero: ";cin >> iluminacion;
        if (iluminacion < 0 || iluminacion > 100){
            cout << "Temperatura fuera de rango\n";
        }
    } while (iluminacion < 0 || iluminacion > 100);
    cout << "Iluminacion cambiada a "<<iluminacion<< endl;
}
void controlarRiego(bool &riego){
    riego = !riego;
    if (riego) cout << "El riego ahora esta prendido \n";
    else cout << "El riego ahora esta apagado \n";
}

void panelControl(float temperatura,int iluminacion,bool riego){
    cout << "Temperatura: "<< temperatura << endl;
    cout << "Iluminacion: "<< iluminacion << endl;
    if (riego) cout << "Riego: Prendido \n";
    else cout << "Riego: Apagado \n";
}