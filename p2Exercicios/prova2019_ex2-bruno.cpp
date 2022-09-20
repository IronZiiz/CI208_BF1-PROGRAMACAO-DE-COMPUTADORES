#include<iostream>
using namespace std; 

#define N 4

void ler_Matriz(int mat[N][N]);
void imprime_Matriz(int mat[N][N]);
void cria_subMatriz(int &mat[N][N], int x, int y ,int l); 

int main(){
    int vet[N][N];
    int x,y,l;

    cout<<"Digite a Matriz:"<<endl;
    ler_Matriz(vet);
    cout<<"Digite x e y:";
    cin>>x>>y; 
    cout<<endl;
    cout<<"Digite l:";
    cin>>l;
    cout<<endl;

    if( l > N || N - x<l && N - y <l )
    {
        cout<<"A submatriz extrapola os limites"<<endl; 
    }
    else{ 
        cria_subMatriz( vet, x,  y , l);
        imprime_Matriz(vet);
    }

    

return 0;
}

void ler_Matriz(int mat[N][N]){
    int i,j;
    for(i = 0; i<N ; i++)
    {
        for(j = 0 ; j<N ; j++)
        {
            cin>>mat[i][j]; 
        }
    }
}

void imprime_Matriz(int mat[N][N])
{
    int i;
    int j;

    for(i = 0; i<N ; i++)
    {
        for(j = 0 ; j<N ; j++)
        {
            
            cout<<mat[i][j]; 
            if( j == N-1)
            {
                cout<<endl; 
            }
        }
    }
}

void cria_subMatriz(int &mat[N][N] , int x, int y ,int l){
   

    int i;
    int j;
    int valorReferencia = mat[x][y];

    for(i = x; i<l ; i++)
    {
        for(j = y ; j<l ; j++)
        {
            mat[x][y] = valorReferencia;
        }
    }
    

}