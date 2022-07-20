/*Faça um programa em C++ que que 
receba comoentrada um número inteiro 
positivo N de exatamente três dígitos
. Se a soma de seus dígitos for
par, imprima o valor da soma, se 
a soma for ímpar imprima o valor do
 produto dos três dígitos. 
Considere que o usuário SEMPRE 
informará um número
inteiro positivo de 3 dígitos.
Exemplo de execução:
Digite valor de 3 dígitos: 998
Soma par = 26
Outro exemplo de execução:
Digite valor de 3 dígitos: 100
Soma impar. Produto = 0*/

#include<iostream>
using namespace std; 

int main()
{
    int N; 
    int soma = 0, extctNum, produto = 1 ;
    cout<<"Digite um numero de 3 digitos:";
    cin>>N; 

    while (N > 0)
    {
        extctNum = N%10;
        soma = soma + extctNum;
        produto = produto * extctNum;
        N = N/10;
    }

    if( soma%2 == 0)
    { 
        cout<<"Soma par = "<<soma<<endl; 
    }else{ 
        cout<<"Soma impar. Produto = "<<produto<<endl; 
    }

return 0; 
}