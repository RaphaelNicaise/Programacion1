#include <iostream>
using namespace std;
int main(){
    const int N=50;
    typedef long long int tFibonacci[N];
    tFibonacci fib;
    fib[0]=1;
    fib[1]=1; // definimos los primeros dos ya que
    for (int i=2;i<N;i++){ // fib 0 y 1 ya estan definidos
        fib[i]=fib[i-1]+fib[i-2]; // un elemento es la suma de los 2 anteriores
        cout << fib[i] <<", ";
    }
    return 0;
}