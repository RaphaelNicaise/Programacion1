/* Estructuras y manejo de arreglos.
a) Crea una estructura "Estudiante" con los campos "nombre", "edad" y "notas" (este
campo debe almacenar la nota de los 3 parciales). Crea un arreglo de estructuras de
tamaño 3 y permite que el usuario ingrese los datos de los estudiantes.
b) Mostrar la nota más alta de cada estudiante de forma clara.
c) Calcular y mostrar el promedio de cada alumno y el promedio general del curso.
d) Modificar la nota del tercer parcial del segundo estudiante. Si tiene una nota menor que
60, se le debe sumar el 25%, si la nota está entre 60 y 80 se le debe sumar el 5% y si es
mayor que 80 debe restar el 3%. */

#include <iostream>
#include <string>
using namespace std;

struct Estudiante { // estructura global para todos los estudiantes
    string nombre;
    int edad;
    float notas[3];
};
void llenarDatos(Estudiante arr[],int tam);
void mostrarLista(Estudiante arr[],int tam);
float notaMasAlta(float arr[],int cant);
float promedio(float arr[],int cant);
float promedioGeneral(Estudiante arr[],int tam);
void modificarNota(float &nota);

int main(){
    const int tam=3;
    Estudiante Lista[tam];
    llenarDatos(Lista,tam);
    mostrarLista(Lista,tam);
    for (int i=0;i<tam;i++){
        cout << "La nota mas alta de alumno "<<i+1<<" es:"<<notaMasAlta(Lista[i].notas,3)<<endl;
    }
    cout << "El promedio general es: "<<promedioGeneral(Lista,tam)<<endl;
    modificarNota(Lista[1].notas[2]);
    mostrarLista(Lista,tam);
}

void llenarDatos(Estudiante arr[],int tam){
    
    for (int i=0;i<tam;i++){
        cout << "Ingrese nombre alumno "<<i+1<<": ";
        cin >> arr[i].nombre;
        cout << "Ingrese edad alumno "<<i+1<<": ";
        cin >> arr[i].edad;
        for (int n=0;n<3;n++){
            cout << "Ingrese nota "<<n+1<<" del alumno "<<i+1<<":";
            cin >> arr[i].notas[n];
        }
    }    
}
void mostrarLista(Estudiante arr[],int tam){
    
    for (int i=0;i<tam;i++) {
        cout << "-----------Alumno "<<i+1<<"-----------"<<endl;
        cout << "Nombre: " << arr[i].nombre << endl;
        cout << "Edad: " << arr[i].edad << endl;
        for (int n=0;n<3;n++){
            cout << "Nota parcial "<<n+1<<": "<<arr[i].notas[n]<<endl;
        }
    }
}

float notaMasAlta(float arr[],int cant) {
    float mayor =arr[0];
    for (int i=1;i<cant;i++){
        if (arr[i]>mayor){
            mayor=arr[i];
        }
    }
    return mayor;
}
float promedio(float arr[],int cant){
    float sumaNotas=0;
    for (int i=0;i<cant;i++){
        sumaNotas += arr[i];
    }
    return sumaNotas/cant;
}

float promedioGeneral(Estudiante arr[],int tam){
    float suma=0;
    for (int i=0;i<tam;i++){
        suma+=promedio(arr[i].notas,3);
    }
    return suma/tam;
}
/* Modificar la nota del tercer parcial del segundo estudiante. Si tiene una nota menor que
60, se le debe sumar el 25%, si la nota está entre 60 y 80 se le debe sumar el 5% y si es
mayor que 80 debe restar el 3%. */
void modificarNota(float &nota){
    if (nota<80 && nota > 60 ){
        nota = nota + nota*0.05;
    } else if (nota <= 60){
        nota = nota + nota*0.25;
    } else {
        nota = nota - nota*0.03;
    }    
}