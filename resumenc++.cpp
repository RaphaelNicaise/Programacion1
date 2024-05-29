#include <iostream> // libreria de entrada y salida
#include <cmath> // libreria matematica
#include <cctype> // libreria de caracteres
#include <string> // libreria de strings
#include <iomanip> // libreria de manipulacion de salida
#include <cstdlib> // libreria de numeros aleatorios
#include <ctime> // libreria de tiempo

using namespace std;
int main() {
    // SINTAXIS reglas que determinan orden y estructura de un lenguaje de programacion
    // SEMANTICA significado de cada ELEMENTO en un lenguaje de programacion
    // como declarar variables (a-z A-Z _ 0-9)

/* tipo de datos */  
    int numero,numero1 = 10; // se declara y no se inicializa, se declara y se inicializa. val maximo 2^31-1 N
    numero = 10; // se inicializa variable declarada 
    float  numero2 = 10.5; // se declara y se inicializa val maximo 2^31-1 R
    float  numero3 = 10; // -> 10.0 
    double numero4 = 10.5; // val maximo 2^63-1 N y R
    char   letra = 'a'; // se declara el caracter' '
    string palabra = "hola"; // se declara y se inicializa el string ""
    enum dias {LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO}; // se declara y se inicializa el enum. Def por usuario
    double d,f;
    d = 10.5; f = 5.3;
    int arreglo[5]; // se declara un array de 5 elementos

    /* 
       [mosificadores] tipo nombre_Varialbe = valor
       unsigned int -> doble alcance de int de 0 a 2^32-1
       short int -32768 a 32767
       unsigned short int 0 a 65535
       long int -2^31 a 2^31-1
       unsigned long int 0 a 2^32-1
       double < long double (mas grande todavia)
    */ 
    bool esVerdadero = true; // se declara y se inicializa el booleano true o false (1 o 0)
    cout << esVerdadero << endl; // se muestra 1 si true y 0 si false
    
    // void valor; //  cualquier tipo de dato 
    
    cout << "EXTRACTOR" << endl; // << sacas algo
    int insertor;
    cin >> insertor; // >> metes algo
    // calculos
    cout << "1324 + 322: " << 1324+322 << endl;
    cout << "1234 - 115.5: " << 1234 - 115.5 << endl;
    cout << "34*52: " << 34*52 << endl;
    cout << "34.3*51.8: " << 34.3*51.8 << endl; 
    cout << "500/3: "<< 500/3 << endl; // DIV ENTERA 500/3 = 166
    cout << "500.0/3: " << 500.0/3 << endl; // DIV REAL ENTERA 500/3 = 166.667
    cout << "500%3: " << 500/3.0 << endl; // devuelve el resto de la division 500%3 = 2

    // "\t" tabulador
    // "\n" salto de linea = endl

    /*
    % modulo | - menos | + mas | * por | / div | ++ incremento | -- decremento
    */
    // a += b -> a = a + b
    // a -= b -> a = a - b
    // a *= b -> a = a * b
    // a /= b -> a = a / b
    // a %= b -> a = a % b
    // a++ -> a = a + 1
    // a-- -> a = a - 1
    
    int edad; cin >> edad;
    //operadores comparacion
    /* 
       == igualdad          5==5 -> true
       != distinto          5!=5 -> false
       > mayor que          6>5 -> true
       < menor que          6<5 -> false
       >= mayor o igual que 5>=5 -> true
       <= menor o igual que 5<=5 -> true
    */ 

    
    //CONSTANTES
    const int meses = 12; // constante, no se puede modificar
    const double pi = 3.1416; // sirven mas q nada para mejorar la legibilidad del codigo
    M_PI; // constante de la libreria cmath
    // FUNCIONES MATEMATICAS <cmath>
    /*
    abs(x) -> valor absoluto de x
    sqrt(x) -> raiz cuadrada de x
    pow(x,y) -> x elevado a la y
    ceil(x) -> redondea x hacia arriba
    floor(x) -> redondea x hacia abajo
    exp(x) -> e elevado a la x
    log(x) -> logaritmo natural de x
    log10(x) -> logaritmo base 10 de x
    sin(x) -> seno de x
    cos(x) -> coseno de x
    tan(x) -> tangente de x
    round() -> redondea al entero mas cercano
    trunc() -> pierde la parte decimal (truncate)
    */
   // FUNCIONES DE CARACTERES <cctype>
    /*
    isalpha(x) -> devuelve true si x es una letra
    isdigit(x) -> devuelve true si x es un digito 
    isalnum(x) -> devuelve true si x es alfanumerico
    islower(x) -> devuelve true si x es minuscula
    isupper(x) -> devuelve true si x es mayuscula
    tolower(x) -> convierte x a minuscula
    toupper(x) -> convierte x a mayuscula
    */
   
   /*TRIGONOMETRIA*/
    const double pi = 3.141592;
    double grados,radianes;
    cout << "Ingrese grados: "; cin >> grados;
    radianes = (grados*2*pi)/360; // CONVERSION DE GRADOS A RADIANES
    cout << "coseno de: " <<grados<<" grados es: " <<cos(radianes) << endl;
    cout << "seno de: " <<grados<<" grados es: " <<sin(radianes) << endl;  
    cout << "tangente de: " <<grados<<" grados es: " <<tan(radianes) << endl;

// FORMULAS

    // AREA DE UN CIRCULO
    double radio,area;
    area = pi*pow(radio,2);
    // AREA DE UN TRIANGULO
    double base,altura,area;
    area = (base*altura)/2;
    // AREA DE UN RECTANGULO
    double base,altura,area;
    area = base*altura;
    // AREA DE UN CUADRADO
    double lado,area;
    area = pow(lado,2);
    // PASAR DE GRADOS A RADIANES
    double grados,radianes;
    radianes = (grados*2*pi)/360;
    // CANTIDAD DE CIFRAS
    int numero,cifras;
    cifras = trunc(log10(numero))+1;


    // IF ELSE-IF ELSE
   int num;
    cout <<"ingrese numero: " ;cin >> num;
    bool esPar = (num%2==0) ? true : false; // if (condicion) ? entonces ***: sino ***
    if (esPar) {
        cout << "Es par" << endl;
    } else {
        cout << "Es impar" << endl;
    }
    cout << &num << endl; // &num es la direccion de memoria de la variable num
    cout << &esPar;
    // IF DE OTRA MANERA
    (4 > 0)   ?      base = 4      :   base = 3;
//  condicion ? si true hace esto  : hace esto;
// SIRVE CUANDO ES UNA ACCION
    
    // SWITCH
    int dia;
    cout << "Ingrese un numero del 1 al 7: "; cin >> dia;
    switch(dia) { // se evalua la variable dia
        case 1: cout << "Lunes" << endl; break; // en el caso que la variable dia tenga valor 1 se ejecuta y desp break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default: cout << "Numero incorrecto" << endl; // si no se cumple ningun caso se ejecuta el default
    }
    // ejemplo de switch
    int num1,num2;
    char operacion;
    cout << "Ingrese dos numeros: "; cin >> num1 >> num2;
    cout << "Ingrese la operacion: "; cin >> operacion;
    switch(operacion) {
        case '+': cout << num1+num2 << endl; break;
        case '-': cout << num1-num2 << endl; break;
        case '*': cout << num1*num2 << endl; break;
        case '/': cout << num1/num2 << endl; break;
        default: cout << "Operacion incorrecta" << endl;
    }

    // CICLO WHILE
    int contador = 1; // se declara int ya que el contador es un numero entero (1,2,3,4,5)
    int sumatoria = 0;

    while(contador <= 10) { // EVALUA Y LUEGO EJECUTA
        sumatoria += contador;  // sumatoria = sumatoria + contador
        cout << contador << endl;
        contador++; // por cada iteracion suma 1 al contador
        
    }
    cout << "La sumatoria es: " << sumatoria << endl;
    // CICLO DO WHILE
    do // PRIMERO EJECUTA Y LUEGO EVALUA
    {
        cout << contador << endl;
        contador++;
    } while (contador <= 10);

    // IDEAL PARA MENUS EL DO WHILE
    int opcion;
    do {
        cout<<"1 - SubPrograma1\n";
        cout<<"2 - SubPrograma2\n";
        cout<<"3 - SubPrograma3\n";
        cout<<"4 - Salir del programa\n";
        cin >> opcion;
        /*
        lOGICA DE PROGRAMACION CON SWITCHS
        */
       switch(opcion) {
        case 1: {cout<<"Logica1\n";break;} // EL BREAK SALE DEL SWITCH, SI NO SE SIGUEN EJECUTANDO 
        case 2: {cout<<"Logica2\n";break;} 
        case 3: {cout<<"Logica3\n";break;}
        case 4: {cout<<"Termina programa\n";break;} // tambien se puede poner return 0 y en el while (true)
        default: {cout<<"Opcion incorrecta\n";} // cuando no es ninguna de las opciones
       }
    } while (opcion != 4);
    // ASDA
    
    
    // CICLO FOR
    for (int i = 0; i < 10; i++) // for (inicializacion; condicion; incremento)
    {                            //     (variable que recorre, mientras, sumar o restar por cada paso)
        cout << i << endl;
    }
    
    // GENERAR NUMERO ALEATORIO
    srand(time(NULL)); // inicializar semilla para generar numeros aleatorios
    int numeroAdivinar, numeroIngresado, intentos = 0;
    numeroAdivinar = rand() % 100 + 1; // genera un numero aleatorio entre 1 y 100
    // Ej 53 a 117 -> restamos extremos M-m y nos da el porcentaje al que le sumamos 1, y a eso le sumanos el extremo menor.
    // rand() % 64+1 + m

    string palabra;
    cout << palabra[0]; // muestra primera letra de la palabra
    cout << palabra[palabra.length()-1]; // muestra la ultima letra
    // palabra.lenght() es la cantidad de caracteres, como el indice arranca en 0
    // se necesita restarle 1

    // MATRICES 
    int FILAS=5,COLUMNAS=5;
    for (int i=1;i<=FILAS;i++){
        for (int j=1;j<=COLUMNAS;j++) {
            (i==j) ? cout<<j : cout<<0;  // cuando fila igual a columna entonces j, sino 0         
        }
        cout << endl;
    }

    typedef enum {LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO} dias; // crear alias de un tipo de dato 
    dias dia; // se declara la variable dia de tipo de dato dias
    typedef int entero; // crear alias de un tipo de dato
    entero numero; // se declara la variable numero de tipo de dato entero (Entero hace referencia al datatype INT)
    // TAMBIEN SE SUELE USAR
    
    typedef int entero;  /* <-> */ using entero = int; // crear alias de un tipo de int
                                   entero numero; /* se declara la variable numero de tipo de 
                                                    dato entero (Entero hace referencia al datatype INT)*/
    
    // ARRAYS RESUMEN
    // tipo nombre_tipo[tamaño];

    int ventas[5]={1,2,3,4,5}; // se declara un array de 5 elementos int array[N] N variables de tipo INT. de 1 a N (n espacios)
    // indices     0 1 2 3 4   de 0 a N-1
    ventas[0]=100; // a indice 0 se le asigna el valor 100
    cout << ventas[0]; // muestra el primer elemento del array
    
    for (int i=0;i<5;i++) { 
        ventas[i]=i; 
        cout << ventas[i] << endl;}

    // existen matrices homogeneas (1 datatype) o heterogeneas (varios datatypes)

    // nombres de tipos con una t minuscula
    
    // Manejo Vectores
    const int N = 10;
    int vector[N]; // array dinamico que puede crecer o decrecer ARRAY=VECTOR

    typedef int tVector[N]; // se crea un alias de un array de N elementos
    typedef double tTemp[7];
    typedef short int tMes[12];
    typedef double tVentas[31];
    typedef char tVocales[5]; // variable array de 5 ranuras
    tVocales vocales={'a','e','i','o','u'}; // vocales[0]='a' vocales[1]='e' vocales[2]='i' vocales[3]='o' vocales[4]='u
     
    // no se puede copiar array1 = array2
    // se tiene que hacer asi
    for (int i = 0;i<N;i++) {
     // array1[i] = array2[i];
    }

    // si hay menos valores que elementos, los restantes por default se colocan en 0

// RECORRER MATRIZ
int filas,columnas;
int matriz[filas][columnas];
for (int i = 0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
// RECORRER POR CADA ELEMENTO DENUEVO TODOS LOS ELEMENTOS
for (int i= 0;i<filas;i++) {
        for (int j=0;j<columnas;j++) {
            for (int k = 0; k < filas; k++) { // por cada elemento del array, volvemos a recorrer todo
                for (int l = 0; l < columnas; l++) {
                }}}}


int n=6,arr[n][n];
for (int i=0;i<n;i++){
        // si indice de fila es par reccorer de izquierda a derecha, sino de derecha a izquierda
        if(i%2==0){
            for (int j=0;j<n;j++){// RECORRER FILA FIJA DE IZQUIERDA A DERECHA
                cout << arr[i][j] << ' '; 
            }
        } else {
            for (int j=n-1;j>=0;j--){ // RECORRER FILA FIJA DE DERECHA A IZQUIERDA
                cout << arr[i][j] << ' ';
            }
        }
        cout << endl;
    }

// BUSQUEDA EN MATRIZ
/* while((i < NUM) && !encontrado) {
    if (alguna condicion){
        encontrado=true; // va a terminar el while
    }
} */

string cad1="Hola";
string cad2="Pepe";
// LAS CADENAS DE TEXTO SE PUEDEN RECORRER COMO MATRICES
cout << cad1[1]; // muestra la letra o 
cad1.swap(cad2); // Intercambia cad1 -> <- cad2 
int len=cad1.length(); //Devuelve cantidad de caracteres Hola -> 4 H,o,l,a 
int len=cad1.size(); // Devuelve la cantidad de caracteres
cad1.at(0); // devuelve el caracter en la posicion 0
cad1[0]; // devuelve el caracter en la posicion 0
cad1.substr(0,2); // devuelve los caracteres desde la posicion 0 hasta la 2
cad1.find("la"); // devuelve la posicion de la primera ocurrencia de "la"
cad1.rfind("la"); // devuelve la posicion de la ultima ocurrencia de "la"
cad1.erase(0,2); // borra los caracteres desde la posicion 0 hasta la 2
cad1.insert(3,"la"); // inserta "la" en la posicion 3

return 0; // cierra el programa | 0 -> todo salio bien | 1 -> hubo un error
}

