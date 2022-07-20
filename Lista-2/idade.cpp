/*(idade) Fazer um programa que lê a data de nascimento de uma pessoa (dia, mes, ano) e determina
sua idade no dia 15/04/2021.*/

#include <cmath> 
#include <iostream>
using namespace std; 

int main()
{
    int d, m ,a; //Dia, mes, ano
    int idade; 
    cout<<"Digite o dia, mes e ano do seu nascimento: ";
    cin>>d; 
    cin>>m;
    cin>>a; 

    
    idade= (fabs((d-15)) + fabs((m-4)*30) + (2021-a)*365)/365;

    cout<<"Sua idade em anos: "<<idade;

return 0; 
}