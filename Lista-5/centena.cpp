/*1. (centena) Escreva um programa que leia uma seqüência números inteiros por meio do teclado (até
que seja digitado 0) e, para cada um dos números, mostre seu dígito das centenas. Este valor deve
ser obtido através da função centena, que recebe como parâmetro um número inteiro n e retorna o
dígito das centenas em n.*/

#include<iostream>
using namespace std ;

int centena(int x);

int main()
{

    int n; 
    cout<<"";
    cin>>n; 
    centena(n);

    while( n!=0)
    { 
        cout<<"";
        cin>>n; 
        centena(n);
    }

return 0;
}

int centena(int x)
{ 
    x = (x/100)%10; 
    
    cout<<x<<endl;
    return x; 
}