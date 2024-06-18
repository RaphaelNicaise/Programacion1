#include <iostream>
#include <string>
using namespace std;
struct Estudiante {
    string nombre;
    int edad;
    int notas[3];
    bool aprobado;          
};
void menu();
int ingresarCantEstudiantes();
void mostrarLista(Estudiante listaEstudiante[],int cant);
void cargarEstudiante(Estudiante estudiante[],int &cantIngresados);
float porcentajeDeAprobados(Estudiante listaEstudiante[],int cant);
int main(){
    int cantEstudiantes=ingresarCantEstudiantes();
    int cantEstudiantesIngresados=0;    
    Estudiante estudiantes[cantEstudiantes];
    cargarEstudiante(estudiantes,cantEstudiantesIngresados);
    cargarEstudiante(estudiantes,cantEstudiantesIngresados);
    mostrarLista(estudiantes,cantEstudiantesIngresados);
    cout << "Porcentaje de aprobados: " << porcentajeDeAprobados(estudiantes,cantEstudiantesIngresados)<<"%"<<endl;
}   
void menu(){
    cout << "1. Ingresar cantidad de estudiantes\n";
    cout << "2. Mostrar lista de estudiantes\n";
    cout << "3. Mostrar porcentaje de aprobados\n";
    cout << "4. Salir del programa\n";
}
void cargarEstudiante(Estudiante estudiante[],int &cantIngresados){
    cout << "Ingresar nombre: "; cin >> estudiante[cantIngresados].nombre;
    cout << "Ingresar edad: "; cin >> estudiante[cantIngresados].edad;
    for (int j=0;j<3;j++){
        do {
            cout << "Ingresar nota "<< j+1 << ": "; cin >> estudiante[cantIngresados].notas[j];
        } while (estudiante[cantIngresados].notas[j] < 1);
    }
    int sumatoria = 0;
    for (int j=0;j<3;j++){
        sumatoria += estudiante[cantIngresados].notas[j];
    }
    float promedio = float(sumatoria)/3.0;
    (promedio >= 6) ? estudiante[cantIngresados].aprobado=true : estudiante[cantIngresados].aprobado = false;
    cantIngresados++;
}
int ingresarCantEstudiantes(){
    int cantidad;
    do {
        cout << "Ingresar cantidad de estudiantes: ";
        cin >> cantidad;
    } while (cantidad <= 0);
    return cantidad;
}
void mostrarLista(Estudiante listaEstudiante[],int cant){
    for (int i=0;i<cant;i++){
        cout << "\nEstudiante "<<i+1 <<": "<< listaEstudiante[i].nombre <<endl;
        cout << "Edad: "<< listaEstudiante[i].edad << endl;
        cout << "Notas: \n";
        for (int j=0;j<3;j++){
            cout << "   Nota "<<j+1<<": " <<listaEstudiante[i].notas[j] << endl;
            
        }
        if (listaEstudiante[i].aprobado) {
            cout << "Aprobado";
        } else {
            cout << "Desaprobado";
        }
        cout << endl;
    }
}

float porcentajeDeAprobados(Estudiante listaEstudiante[],int cant){
    float porcentaje;
    int cantAprobados=0;
    for (int i=0;i<cant;i++){
        if (listaEstudiante[i].aprobado) { cantAprobados++; }
    }
    porcentaje = (float(cantAprobados)/float(cant))*100;

    return porcentaje;
}