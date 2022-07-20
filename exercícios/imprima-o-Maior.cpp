//leia 3 inteiros distintos
//imprima o maior deles 

#include <cmath> //biblioteca matematica 
#include <iostream>
using namespace std; 

int main(){

    int a, b, c, m;

    cout<<"Digite 3 inteiros:"; 
    cin>>a; //Os valores digitados entram nas variaveis 
    cin>>b;
    cin>>c;

    //calculos 

    m = a; 
    
    if(b>m)
    {
        m=b;
    }
    
    if(c>m)
    {
        m=c;
    }

    //saida de dados 
    cout<<"maior:"<<m;

return 0;
}