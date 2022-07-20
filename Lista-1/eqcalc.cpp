/*(eqcalc) Ler dois inteiros, b e c, (b^2 > 4c), que correspondem à soma e multiplicação de 2 núme-
ros (n1, n2). Escreva um programa que ”descobre” os valores de n1 e n2 da seguinte forma:*/

#include <cmath>
#include <iostream>
using namespace std; 

int main()
{
    int b, c; 
    int n1, n2; 


    cout<<"Digite dois inteiros 'a' e 'c'   que cumpram (b²> 4c):";
    cin>>b; 
    cin>>c; 

    n1 = (b-sqrt(pow(b,2)-4*c))/2;
    n2 = (b+sqrt(pow(b,2)-4*c))/2;

    cout<<"valor de n1: "<<n1<<endl; 
    cout<<"valor de n2: "<<n2<<endl; 



    return 0;
}