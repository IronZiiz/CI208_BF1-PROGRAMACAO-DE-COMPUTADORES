/*Faça um programa em C++ que lê do usuário uma matriz N x M  de valores inteiros 
(N e M indicados via #define) e dois valores inteiros X e Y. O seu programa deve 
calcular e mostrar na tela a quantidade de vezes em que X é seguido de Y nas linhas da matriz

ja existe (ler_mat[N][N])
*/

#include <iostream>
using namespace std; 
#define N 4


void ler_mat(int vet[N][N]);
void funcSequencia(int vet[N][N],int X,int Y, int &contagem); 

int main()
{

    int vet[N][N]; 
    int X, Y, contagem=0; 

    cout<<"Informe a matriz:"<<endl;
    ler_mat(vet); 
    cout<<"Informe X e Y:";
    cin>>X>>Y;

    funcSequencia(vet, X, Y, contagem);
   cout<<"Sequencia "<<X<<"-"<<Y<<" ocorre "<<contagem<<" vezes"<<endl;

return 0;
}

void ler_mat(int vet[N][N])
{
    int i; 
    int j; 


    for(i= 0; i < N; i++)
    {
        for(j = 0; j <N; j++)
        {
            cin>>vet[i][j];
        }
    }
    
}

void funcSequencia(int vet[N][N],int X,int Y,int &contagem)
{
    int i; 
    int j; 
    contagem = 0;

    for(i= 0; i < N; i++)
    {
        for(j = 0; j <N-1; j++)
        {
            if( vet[i][j]==X && vet[i][j+1] == Y)
            {
                 contagem++; 
            }
            if(vet[i][N] == X && vet[i+1][0]==Y)
            {
                contagem++;
            }
        }
    } 

}
