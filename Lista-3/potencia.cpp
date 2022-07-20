/*Escreva um programa que calcule e mostre a potencia b

a onde a e b são inteiros
fornecidos pelo usuário. O programa deve implementar a potência apenas usando repetição, sem
o uso de quaisquer funções matemáticas. O programa deve exibir corretamente os resultados para
a = 0, a = 1 e a < 0.*/

#include <iostream>
using namespace std; 

int main(){

    int a,b; 
    int contador = 0;
    int i =  1; 

    cout<<"Digite o numero que sera a base:"; 
    cin>>b;
    cout<<"Digite o numero que sera o expoente:";
    cin>>a; 

    if(a == 0){
        cout<<"1";
    }
    if(a == 1){
        cout<<""<<b; 
    }
    if(a>0){
        while(contador<a){
            contador++;
            i = i*b;
            
        }
        cout<<"Potencia:"<<i;

    }

    else{
        while(contador<a)
        {
            i = i *b; 
        }
        cout<<"Resultado:"<<1/i;
    }
    return 0; 
}
 
