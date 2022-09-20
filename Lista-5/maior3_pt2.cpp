/*Faça também um programa que receba do usuário 9 números inteiros não nulos e, usando APENAS
a função maior(), determine e mostre na tela o maior valor dentre os 9 números.*/
#define TAM 9
#include <iostream>
using namespace std; 



int retorna(int y);
void maior(int x);

int main()
{
    int a; 
    cin>>a; 

    maior(a);


return 0;
}

int retorna(int y)
{
    cout<<"Maior:"<<y<<endl;
}       

void maior(int x)
{
    int contador = 0; 
    int maior = x;
    int b;

    while (contador < TAM)
    {
        contador++; 
        cin>>b; 
        if(b > maior)
        { 
            maior = b;
        }

    }
    retorna(maior);
}