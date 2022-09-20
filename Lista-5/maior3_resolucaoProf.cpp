//Mesma coisa que o segundo exercicio so que feito do jeito do professor 

#include <iostream>
using namespace std; 

int maior(int a, int b, int c);

int main() 
{
    int n1,n2,n3,m;
    cout<<"Digite inteiros positivos (termine c/zero):"<<endl;
    cin>>n1>>n2>>n3; 
    m = maior(n1, n2, n3);

    while(true)
    {
        n1 = m; 

        cin>> n2;
        if(n2==0){
            break; 
        }

        cin>>n3;
        if(n3 == 0)
        {
            m = maior(n1,n2,n3);
            break; 
        } 
        m = maior(n1,n2,n3);
    }
    cout<<"maior ="<<m<<endl;
    return 0;
}

int maior(int a, int b, int c)
{
    int m = a;
    if(b>m)
    {
        m = b; 
    }

    if(c>m)
    {
        m = c; 
    }

    return m;
}