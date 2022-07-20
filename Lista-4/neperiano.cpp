/*(neperiano) sabe-se que o numero neperiano e (que é um numero irracional) pode ser calcullado pela soma
dos valores de uma serie infinita, como mostrado abaixo:
e = 1 + 1/1! ...

Fazer um programa em C++ que calcule este numero e considerando apenas 10 (dez) primeiras parcelas

*/
#define TAM 10
#include <iostream> 
using namespace std; 

int main(){

   float e=0; 
   int operação=0;

   e++; 
   operação++; 

   while(operação<TAM)
   {
    int fatorial = 1;
    int contador = 0;
        while(contador < operação)
        {
            contador++; 
            fatorial *= contador; 
        }
        e += (1/((float)fatorial));
        operação++;
   }
   cout<<"Euler:"<< e<<endl; 
    return 0; 
}