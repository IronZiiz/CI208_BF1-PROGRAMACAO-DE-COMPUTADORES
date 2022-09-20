
#include <iostream>
using namespace std; 


#define N 5

void ler_Matriz(int mat[N][N]);
void imprime_Matriz(int mat[N][N]);
void criaMatrizB(int mat[N][N], int mat1[N][N]);


int main()
{
    int vetA[N][N]; //Matriz A
    int vetB[N][N]; //Matiz B 


    ler_Matriz(vetA); 

    cout<<"Informe a Matriz A:"<<endl;
    imprime_Matriz(vetA);

    cout<<"Matriz B resultante:"<<endl;
    criaMatrizB(vetA,vetB); 
    imprime_Matriz(vetB);

    return 0;
}

void ler_Matriz(int mat[N][N])
{

    int i;
    int j; 

    for(i = 0; i < N; i++)
    {
        for(j = 0; j<N; j++)
        {
            cin>>mat[i][j];
        }
    }
}

void imprime_Matriz(int mat[N][N])
{

    int i;
    int j; 

    for(i = 0; i < N; i++)
    {
        for(j = 0; j<N; j++)
        {
            if(j % N == 0 )
            {
                cout<<endl;
            }
            cout<<mat[i][j]<<"  ";
        }
    }
    cout<<endl;
}

void criaMatrizB(int mat[N][N],int mat1[N][N])
{
    int i;
    int j; 
    for(i = 0; i < N; i++)
    {
        for(j = 0; j<N; j++)
        {
            

           if( i == j && i !=0 && i!= N)
           {
            
                mat1[i][j]=
                mat[i][j]+

            //soma parte de cima
                mat[i-1][j-1] +
                mat[i-1][j+1] +
                mat[i-1][j]   +
                
            
            //soma parte de baixo
                mat[i+1][j-1] +
                mat[i+1][j+1] +
                mat[i+1][j]   +


            //soma dos dois laterais que sobraram 
                mat[i][j-1]   +
                mat[i][j+1] ;  
           }
           else{
              mat1[i][j] = 0;
           }
        }
    }
       //cantos da matriz
           mat1[0][0] =        
           
           mat[0][0]+
           mat[0][1]+
           mat[1][1]+
           mat[1][0];

           mat1[N-1][N-1] = 
           
           mat[N-1][N-1]+

           mat[N-1][N-2]+
           mat[N-2][N-1]+
           mat[N-2][N-2]
           ;  
}