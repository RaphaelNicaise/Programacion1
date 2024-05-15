/* Desarrolla un programa completo de control para un invernadero que permita administrar 
distintas partes del mismo. 
Utiliza un bucle para mostrar continuamente el menú y permitir al 
usuario seleccionar una opción. Utiliza la estructura switch para ejecutar 
la acción correspondiente según la opción seleccionada. 
Las opciones que deben figurar en el menú son:
* Controlar la temperatura: El usuario podrá ajustar la temperatura del invernadero 
dentro de un rango deseado (entre 17.9° y 24.5°).
* Controlar la iluminación: El usuario podrá regular la intensidad de la iluminación en el 
invernadero (desde 0 hasta 100 pasando solo por números enteros).
* Controlar el riego: El usuario modifica el estado de los riegos de encendido a apagado o al reves.
* Salir del programa: El usuario podrá finalizar el programa y salir.
Observaciones: Se debe modificar una variable de control en cada caso.*/

#include <iostream>
using namespace std;
int main() {
    int opcion,iluminacion,opcionc3;
    double temperatura;
    bool riego=false;
    do {
        cout<<"1 - Controlar temperatura\n";
        cout<<"2 - Controlar iluminacion\n";
        cout<<"3 - Controlar el riego\n";
        cout<<"4 - Salir del programa\n";
        cout << "Ingrese una opcion: ";cin >> opcion;
        switch (opcion) {
            case 1: {
                do {
                    cout<<"Ingresar temperatura entre 17.9 y 24.5: ";cin>>temperatura;
                } while (temperatura < 17.5 || temperatura > 24.5);
                cout << "Temperatura colocada a "<<temperatura<<" grados.\n";
                break;
            }
            case 2: {
                do {
                    cout<<"Ingresar iluminacion entre 0 y 100: ";cin>>iluminacion;
                } while (iluminacion<0 || iluminacion > 100);
                cout << "Iluminacion colocada a "<<iluminacion<<"% de intensidad.\n";
                break;
            }
            case 3: {
                (riego) ? cout << "El riego esta prendido\n":cout<<"El riego esta apagado\n";
                
                do {
                    cout << "Si deseas cambiar el estado del riego presiona 1, Sino 0: ";cin >> opcionc3;
                } while (opcionc3!=1 && opcionc3!=0);
                if (opcionc3==1) {
                    riego = !riego;
                    (riego) ? cout << "Ahora el riego esta prendido\n":cout<<"Ahora riego esta apagado\n";
                }
                break;
            }
            case 4: {
                cout << "Termina el programa";
                break;
            }
            default: {
                cout << "Opcion incorrecta \n";
            }
        }
    } while(opcion!=4);
    return 0;
}
               