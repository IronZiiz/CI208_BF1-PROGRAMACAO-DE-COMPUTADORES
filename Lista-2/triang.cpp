/*(triang) Elaborar um programa que lê 3 valores inteiros e positivos a, b, c e verifica se eles for-
mam ou não um triângulo. Caso os valores formem um triângulo, deve-se calcular e imprimir o
valor do perímetro do triângulo, indicando também com uma mensagem se este é equilátero (três
lados iguais), isósceles (apenas 2 lados iguais) ou escaleno (todos os lados são diferentes). Se os
valores não formam um triângulo, escrever uma mensagem informando o fato. Lembre que em um
triângulo, o comprimento de cada lado deve ser menor que a soma dos outros dois lados.*/

#include <cmath> 
#include <iostream>
using namespace std; 

int main(){

    int l1,l2,l3;

    cout<<"Digite 3 lados para um triangulo:";
    cin>>l1;
    cin>>l2; 
    cin>>l3; 

    if(l1< l2+l3)
    {
        if(l1==l2 && l1 ==l3)
        {
            cout<<"É um triangulo equilatero de perimetro: "<<(l1+l2+l3)<<endl;
        }
        if(l1==l2 || l1==l3)
        {
            cout<<"É um triangulo isósceles de perimetro: "<<(l1+l2+l3)<<endl;
        }
        if(l1!=l2 && l1!=l3 )
        {
            cout<<"É um triangulo escaleno de perimetro: "<<(l1+l2+l3)<<endl;
        }
    }

    return 0;
}

