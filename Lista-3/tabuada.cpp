/*(tabuada) Escreva um programa que leia do teclado um número n > 0 e imprima a tabuada de n
de 1 até 10. Exemplo de saída para o valor de n igual a 5:*/

#include <iostream>
using namespace std; 

int main(){

    int n;
    int contador = 0; 
    
    cout<<"Digite um n>0:";
    cin>> n;

    while (contador <10)
    {
        contador++;
        cout<<""<<n<<"x"<<""<<contador<<"="<<n*contador<<endl;
    }
    return 0;
}