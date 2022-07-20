/*Escreva um programa em C++ que receba como
entrada uma sequência de pares de inteiros (n1, n2)
e escreva o resultado da expressão (x² + 3y − 10).
Na expressão, x é o maior valor do par (n1, n2) e
y é o menor valor do par. O programa deve parar
quando o resultado da expressão for zero.
Exemplo de execução:
Digite par de inteiros: 2 3
Resultado: 5
Digite par de inteiros: 5 2
Resultado: 21
Digite par de inteiros: 5 5
Resultado: 30
Digite par de inteiros: 4 -2
Resultado: 0*/

#include <cmath>
#include <iostream> 
using namespace std; 

int main()
{
    int n1, n2; 
    int maior;
    int menor;
    int resultado; 

    while(resultado != 0)
    {
    cout<<"Digite um par de numeros:"<<endl; 
    cin>>n1;
    cin>>n2;
        if(n1 > n2)
        { 
            maior = n1; 
            menor = n2;
            resultado = pow(maior, 2) + 3*menor-10; 
            cout<<"Resultado: "<<resultado<<endl; 
        }else
        {
            maior = n2; 
            menor = n1; 
            resultado = pow(maior, 2) + 3*menor -10; 
            cout<<"Resultado: "<<resultado<<endl; 
        }

    }    

return 0; 
}