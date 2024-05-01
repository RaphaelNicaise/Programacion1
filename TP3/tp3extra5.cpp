/*Escriba un programa que devuelva la fecha para realizar un viaje, esta fecha 
será obtenida de una forma caprichosa con datos propios del usuario. El programa deberá 
solicitar al usuario el nombre y la fecha de nacimiento (día, mes y año). Usando la función 
“length” propia de la librería “string”, obtendrá la cantidad de caracteres que conforman su 
nombre, si este valor es mayor que 12 entonces deberá sumar los dígitos de ese valor (ejemplo 
si es 13 el resultado será 4), este valor deberá guardarse en una variable llamada “mes_viaje”. 
Luego con la fecha de nacimiento deberá multiplicar el día y el mes y dividir el año por el 
valor anterior (año/(día*mes)), quedándose solo con la parte entera del resultado de la 
división, este resultado se guardará en una variable llamada “dia_viaje”, si es mayor que 31 
se guardará el valor 3. Por último, mostrar en consola que día el usuario se irá de viaje. 
Consideraciones: 
• Usar getline para obtener el nombre del usuario, ya que este puede ser compuesto 
(getline(cin, nombre)). 
• La función length() debe usarse de la siguiente forma: nombre.length(), donde 
nombre es una variable de tipo string. Ese sentencia se debe asignar a una variable de 
tipo entero. Por ejemplo: num_letras = nombre.length() */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string nombre;
    int dia, mes, anio, mes_viaje, dia_viaje;
    cout << "Ingrese su nombre: ";
    getline(cin, nombre); // Para ingresar un string con espacios
    cout << "Ingrese su fecha de nacimiento (dia mes anio): ";
    cin >> dia >> mes >> anio;
    mes_viaje = nombre.length();
    if (mes_viaje > 12) {
        mes_viaje = mes_viaje % 9;
    }
    dia_viaje = anio / (dia * mes);
    if (dia_viaje > 31) {
        dia_viaje = 3;
    }
    cout << "Usted se ira de viaje el dia " << dia_viaje << endl;
    return 0;
    
}
