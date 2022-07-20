/*(quadrante) Escreva um programa para ler as coordenadas reais (X, Y ) de um ponto no sistema
cartesiano e escrever o quadrante ao qual o ponto pertence. Caso o ponto não pertenca a nenhum
quandrante, escrever se ele está sobre o eixo X, eixo Y ou na origem.*/

#include <cmath>
#include <iostream>
using namespace std;

int main(){
    int X,Y;

    cout<<"Digite valores para x e y:";
    cin>>X;
    cin>>Y; 
    //primeiro quadrante
    if(X>0 && Y>0)
    {
        cout<<"Primeiro quadrante"<<endl;
    }
    //segundo quadrante
    if(X<0 && Y>0)
    {
        cout<<"Segundo quadrante"<<endl;

    }
    //terceiro quadrante
    if(X<0 && Y<0)
    {
        cout<<"terceiro quadrante"<<endl;

    }
    //quarto quadrante
    if(X>0 && Y<0)
    {
        cout<<"quarto quadrante"<<endl;

    } 

    if(X<0 || X>0 && Y==0)
    {
        cout<<"Está sobre o eixo X"<<endl;
    } 
    if(Y<0 || Y>0 && X ==0)
    {
        cout<<"Esta sobre o eixo Y"<<endl;
    }
    if(X == 0 && Y ==0)
    {
        cout <<"Esta na origem"<<endl; 
    }
return 0;
}