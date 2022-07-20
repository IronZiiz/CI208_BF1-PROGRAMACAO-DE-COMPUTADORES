/*(progarit)  Dados o primeiro termo e a razão de uma progressão aritmética,
 determinar a soma dos seus primeiros cinco termos.

  
As fórmulas que definem os termos e soma de uma progressão aritmética (PA) são:*/

#include<iostream>
using namespace std;

int main()
{

    int pTermo = 2, anTermo; 
    int razao=2; 
    int soma;

    anTermo = pTermo + (5-1)*razao; 
    soma= (pTermo + anTermo)/2 * 5;

    cout<<"A soma dos cinco primeiros termos é:"<<soma;


    




return 0;
}