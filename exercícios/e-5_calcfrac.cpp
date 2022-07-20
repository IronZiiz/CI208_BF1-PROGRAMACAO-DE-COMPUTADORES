/*(calcfrac)Escreva um programa que leia três números inteiros e positivos (A,B,C) e calcule 
a seguinte expressão:*/

#include <cmath>
#include <iostream> 
using namespace std; 

int main()
{
    int A, B, C; 
    int R, S; 
    int D;

    cout<<"Escreva 3 numeros inteiros e positivos:";
    cin>>A; 
    cin>>B;
    cin>>C; 

    R = pow((A+B),2);
    S = pow((B+C),2);

    D= (R+S)/2;

    cout<<"A expressão calculada: "<<D<<endl;


    return 0;
}