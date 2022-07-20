#include <cmath> 
#include <iostream>
using namespace std; 

    int main(){

        int n, n1,n2, d,d1,s1 =0, i ,ii; 
        int somaDez, s = 0 ; 
        
        cout<<"Digite um numero de 4 digitos:"; 
        cin>>n; 
        n1 = n; 

            somaDez = (n/100) + (n%100); //soma das dezenas 
            n2 = somaDez;

            cout<<somaDez<<endl;
            i = pow(somaDez, 2); 
            
            cout<<""<<i<<endl; 

                while (n1> 0)
                {
                    d = n1% 10 ; 
                    s += d; 
                    n1 = n1 /10; 
                }
                
            ii = s; 

                while( n2 >0)
                {
                    d1 = n2%10;
                    s1 += d1;
                    n2 = n2/10;
                }
            if(n == i && ii == s1)
            {
                cout<<"O numero:"<<n<<" é especial"<<endl; 
            }else{
                cout<<"O numero não é especial"<<endl;
            }
            
        return 0;
    }