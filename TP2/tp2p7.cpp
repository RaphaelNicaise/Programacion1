/*Escribir un programa que calcule el valor de a, c y β. Sabiendo que b=4  y γ = 60° */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double pi = 3.141592;
    double a,b,c,beta,gamma;
    b=4;
    gamma=60;
    cout<<"Sabemos que alpha es 90 grados\n";
    beta=180-90-gamma;
    cout<<"Beta es: "<<beta<<endl;
    a = cos((beta*2*pi)/360)*4;
    cout<<"a es: "<<a<<" cm"<<endl;
    c = sqrt(pow(a,2)+pow(b,2));
    cout<<"c es: "<<c<<" cm"<<endl;
    return 0;
}