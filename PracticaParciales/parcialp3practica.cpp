/*Escribir un programa que cuente números en intervalos de diez:
a) Primero, el usuario deberá introducir un número entero mayor que 0 y menor que 100. Si esto no sucede, se le 
deberá indicar al usuario que "introduzca un número mayor que 0 y menor que 100". Hasta que no se ingrese un valor 
correcto entre esos rangos de valores, el programa no continuará. Mostrar el valor en terminal.
Lo que veriamos en consola, por ejemplo, cuando introduce "0":
Introduzca un numero mayor que 0 y menor que 100: 0
b) Suponiendo qe el usuario introdujo un número entero mayor que 0 y menor que 100 de manera correcta:
* Escribir la parte del código que permite incrementar el indice del bucle de diez en diez hasta el valor 
máximo en cuestión que es 100. Mostrar el valor del índice en terminal.
Lo que veríamos en consola:u
0, 10, 20, 30
, 40, 50, 60, 70, 80, 90, 100
* Utilizando el concepto de arreglos, implementar un arreglo llamado "arreglo" de tipo entero. Entonces, 
cada valor de sumar los números en saltos de diez en diez, deberá ser almacenado en cada posición del arreglo. 
Mostrar valores en terminal.
Lo que veríamos en consola:
30, 60, 100, 150, 210, 280, 360, 450, 550
6) Enterminal de salida, se debera mostar ef resutado final de la suma de todos los valores
y del contador.
Lo que veriamos en consola:
Esta es la suma: 550
El numero total del contador saltando en diez posiciones hasta 100 es: 10
d) Escribir el código completo con bibliotecas y todo lo necesario para que funcione.

Observaciones:
* Declarar y utilizar solo valores de tipo enteros.
Implementar un contador.
: Implemeniaricio dederán utilizar el concepto de buele, no es necesario utiliza
condicionales. En cada inciso se debe expresar solo la parte de código correspondiente a lo que se pide, excepto en el último donde debe figurar todo lo necesario para que el código sea funcional.
*/

#include <iostream>
using namespace std;
int main(){
    /* PUNTO A
    int num;
    while(true){
        cout<<"Ingresar numero mayor que 0 y menor que 100: ";
        cin >> num;
        if (num>0&&num<100){
            cout << num << endl;
            break;
        }
    }
    /* PUNTO B-1
    for (int i=0;i<=100;i+=10) {
        cout<<i<<", ";
    }
    */
   /*PUNTO B-2 S1
   int suma=0;
   int arreglo[11];
   for (int i=0;i<=10;i++) {
        suma += i*10;
        arreglo[i]=suma;
    }
    for (int i=0;i<=10;i++){
        cout << arreglo[i] << ", ";
    }
   */
  /* PUNTO B-2 S2 La que pide el parcial
   int suma=0,arreglo[11],contador=0;

   for (int i=0;i<=100;i+=10) {
        suma += i;
        arreglo[contador]=suma;
        contador++;
    }
    for (int i=0;i<=10;i++){
        cout << arreglo[i] << ", ";
    }
   */
    /* PUNTO C
    cout << "Esta es la suma: "<<suma<<endl;
    cout << "El numero total del contador saltando en diez posiciones hasta 100 es: "<<contador;
    */
    int num,suma=0,arreglo[11],contador=0;
    while(true){
            cout<<"Ingresar numero mayor que 0 y menor que 100: ";
            cin >> num;
            if (num>0&&num<100){
                cout << num << endl;
                break;
            }
        }
    for (int i=0;i<=100;i+=10) {
        cout<<i<<", " ;
    }
    cout << endl;
    for (int i=0;i<=100;i+=10) {
        suma += i;
        arreglo[contador]=suma;
        contador++;
    }
    for (int i=0;i<=10;i++){
        cout << arreglo[i] << ", ";
    }
    cout<<endl<<"Esta es la suma: "<<suma<<endl;
    cout<<"El numero total del contador saltando en diez posiciones hasta 100 es: "<<contador;
    return 0;
}