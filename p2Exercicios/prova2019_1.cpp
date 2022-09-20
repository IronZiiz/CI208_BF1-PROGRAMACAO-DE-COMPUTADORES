#include<iostream>
using namespace std;

#define N 7

void imprimeVetor(int vet []); 
void leVetor(int vet[]);
void criaVetorZ(int vet[], int vet1[], int vet2[]);
void encontraSegundoMaior(int vet[]); 
void imprime2Maior(int x, int y); 

int main()
{

    int vetX[N];
    int vetY[N];
    int vetZ[N]; 

    cout<<"Informe o Vetor X:";
    leVetor(vetX);

    cout<<"Informe o Vator Y:"; 
    leVetor(vetY); 

    criaVetorZ(vetZ, vetX, vetY); 
    cout<<"Z:";
    imprimeVetor(vetZ); 
    encontraSegundoMaior(vetZ); 

    return 0;
}

void imprimeVetor(int vet [])
{
    int i; 

    for(i = 0; i< N ; i++)
    { 
        cout<<vet[i]<<' '; 

    }
    cout<<endl;
}

void leVetor(int vet[])
{
    int i; 

    for(i = 0; i< N ; i++)
    { 
        cin>>vet[i]; 
    }

    cout<<endl; 
}

void criaVetorZ(int vet[], int vet1[], int vet2[])
{
    int i; 

    for(i = 0; i < N; i++)
    {
        if(vet1[i] > vet2[i] )
        {
            vet[i] = vet1[i];
        }
        else{ 
            vet[i] = vet2[i]; 
        }
    }

}

void encontraSegundoMaior(int vet[])
{
    int i; 
    int maior;
    int segundoMaior; 

    int indiceMaior; 
    int indiceSegundoMaior; 

    maior = vet[0]; 
    segundoMaior = vet[0]; 
    indiceMaior = 0; 
    for(i = 1; i < N; i++)
    { 
        if ( vet[i] > maior)
        {

            segundoMaior = maior; 
            maior = vet[i]; 
            cout<<segundoMaior<<endl; 
            cout<<maior<<endl; 

            indiceSegundoMaior = indiceMaior;  
            indiceMaior= i;
            
        }
        if(vet[i]< maior && vet[i]> segundoMaior)
        {
            segundoMaior = vet[i]; 
            indiceSegundoMaior = i ;
        }
        
        
    }
    imprime2Maior(segundoMaior, indiceSegundoMaior); 
}
void imprime2Maior(int x, int y ){
    cout<<"2º maior valor em Z: "<<x<<"(indece "<<y<<")"; 
} 
