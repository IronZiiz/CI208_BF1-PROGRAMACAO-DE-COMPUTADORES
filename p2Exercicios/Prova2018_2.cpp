/*Uma matriz é esparsa se a grande maioria das suas
posições contem o valor zero. Escreva um programa em C++ 
que ajude a determinar se uma matriz é esparsa. O programa deve ler uma matriz com
M linhas e N colunas e escrever a quantidade e o
porcentual de valores iguais a zero que ela contém,
além da soma dos valores diferentes de zero. Os
valores de M e N devem ser definidos com a diretiva #define.
OBS.: Para a leitura de uma matriz, considere
que já existe a função void lerMatriz (int
mat[M][N]). Sua solução deve apenas CHAMAR esta função onde necessário.
Exemplo de execução (com M=5 e N=4):
Informe matriz:
9 0 0 1
0 0 0 0
1 2 0 0
0 0 2 0
0 0 5 5
quantidade de zeros: 13
porcentual de zeros: 65%
soma: 25*/

#include <iostream> 
using namespace std; 

#define M 5
#define N 4

void lerMatriz(int mat[M][N]);
void imprimeDados(float x, float y, float w);
void calculaDados(int mat[M][N]);

int main(){
    int mat[M][N]; 
    cout<<"Informe a matriz:"<<endl; 
    lerMatriz(mat);
    calculaDados(mat); 
    return 0; 
}

void lerMatriz(int mat[M][N])
{
    int i; 
    int j; 

    for(i = 0; i < M; i++)
    {
        for(j = 0; j< N; j++)
        {
            cin>>mat[i][j];
        }
    }
}

void calculaDados(int mat[M][N]){
    int i; 
    int j; 
    float zeros = 0; 
    float soma =0; 
    float porcentagem=0; 
    for(i = 0; i<M ; i++)
    {
        for(j = 0; j < N; j++)
        {
            if (mat[i][j] == 0)
            { 
                zeros++; 
            }else {
                soma += mat[i][j];
            }
        }
    }
    porcentagem = (zeros /(N*M)) * 100; 
    imprimeDados(zeros, porcentagem, soma);
}
void imprimeDados(float x, float y, float w)
{
    cout<<"quantidade de zeros: "<<x<<endl ;
    cout<<"porcentual de zeros: "<<y<<"%"<<endl; 
    cout<<"soma: "<<w<<endl;
}