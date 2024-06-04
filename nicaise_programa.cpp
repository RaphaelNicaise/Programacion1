#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void menu();
void CargarMatriz(int matriz[3][3]);
void mostrarMatriz(int matriz[3][3],bool matrizCargada);
void buscarValor (int matriz[3][3],bool matrizCargada);
void devolverMaximoMinimo (int matriz[3][3],bool matrizCargada);
void ordenarMatriz(int matriz[3][3],bool matrizCargada);

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
                    devolverMaximoMinimo(matriz,matrizCargada); // input matriz y bool si esta cargado
                    break;
            case 5: 
                    ordenarMatriz(matriz,matrizCargada); // input matriz y bool para chequear si esta cargado
                    break;
            case 6: 
                    cout << "Saliendo del programa :c"; // mensaje de terminacion de programa
                    break;
            default: 
                    cout << "El valor ingresado es incorrecto\n";
        }
    } while (opcion != 6);    
    return 0;
}

void menu() { // Mostramos menu con las opciones que el usuario puede elegir, cada opcion llama a una funcion
    cout << "1 - Cargar la matriz\n";
    cout << "2 - Mostrar valores de la matriz\n"; 
    cout << "3 - Buscar valor en la matriz \n"; // accede a un menu interno para buscar un valor en la matriz
    cout << "4 - Devolver maximo o minimo\n"; // accede a un menu para devolver el maximo o minimo de la matriz
    cout << "5 - Ordenar valores de la matriz\n"; // accede a un menu para ordenar la matriz desc o
    cout << "6 - Salir del programa\n";  
    cout << "Seleccione una opcion: ";
}
void CargarMatriz(int matriz[3][3]) { // A cargar matriz le ingresamos la matriz vacia a cargar
    srand(time(NULL));
    int opcionCargar;
    do { //  menu interno para que el usuario elija de que manera cargar la matriz
        cout << "  1 - Cargar Matriz aleatoriamente de 1 a 100\n";
        cout << "  2 - Cargar Matriz de forma manual\n";
        cout << "  Seleccione una opcion para cargar matriz: ";cin >> opcionCargar;
 }   while (opcionCargar != 1 && opcionCargar != 2); // una vez que lo hace
    if (opcionCargar==1) { // la opcion 1 carga de manera random
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                matriz[i][j]=rand()%100+1; // Valores random del 1 al 100
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
    if (matrizCargada) { // verificamos si matriz esta cargada
        cout << "Ingresar numero para buscarlo en la matriz: ";cin >> numero;
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                if (matriz[i][j]==numero){
                    encontrado = true;
                    cout << "El numero "<<numero<<" esta en el indice ["<<i<<"]["<<j<<"]\n";
                    contador++;
                    // Buscamos el valor y si esta hacemos el cout, encontrado=true y sumamos el contador
                    // El contador esta puesto para saber cuantas veces aparece el numero en la matriz
                }
            }
        }
        if (encontrado) {
            if (contador==1) cout << "El numero "<<numero<<" aparece una vez en la matriz\n";
            else cout << "El numero "<<numero<<" aparece "<<contador<<" veces en la matriz\n";
            // si aparece una vez, un mensaje, y si aparece mas de una vez, otro mensaje
        } else {
            cout << "El numero "<<numero<<" no se encuentra en la matriz\n";
        }
    } else {
        cout << "No se puede buscar valor en la matriz ya que no esta cargada\n"; // En caso que matriz no esta cargada
    }
}
void devolverMaximoMinimo (int matriz[3][3],bool matrizCargada) {
    int maximo,minimo,opcionDevolver;
    
    if (matrizCargada){ //Chequeo si la matriz esta cargada
        do { // menu interno
            cout << "  1 - Devolver valor maximo de la matriz\n";
            cout << "  2 - Devolver valor minimo de la matriz\n";
            cout << "Seleccione una opcion para devolver maximo/minimo: ";cin >> opcionDevolver;
        } while (opcionDevolver != 1 && opcionDevolver != 2);
        if (opcionDevolver==1){
            maximo = 0; // maximo arranca desde 0  
            for (int i=0;i<3;i++){
                for (int j=0;j<3;j++){
                    if (maximo < matriz[i][j]) maximo = matriz[i][j];
                    // por cada iteracion, cada numero que cumpla la condicion de maximo <matriz[i][j] va a ir actualizando maximo
                }
            }
            cout << "El valor maximo es: "<<maximo<<endl;
            
        } else {
            minimo = 100; // minimo arranca desde 0
            for (int i=0;i<3;i++){
                for (int j=0;j<3;j++){
                    if (minimo > matriz[i][j]) minimo = matriz[i][j];
                    // por cada valor que cumpla la condicion, la variable minimo se actualiza por matriz[i][j]
                }
            }
            cout << "El valor minimo es: "<<minimo<<endl;
        }
    } else {
        cout << "No se puede definir el valor minimo/maximo ya que la matriz no esta cargada\n";
    }
}
void ordenarMatriz(int matriz[3][3],bool matrizCargada) {
    int opcionOrdenar;
    if (matrizCargada){
        do { // menu interno para elegir orden descendente o ascendente
            cout << "Ordenar matriz de forma: \n";
            cout << "  1 - Ascendente \n";
            cout << "  2 - Descendente\n";
            cout << "Seleccione una opcion para devolver matriz ordenada: ";cin >> opcionOrdenar;
        } while(opcionOrdenar != 1 && opcionOrdenar != 2);
        int arr[9]; // arr vacio en donde metemos la matriz para ordenar mas facilmente
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                arr[i*3+j]=matriz[i][j]; // pasamos la matriz al array
            }
        }
        cout << "Arreglo sin ordenar: ";
        for (int i=0;i<9;i++){
            cout << arr[i] << " ";      // mostramos array sin ordenar
        }
        cout << endl;
        // voy a usar ordenacion por intercambio
        if (opcionOrdenar==1) {
            // LOGICA PARA ORDENAR DE FORMA ASCENDENTE A LA MATRIZ
            int tmp,pos;
            
            for (int i=1;i<9;i++) {
                pos = i;
                while ((pos > 0)&&(arr[pos-1]>arr[pos])){ // > ordena de menor a mayor al array
                    tmp = arr[pos];
                    arr[pos] = arr[pos-1];
                    arr[pos-1] = tmp;
                    pos--;
                }
            }
            
        } else {
            // LOGICA PARA ORDENAR DE FORMA DESCENDENTE A LA MATRIZ
            int tmp,pos;
            
            for (int i=1;i<9;i++) {
                pos = i;
                while ((pos>0)&&(arr[pos-1]<arr[pos])){ //  < ordena de mayor a menor al array
                    tmp = arr[pos];
                    arr[pos] = arr[pos-1];
                    arr[pos-1] = tmp;
                    pos--;
                }
            }
        }
        cout << "Arreglo ordenado: ";
        for (int i=0;i<9;i++){  
            cout << arr[i] << " "; // mostramos el array ordenado
        }
        cout << endl;
        
        for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matriz[i][j]=arr[i*3+j]; // pasamos el array ordenado, devuelta a la matriz
            }
        }
    } else {
        cout << "La matriz no se puede ordenar de forma ascendente/descendente ya que la matriz no esta cargada\n";
    }
}









