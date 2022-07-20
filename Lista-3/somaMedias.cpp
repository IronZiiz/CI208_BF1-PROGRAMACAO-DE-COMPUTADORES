/*(SomaMedias)Escreva um programa que leia uma sequencia de 10 pares de valores reais e some 
as medias aritmeticas de cada par*/

#define TAM 10 
#include <iostream>
using namespace std;

int main(){
    float n1, n2, somaMedias = 0; 
    int contador = 0; 

    while (contador < TAM)
    {
        contador++;
        n1 = 0; 
        n2 = 0; 
        cout<<"Digite dois numeros reais:";
        cin>> n1;
        cin>> n2; 

        somaMedias = somaMedias + (n1+n2)/2;
    }
    cout<<"Total:"<<somaMedias;
    return 0;
    
}