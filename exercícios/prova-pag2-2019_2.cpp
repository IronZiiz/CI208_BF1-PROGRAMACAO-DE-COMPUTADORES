/*
Codificar um programa em C++ que leia dois números 
inteiros (I e F) do teclado e, para todos os
valores inteiros X entre I e F (inclusive), imprima
o valor da sua raiz quadrada, do seu dobro, do seu
quadrado e do seu cubo. No final incluir a soma
dos valores das quatro colunas de valores calculados. 
Assuma que o intervalo [I, F] será digitado
em ordem crescente pelo usuário.
Exemplo de execução:

Digite 2 valores inteiros: 5 8
X Raiz Quadrada Dobro Quadrado Cubo
5 2.236         10       25    125
6 2.449         12       36    216
7 2.645         14       49    343
8 2.828         16       64    512
Totais 10.158   52       174   1196
*/

#include <cmath>
#include <iostream>
using namespace std; 

int main()
{

    int I, F;
    int contador=0; 
    cout<<"Digite o valor de dois inteiros:"<<endl;
    cin>>I;
    cin>>F;
    float T1 = 0, T2 = 0, T3 = 0 , T4 = 0; //TOTAIS 

    

    cout<<"X\tRaiz Quadrada\tDobro\tQuadrado\tCubo"<<endl;
    while (contador<=abs(F-I))
    {
        contador++; 
    cout<<""<<I-1+contador<<"\t"<<sqrt(I-1+contador)<<"\t\t"<<2*(I-1+contador)<<"\t"<<pow(I-1+contador,2)<<"\t\t"<<pow(I-1+contador,3)<<endl;
    T1 +=sqrt(I-1+contador);
    T2 +=2*(I-1+contador);
    T3 +=pow(I-1+contador,2);
    T4 +=pow(I-1+contador,3);
    }
    cout<<"Totais  "<<T1<<"\t\t"<<T2<<"\t"<<T3<<"\t\t"<<T4<<endl;

return 0;
}