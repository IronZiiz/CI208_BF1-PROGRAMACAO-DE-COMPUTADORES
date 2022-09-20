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
    int total_voltas, volta_rap, volta_dev;
    float menor_vel, velocidades, maior_vel;
    
    total_voltas = 0; 
    velocidades = 0; 

    cout<<"Digite a velocidade"<<endl; 
    cin>>velocidades; 

    menor_vel = velocidades; 
    volta_dev= 1 ; 

    while(velocidades != -1)
    {
        total_voltas++;
            if(velocidades < menor_vel){
                menor_vel = velocidades; 
                volta_dev = total_voltas;
            }
            if(velocidades > maior_vel)
            {
                maior_vel = velocidades; 
                volta_rap = total_voltas;

            }
            cout<<"Digite a velocidade:"<<endl; 
            cin>>velocidades; 
    }
    cout<<"maior velocidade: "<<maior_vel<<endl;
    cout<<"Volta com a maior velocidade: "<<volta_rap<<endl; 
    cout<<"Menor velocidade:"<<menor_vel<<endl; 
    cout<<"volta com menor velocidade:"<<volta_dev<<endl; 

return 0;
}