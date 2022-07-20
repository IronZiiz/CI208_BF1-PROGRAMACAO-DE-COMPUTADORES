/*Escreva um programa em C++ que receba como
entrada três números inteiros e responda em que
situação estes números estão. Se estão em ordem 
crescente (todos distintos) responda CRESCENTE.
 Se estão em ordem decrescente (todos distintos) 
responda DECRESCENTE. Caso contrário
responda OUTRA.
Exemplo de execução:
Informe três valores: 1 2 3
CRESCENTE
Outro exemplo de execução:
Informe três valores: 1 5 2
OUTRA
Outro exemplo de execução:
Informe três valores: 4 2 -1
DECRESCENTE*/

#include <iostream>
using namespace std; 

int main()
{

    int n1, n2, n3; 

    cout<<"Digite 3 numeros:"<<endl; 
    cin>>n1; 
    cin>>n2;
    cin>>n3; 

    if(n1<n2 && n2<n3)
    { 
        cout<<"CRESCENTE"<<endl;
    }
    else if(n1>n2 && n2>n3)
    {
        cout<<"DECRESCENTE"<<endl; 
    }

    else {
        cout<<"OUTRA"<<endl;
    }
    
    
    return 0; 
}