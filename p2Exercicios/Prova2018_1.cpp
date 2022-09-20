/*Marta deseja saber, dentre um período de dias a
ser analisado, quantos sub-períodos apropriados há
para plantar em sua horta. Marta estabeleceu que
um sub-período apropriado inclui um dia de chuva
seguido de pelo menos 2 dias sem chuva. Além
disso, Marta deseja saber a chuva acumulada em
cada um dos dias. A chuva acumulada é a soma da
quantidade de dias de chuva que antecede cada dia.
Para isso, faça um programa em C++ que lê do
usuário um vetor de tamanho N (N indicado via
#define) que representa um período de dias a
ser analisado. Cada posição representa um dia, por
exemplo, a posição 0 (zero) o dia 0 (zero), a posição 1 o dia 1, 
e assim por diante. Esse vetor possui
valores 0 (zeros) e 1 (uns) que indicam, 
respectivamente, a previsão de ausência ou presença de chuvas. 
O programa deve alterar este vetor para refletir
a chuva acumulada, assim, cada elemento após o
primeiro deve ser a soma acumulada do elemento
com os elementos que o antecedem.
Ao final, o programa deve mostrar o vetor alterado,
a quantidade de dias com chuva no período e a
quantidade de dias sem chuva no período. Além
disso, o programa deve mostrar, se houver, quantos
períodos apropriados para o plantio, caso contrário,
o programa deve mostrar a mensagem: “Sem período apropriado”.
OBS.: Considere que JÁ EXISTE a função prédefinida void imprimeVetor(int vet[])
para mostrar conteúdo do vetor. Sua solução deverá
apenas CHAMAR esta função onde necessário.
Exemplo de execução (com N=12):
Período:
0 1 1 0 1 0 0 1 0 0 0 1
Chuva Acumulada:
0 1 2 2 3 3 3 4 4 4 4 5
Dias de chuva: 5
Dias sem chuva: 7
2 período(s) apropriado(s)
*/


#include<iostream>
using namespace std; 
#define N 12

void chuvaAcumulada(int vet[]);
void imprimeVetor(int vet[]);
void imprimeDiasDeChuva(int x, int y); 
void imprimePeriodo(int x); 
void leVetor(int x); 

int main()
{ 
   int i; 
   int dC=0; //dias de chuva 
   int dSC=0; //dias sem chuva 
   int P=0; //periodo 
   int vet[N]; 
   
   for(i = 0; i < N; i++ )
   {
        cin>>vet[i]; 

        if(vet[i]== 0)
        {
            dSC++; 
        }
        if(vet[i] == 1)
        {
            dC++; 
        }
   }
    cout<<"Período:"<<endl; 
    imprimeVetor(vet);
   
   for(i = 0; i < N-2; i++)
   {
        if(vet[i] == 1 && vet[i+1] == 0 && vet[i+2] == 0)
        {
            P++; 
        } 
   }

    cout<<"Chuva Acumulada:"<<endl;
    chuvaAcumulada(vet); 
    imprimeDiasDeChuva(dC, dSC);
    imprimePeriodo(P); 

    return 0; 
}

void imprimeVetor(int vet[])
{
    int i;

    for(i = 0; i < N; i++)
    {
        cout<<vet[i]<<" "; 
    }
    cout<<endl; 
}

void chuvaAcumulada(int vet[])
{
    int i; 
    for(i = 1; i <N ; i++)
    {
        vet[i] += vet[i-1]; 
    }
    imprimeVetor(vet); 
}

void imprimeDiasDeChuva(int x, int y)
{
    cout<<"Dias de chuva: "<<x<<endl;
    cout<<"Dias sem chuva: "<<y<<endl;
} 

void imprimePeriodo(int x)
{
    if( x == 0)
    {
        cout<<"sem período apropriado"<<endl; 
    }
    else { 
        cout<<x<<" perido(s) apropriado(s)"<<endl; 
    }
}