/*(somamaiores) Escreva um programa para ler 3 valores numéricos e escrever a soma dos dois
maiores.*/

#include <cmath>
#include <iostream>
using namespace std; 

int main(){
    int n1 ,n2 ,n3, menor, soma;

    cout<<"Digite 3 inteiros:";
    cin>>n1;
    cin>>n2;
    cin>>n3; 
   
    if(n1 < n2 && n1<n3)
    {
        menor = n1;
        soma = n2 + n3;
        cout<<"A soma entre os maiores é: "<<soma<<endl;  
    }
    if(n2 < n1 && n2 < n3)
    {
        menor = n2; 
        soma = n1 + n3;
        cout<<"A soma entre os maiores é: "<<soma<<endl;
    }
    if(n3 < n1 && n3 < n2)
    {
        menor = n3; 
        soma = n2 + n1;
        cout<<"A soma entre os maiores é: "<<soma<<endl;  
    }
    return 0; 
}