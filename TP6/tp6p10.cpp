/*
agregarLibro
buscarLibroPorAutor
mostrarLibros

*/

#include <iostream>
#include <string>
using namespace std;

struct Libro{
    string titulo;
    string autor;
    int lanzamiento;

};
//--------Prototipos-------
void agregarLibro(Libro arr[], int maximo, int &tope);
void cargar(Libro &libro);
void buscarLibroPorAutor(Libro arr[], int cant, string nombre);
void mostrarLibros(Libro arr[], int cant);

int main(){
    Libro lista[10];
    int cant_lleno=0;
    string nombre_buscado;
    agregarLibro(lista,10,cant_lleno);
    mostrarLibros(lista,cant_lleno);
    cout<<"Ingrese un autor para buscar en la biblioteca\n";
    cin>>nombre_buscado;
    buscarLibroPorAutor(lista, cant_lleno, nombre_buscado);
    return 0;
}
//---------Funciones------------
void agregarLibro(Libro arr[], int maximo, int &tope){
    bool salir=false;
    char opcion=' ';
    do{
        if (maximo>tope){
            Libro nuevo;
            cargar(nuevo);
            arr[tope]=nuevo;
            tope++;
        }
        else{
            cout<<"Lista llena"<<endl;
            salir=true;
        }
        do{
            cout<<"Quiere ingresar otro libro[s][n]"<<endl;
            cin>>opcion;
        }while(opcion!='s' && opcion!='n');
        if (opcion=='n'){
            salir=true;
        }
    }while(!salir);
}
void cargar(Libro &libro){
    cout<<"Ingrese titulo del libro\n";
    cin>>libro.titulo;
    cout<<"Ingrese autor\n";
    cin>>libro.autor;
    cout<<"Ingrese anio de lanzamiento\n";
    cin>>libro.lanzamiento;
}
void buscarLibroPorAutor(Libro arr[], int cant, string nombre){
    for(int i=0; i<cant; i++){
        if (nombre==arr[i].autor){
            cout<<arr[i].titulo;
        }
    }
}

void mostrarLibros(Libro arr[], int cant){
    for(int i=0; i<cant; i++){
        cout<<"Titulo: "<<arr[i].titulo<<endl;
        cout<<"Autor: "<<arr[i].autor<<endl;
        cout<<"Anio de lanzamiento: "<<arr[i].lanzamiento<<endl;
    }
}