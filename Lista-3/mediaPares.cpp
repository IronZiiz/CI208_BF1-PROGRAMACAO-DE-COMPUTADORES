/*Escreva um programa que leia uma sequencia de 10 pares de valores reais e, para cada par,
escrever sua media*/

#include <iostream>
using namespace std;
#define TAM 10

int main(){
    
    float n1, n2; 
    int contador = 0 ;

    while (contador <TAM)
    {
        n1 = 0 ; 
        n2 = 0 ; 

        cout<<"Digite um par de numeros:"; 
        cin>> n1;
        cin>> n2;
        cout<<"Media:"<<(n1+n2)/2<<endl;
    }
    return 0;
}