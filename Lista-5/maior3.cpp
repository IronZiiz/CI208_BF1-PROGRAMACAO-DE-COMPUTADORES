/*(maior3) Fazer uma função chamada maior() que receba como parâmetro três números inteiros
e retorne o maior valor dentre os três. Se os três valores forem iguais, retorna qualquer um dos
valores.
Faça também um programa que receba do usuário 9 números inteiros não nulos e, usando APENAS
a função maior(), determine e mostre na tela o maior valor dentre os 9 números.*/
#include<iostream>
using namespace std;

void imprimir(int m);
void maior(int x, int y, int z);

int main()
{
    int a,b,c;
    cout<<"Digite 3 valores:"<<endl;
    cin>>a;
    cin>>b;
    cin>>c; 

    maior(a, b ,c);

return 0;
}

void imprimir(int m)
{
    cout<<m<<endl;
}
void maior(int x, int y, int z)
{
    int maior; 
    maior = x ;

    if(y > maior)
    {
        maior = y; 
    }
    if(z > maior)
    {
        maior = z; 
    }
    
    imprimir(maior);    
}