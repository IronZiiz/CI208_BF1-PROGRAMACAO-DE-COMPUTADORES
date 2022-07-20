//Insira um numero e diga se ele é primo 

#define TAM 9
#include <iostream>
using namespace std;

    int main()
    {
        int contador = 0; 
        int n; 
        int divisores = 0; 

        cout<<"Insira  um numero:";
        cin>> n; 

        while ( contador < TAM)
        {
            contador++;
            if((n%contador) == 0)
            {
                divisores++; 
            }
        }
        
        if(divisores == 2)
        {
            cout<<"É primo!"<<endl; 
        }else{
            cout<<"Não é primo!"<<endl;
        }


    return 0;
    }
    