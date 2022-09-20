/*Faça também um programa que, usando esta função, imprima na tela todos os números primos entre
dois valores A e B em diversas linhas com 10 valores cada. Os valores A e B devem ser informados
pelo usuário no início da execução do programa.*/

#include <iostream>
using namespace std; 

void ehPrimo(int n);
void imprime(int x);

int main(){

    int A=0,B=0; 

    cout<<"Digite as extremidades do intervalo:"; 
    cin>>A>>B; 

    for(int i=A; i<B; i++)
    {
        A++; 
        ehPrimo(A); 
    }

    return 0;
}

void ehPrimo(int n)
{
   int contador=0; 
   for(int i = 2 ; i < n/2; i ++)
   {
        if(n%i == 0)
        {
            contador++;
            break; 
        }
   }

   if(contador == 0 && n!=4)// é primo
   { 
      imprime(n);
    }
   
  
}

void imprime(int x )
{
    cout<<" "<<x ;
}