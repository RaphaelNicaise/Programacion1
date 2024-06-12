/*Crea un programa que gestione una lista de libros. Cada libro debe tener los siguientes
atributos: título, autor y año de publicación. El programa debe tener las siguientes funciones:
• agregarLibro: Esta función recibe por parámetro los datos de un libro (título, autor y
año de publicación) y agrega un nuevo libro a la lista de libros.
• buscarLibroPorAutor: Esta función recibe por parámetro el nombre de un autor y busca
todos los libros de la lista que coincidan con ese autor. Devuelve una lista de libros que
cumplen con la condición.
• mostrarLibros: Esta función muestra en pantalla todos los libros de la lista, uno por
línea.
Utiliza una estructura llamada Libro para representar los datos de cada libro*/
#include <iostream>
#include <string>
using namespace std;

void mostrarLibros(Libro lista[]);
void agregarLibro(string titulo,string autor,int anio,Libro &lista[]);
void buscarLibroPorAutor();
void menu();
struct Libro {
    string titulo;
    string autor;
    int anio_publicacion;
};
int librosAgregados = 0;

int main(){
    int tam=5,opcion,anio;
    string titulo,autor;
    Libro libros[tam];
    do {
        menu();
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Ingresa titulo: ";
            cin >> titulo;
            cout << "Ingrese Autor: ";
            cin >> autor;
            cout << "Ingrese anio de Publicacion: ";
            cin >> anio;
            agregarLibro(titulo,autor,anio,libros);
            break;
        case 2:
            break;
        case 3:
            
            break;
        case 4:
            cout << "Saliendo del programa";
            break;
        default:
            break;
        }
    } while (opcion != 4);
    
    return 0;
}

void mostrarLibros(Libro lista[]){
    for (int i=0;i<=librosAgregados;i++){
        cout << "Titulo: "<<lista[i].titulo<<" Autor: "<<lista[i].autor<<" Publicacion: "<<lista[i].anio_publicacion;
        cout << endl;
    }
}
void agregarLibro(string titulo,string autor,int anio,Libro lista[]){
    lista[librosAgregados].titulo = titulo;
    lista[librosAgregados].autor = autor;
    lista[librosAgregados].anio_publicacion = anio;
    librosAgregados++;
}
void buscarLibroPorAutor(){

}

void menu(){
    cout << "1. Agregar Libro\n";
    cout << "2. BuscarLibroPorAutor\n";
    cout << "3. Mostrar Libros\n";
    cout << "4. Salir\n";
}