/*
a) Implementar un programa que genere 10 (diez) números aleatorios del tipo entero. Cada valor 
generado será almacenado en cada posición del arreglo.
La función que permite generar valores aleatorios es:
rand () % 10;
* Indicar que valores genera la función rand( ) % 10.
b) En el arreglo completo, realizar el algoritmo de búsqueda que permita buscar el número
" 8" en el arreglo. Si lo encuentra, deberá devolver "encontrado" en consola. 
Realizarlo utilizando una variable del tipo booleana, para que una vez que lo encuentre, 
no vuelva a entrar al bucle. A su vez, para su resolución pueden atilizar condicionales. 
Si no encuentra ningún valor, no es necesario hacer código.
c) En el arreglo completo, realizar el algoritmo de búsqueda, que permita buscar "todos" 
los números de valor iguales a " 8" en el arreglo. Si lo encuentra, deberá contar cuantos 
encontró en el arreglo y deberán mostrar la cantidad total de encontrados en consola.
Pueden utilizar condicionales. Si no encuentra ningún valor, no es necesario hacer código.
Finalmente, hacer la traza para los 4 primeros valores del arreglo
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int arreglo[10],numRandom,cantidad=0;
    bool encontrado=false;
    for (int i=0;i<10;i++){
        numRandom = rand()%10;
        arreglo[i]=numRandom;
        cout << numRandom <<", ";
    }
    cout << endl;
    
        for (int i=0;i<10;i++){
            if (arreglo[i]==8){
                cout <<"Encontrado\n";
                encontrado=true;
            }
            if (encontrado) break;
        }
        if (encontrado){
            for (int i=0;i<10;i++){
                if (arreglo[i]==8 ) cantidad++;
            }
            cout << "Cantidad de veces que aparece el: "<<cantidad;
        }
        return 0;
}