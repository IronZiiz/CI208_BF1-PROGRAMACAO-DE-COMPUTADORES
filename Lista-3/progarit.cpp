/*Fazer a soma dos primeiros 20 elementos de uma progressão aritmética de razão 3 e
cujo 1o
elemento é fornecido pelo usuário. Você DEVE usar while para resolver o problema. NÃO
USAR A FÓRMULA DA SOMA DE UMA P.A.*/

#include <iostream>
using namespace std;
#define RAZAO 3
#define TAM 20

int main(){

    int n, soma = 0;
    int contador = 0;

    cout<<"Digite o primeiro termo da PA:";
    cin>>n; 

    while (contador < TAM)
    {
        contador++;
        soma = soma + (n+RAZAO*(contador -1));
    }
    cout<<"Total:"<<soma; 
    
    return 0;
}