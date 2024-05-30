#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void menu() { // MOSTRAMOS MENU CON LAS OPCIONES
    cout << "1 - Cargar la matriz\n";
    cout << "2 - Mostrar valores de la matriz\n";
    cout << "3 - Buscar valor en la matriz \n";
    cout << "4 - Devolver maximo o minimo\n";
    cout << "5 - Ordenar valores de la matriz\n";
    cout << "6 - Salir del programa\n";  
    cout << "Seleccione una opcion: ";
}


void CargarMatriz(int matriz[3][3]) { // A cargar matriz le ingresamos la matriz vacia a cargar
    srand(time(NULL));
    int opcionCargar;
    do { // desplegamos el menu esperando que el usuario elija entre las dos opciobnes
        cout << "  1 - Cargar Matriz aleatoriamente de 1 a 100\n";
        cout << "  2 - Cargar Matriz de forma manual\n";
        cout << "  Seleccione una opcion para cargar matriz: ";cin >> opcionCargar;
 }   while (opcionCargar != 1 && opcionCargar != 2); // una vez que lo hace
    if (opcionCargar==1) { // la opcion 1 carga de manera random
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                matriz[i][j]=rand()%100+1;
            }
        }
        cout << "Carga de manera aleatoria completada\n";
    } else { // mientras que opcion 2 pide al usuario ingresar cada valor de la matriz
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                cout << "Ingrese valor a matriz["<<i<<"]["<<j<<"]:";cin>>matriz[i][j];
            }
        }
        cout << "Carga de manera manual completada\n";
    }
}
void mostrarMatriz(int matriz[3][3],bool matrizCargada) {  // Le ingresamos la matriz que queremos mostrar
    if (matrizCargada) {                                   // y por otro lado le pasamos el parametro booleano
        cout << "Mostrando matriz: \n";                    // para asegurarnos que la matriz esta cargada
        for (int i=0;i<3;i++){                             // si matriz cargada entra a la funcion como false,
            for (int j=0;j<3;j++){                         // y si no muestra el error
                cout << matriz[i][j] << " "; 
            }
            cout << endl;
        }
    } else {
        cout << "La matriz no se puede mostrar ya que no esta cargada\n";
    }
}
void buscarValor (int matriz[3][3],bool matrizCargada) { 
    bool encontrado = false;                            
    int numero,contador=0;
    if (matrizCargada) {
        cout << "Ingresar numero para buscarlo en la matriz: ";cin >> numero;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if (matriz[i][j]==numero){
                    encontrado = true;
                    cout << "El numero "<<numero<<" esta en el indice ["<<i<<"]["<<j<<"]\n";
                    contador++;
                }
            }
        }
        if (encontrado) {
            cout << "El numero "<<numero<<" aparace "<<contador<<" vez/veces en la matriz\n";
        } else {
            cout << "El numero "<<numero<<" no se encuentra en la matriz\n";
        }
    } else {
        cout << "No se puede buscar valor en la matriz ya que no esta cargada\n";
    }
}
void devolverMaximoMinimo (int matriz[3][3],bool matrizCargada) {
    int maximo,minimo,opcionDevolver;
    
    if (matrizCargada){
        do {
            cout << "  1 - Devolver valor maximo de la matriz\n";
            cout << "  2 - Devolver valor minimo de la matriz\n";
            cout << "Seleccione una opcion para devolver maximo/minimo: ";cin >> opcionDevolver;
        } while (opcionDevolver != 1 && opcionDevolver != 2);
        if (opcionDevolver==1){
            maximo = 0;
            for (int i=0;i<3;i++){
                for (int j=0;j<3;j++){
                    if (maximo < matriz[i][j]) maximo = matriz[i][j];
                }
            }
            cout << "El valor maximo es: "<<maximo<<endl;
            
        } else {
            minimo = 100;
            for (int i=0;i<3;i++){
                for (int j=0;j<3;j++){
                    if (minimo > matriz[i][j]) minimo = matriz[i][j];
                }
            }
            cout << "El valor minimo es: "<<minimo<<endl;
        }
    } else {
        cout << "No se puede definir el valor minimo/maximo ya que la matriz no esta cargada\n";
    }
}
void ordenarMatriz(int matriz[3][3],bool matrizCargada){
    int opcionOrdenar;
    if (matrizCargada){
        do {
            cout << "Ordenar matriz de forma: \n";
            cout << "  1 - Ascendente \n";
            cout << "  2 - Descendente\n";
            cout << "Seleccione una opcion para devolver maximo/minimo: ";cin >> opcionOrdenar;
        } while(opcionOrdenar != 1 && opcionOrdenar != 2);
        if (opcionOrdenar==1){
            // LOGICA PARA ORDENAR DE FORMA ASCENDENTE A LA MATRIZ
        } {
            // LOGICA PARA ORDENAR DE FORMA DESCENDENTE A LA MATRIZ
        }
    } else {
        cout << "La matriz no se puede ordenar de forma ascendente/descendente ya que la matriz no esta cargada\n";
    }
}
int main() {
    int opcion,matriz[3][3];
    bool matrizCargada=false;
    do {
        menu();
        cin >> opcion;
        switch (opcion) {
            case 1: 
                    CargarMatriz(matriz); // una vez que se cargue la matriz vacia o llena que le pasamos a la funcion
                    matrizCargada=true;   // se pone este valor en true, esto con el fin de poder despues validar que fue cargada
                    break;
            case 2:
                    mostrarMatriz(matriz,matrizCargada); // (matriz,verificacion de que la matriz fue cargada)
                    break;                                // DUDA SI PASARLE A CADA FUNCION EL BOOLEANO, O VERIFICAR ANTES
            case 3:
                    buscarValor(matriz,matrizCargada);  // ingresamos la matriz para buscar un valor en particular
                    break;                              // y el booleano para verificar si se puede realizar la accion
            case 4:
                    devolverMaximoMinimo(matriz,matrizCargada);
                    break;
            case 5: 
                    ordenarMatriz(matriz,matrizCargada);
                    break;
            case 6: 
                    cout << "Saliendo del programa";
                    break;
            default: 
                    cout << "El valor ingresado es incorrecto\n";
        }
    } while (opcion != 6);    
    return 0;
}



