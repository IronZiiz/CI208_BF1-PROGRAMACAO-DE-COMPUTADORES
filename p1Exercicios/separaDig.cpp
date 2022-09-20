/*Digite um numero de n digitos e diga quantos algarismos deste são pares*/

#include <iostream>
using namespace std ;

    int main(){
        int n; 
        int d;
        int contaPares=0;

        cout<<"Digite um numero de n digitos:"; 
        cin>>n; 


        while (n>0 )
        {
            d = n%10; 
            n = n/10;

            if( d % 2 == 0 ){
                contaPares++; 
            }
        }
        
        cout<<"Existem:"<<contaPares<<" pares nesse numero"<<endl; 

        return 0;
    }