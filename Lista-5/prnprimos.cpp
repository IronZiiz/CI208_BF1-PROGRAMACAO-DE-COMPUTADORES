/*(prnprimos) Fazer uma função chamada ehPrimo() que receba como parâmetro um número
inteiro e retorne 1 (um) se ele é primo ou 0 (zero), caso contrário.
Faça também um programa que, usando esta função, imprima na tela todos os números primos entre
dois valores A e B em diversas linhas com 10 valores cada. Os valores A e B devem ser informados
pelo usuário no início da execução do programa.*/
#define TAM 9
#include <iostream> 
using namespace std; 

void imprime( int x)
{

        if(x == 2)
        {
            cout<<"1"<<endl; 
        }else{
            cout<<"0"<<endl;
        }

}

int ehPrimo(int n)
{
    int contador= 0;
    int divisores=0;
    while ( contador < TAM)
        {
        contador++;
            if((n%contador) == 0)
            {
                divisores++; 
            }
        }
        imprime(divisores);
}

int main()
{
    int Num; 
    cin>>Num; 

    ehPrimo(Num); 

    return 0;
}