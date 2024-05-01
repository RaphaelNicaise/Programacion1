/*Utilizando solo el concepto de “condicional” y los conceptos vistos previamente a lo largo de la materia de 
Programación 1. Realizar un programa que permita: 
1. Determinar a qué signo del zodiaco pertenece una persona, cuando se ingresa separadamente el 
“Día” y “Mes” de nacimiento de una persona. Automáticamente, el resultado del signo al que 
pertenezca deberá ser mostrado como salida en la terminal de VScode. 
2. Una vez mostrado en terminal el signo del zodiaco, deberán preguntarle al usuario “Si le gusta 
festejar su cumpleaños”, siendo como únicas respuestas permitidas: “Si” o “No” (tengan en cuenta 
las minúsculas y mayúsculas). Automáticamente, como contestación a esta respuesta, se deberá 
mostrar en la terminal de VScode, lo siguiente: 
• Si le gusta festejar su cumpleaños entonces contestarle con un “Que Bueno!” 
• No le gusta festejar su cumpleaños entonces contestarle con un “Que Lastima.” 
• Si ingresa valores erróneos, mostrar un error, que indique que vuelva a intentar ingresando 
los valores correctos. Observación: Si hay error, se muestra el error, pero el programa 
continua con el paso siguiente. 
3. Finalmente, deberán preguntarle al usuario “el número de invitados a su cumpleaños”, el usuario 
deberá contestar con un “número” del tipo float el cual será almacenado en una variable llamada 
“invitados”. Mediante el uso de las funciones correctas, el valor ingresado deberá ser elevado a la 
potencia 4, luego calcularle la raíz cuadrada y redondearlo. Dando como resultado el “total de 
invitados” a su cumpleaños, dicho valor deberá ser mostrado como salida en la terminal de VScode.  
total_invitados = round (√  𝒊𝒏𝒗𝒊𝒕𝒂𝒅𝒐𝒔  𝟒
 ) 
Recordar: Utilizar las bibliotecas acordes al caso, entradas/salidas acordes al caso, condicionales y declarar 
correctamente los tipos de datos. 
A continuación, les dejo la información de utilidad: 
• 21/01 a 19/02 Acuario       (dia>=21 && mes==1) || (dia<=19 && mes ==2)
• 20/02 a 20/03 Piscis        (dia>=20 && mes==2) || (dia<=20 && mes==3)
• 21/03 a 19/04 Aries         (dia>=21 && mes==3) || (dia<=19 && mes==4)
• 20/04 a 20/05 Tauro         (dia>=20 && mes==4) || (dia<=20 && mes==5)  
• 21/05 a 21/06 Géminis       (dia>=21 && mes==5) || (dia<=21 && mes==6)
• 22/06 a 22/07 Cáncer        (dia>=22 && mes==6) || (dia<=22 && mes==7)
• 23/07 a 23/08 Leo           (dia>=23 && mes==7) || (dia<=23 && mes==8)
• 24/08 a 22/09 Virgo         (dia>=24 && mes==8) || (dia<=22 && mes==9)
• 23/09 a 22/10 Libra         (dia>=23 && mes==9) || (dia<=22 && mes==10)
• 23/10 a 22/11 Escorpio      (dia>=23 && mes==10) || (dia<=22 && mes==11)
• 23/11 a 21/12 Sagitario     (dia>=23 && mes==11) || (dia<=21 && mes==12)
• 22/12 a 20/01 Capricornio   (dia>=22 && mes==12) || (dia<=20 && mes==1)
*/ 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    int dia,mes;
    double invitados,t_invitados;
    string signo,opcion;

    cout << "ingrese dia de nacimiento: ";
    cin >> dia;
    cout << "ingrese mes de nacimiento entre el 1 y 12: ";
    cin >> mes;
    // aca validar q los datos son correctos, si alguno de los 2 no es, return 0
    if (dia > 31 || dia < 1) {
        cout << "valor de dia incorrecto";
        return 0; // sirv para terminar la funcion main y no seguir con el programa
    }
    if (mes > 12 || mes < 1) {
        cout << "valor del mes incorrecto";
        return 0; 
    }
    /* podria haber hecho la seleccion del signo con el switch case pero siento que 
       visualmente se entiende mucho mas asi
    */ 
    if ((dia>=21 && mes==1) || (dia<=19 && mes ==2)) {
        signo="Acuario";
    } else if ((dia>=20 && mes==2) || (dia<=20 && mes==3)) {
        signo="Piscis";
    } else if ((dia>=21 && mes==3) || (dia<=19 && mes==4)) {
        signo="Aries";
    } else if ((dia>=20 && mes==4) || (dia<=20 && mes==5)) {
        signo="Tauro";
    } else if ((dia>=21 && mes==5) || (dia<=21 && mes==6)) {
        signo="Geminis";
    } else if ((dia>=22 && mes==6) || (dia<=22 && mes==7)) {
        signo="Cancer";
    } else if ((dia>=23 && mes==7) || (dia<=23 && mes== 8)) {
        signo="Leo";
    } else if ((dia>=24 && mes==8) || (dia<=22 && mes==9)) {
        signo="Virgo";
    } else if ((dia>=23 && mes==9) || (dia<=22 && mes==10)) {
        signo="Libra";
    } else if ((dia>=23 && mes==10) || (dia<=22 && mes==11)) {
        signo="Escorpio";
    } else if ((dia>=23 && mes==11) || (dia<=21 && mes==12)) {
        signo="Sagitario";
    } else {
        signo="Capricornio";
    }
    cout << "tu signo es: "<< signo <<endl;
    cout << "te gusta festejar tu cumpleaños?(si/no):";cin >> opcion;
    if (opcion=="Si"||opcion=="sI"||opcion=="si"||opcion=="SI"){
        cout << "que bueno! \n";
        cout << "ingrese numero de invitados: ";
        cin >> invitados;
        t_invitados = round(pow(invitados,1/4));
        cout << "el total de invitados es: "<< t_invitados;
    } else if (opcion=="No"||opcion=="nO"||opcion=="no"||opcion=="NO") {
        cout << "que lastima! \n";
    } else {
        cout << "Error. Se tiene que ingresar Si o NO.";
    }
    
    return 0;
}