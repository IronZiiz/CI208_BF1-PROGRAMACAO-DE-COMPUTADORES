/*
Escreva um programa em C++ para gerar estatísticas 
de um treino com drones. Seu programa deve
ler a velocidade média em Km/h de um número
indeterminado de voltas, até que o valor informado
seja -1. Ao final seu programa deve informar: o
total de voltas, a volta mais rápida e a menor 
velocidade seguida da sua respectiva volta, conforme
exemplos de execução abaixo.

Exemplo de execução:
Digite a velocidade para cada volta:
40 22 15 78 35.5 50 70.3 -1
Total de voltas: 7
Volta mais rápida: 4
Menor velocidade: 15 km/h (volta 3)
Outro exemplo de execução:
Digite a velocidade para cada volta:
22.5 17 39 30.3 -1
Total de voltas: 4
*/

#include <iostream>
using namespace std; 

int main()
{
int T = 0; //total de voltas 
float V; //velocidade da volta
int R; //velocidade mais rapida
int L; //posicao da mais lenta 
float VR; //posicao mais rapida 
float VL; //  velocidade da mais lenta

VR= -1;
VL= -1; 


    cout<<"Digite as velocidade:"<<endl;
    cin>>V;

    while(V != -1)
    {
      
        T = T + 1;
    
        if( V > VR)
        {
            VR = V; 
            R = T;
        }
        if(V < VL)
        {
            VL = V ;
            L = T; 
        }
    }

cout<<"Total de voltas:"<<T<<endl;
cout<<"Volta mais rapida:"<<R<<endl;
cout<<"Menor velocidade:"<<VL<<endl;

return 0; 
}