//leia 3 notas e imprime a media
//peso 4 p/ a maior nota e peso 3 

#include <cmath>
#include <iostream>
using namespace std; 

int main()
{
    int a,b,c,m; 

    cout<<"Digite 3 notas:"; 
    cin>>a;
    cin>>b;
    cin>>c;

    m=a;

    if(b>m)
    {
        m = b;
    }

    if(c > m)
    {
        m = c;
    }

    cout<<"Média:"<<(m + c*3 + b*3 + a*3)/10;

    return 0;
}
