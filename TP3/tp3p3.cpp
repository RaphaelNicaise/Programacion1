/*Hacer un programa en C++, que lea una letra y diga si es una vocal. */

#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char L,l;
    cout <<"ingrese una letra: ";cin >> L;
    l = tolower(L);
    if((l=='a')||(l=='e')||(l=='i')||(l=='o')||(l=='u')){
        cout << L << " es vocal";
    } else{
        cout << L << " no es vocal";
    }
    return 0;
}