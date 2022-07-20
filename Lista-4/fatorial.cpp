/*Dado um numero inteiro, calcular seu fatorial*/

#include <iostream>
using namespace std;

int main(){

    int n;
    int contador = 0;
    int i = 1; 

    cout<<"Digite um numero:";
    cin>>n; 

    while (contador< n)
    {
        contador++;
        i = i * (n+1 - contador);

    }
    cout<<"Fatorial:"<< i; 

    return 0;
}