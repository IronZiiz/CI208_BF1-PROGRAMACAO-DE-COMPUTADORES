#include <cmath>
#include <iostream>
using namespace std; 

int main()
{
    int pe; //peso inicial emerganda 
    int te; //razão de peso emerganda
    int pa; //peso inicial afranio
    int ta; //razão de peso afranio
    int n1,n2,n;

    cout<<"Digite o peso inicial de emerganda:";
    cin>>pe;
    cout<<"peso inicial ermenganda:"<<pe<<endl;

    cout<<"Digite a razão de peso emerganda:";
    cin>>te;
    cout<<"razão de peso emerganda"<<te<<endl;

    cout<<"Digite o peso inicial de afranio:";
    cin>>pa;
    cout<<"peso inicial ermenganda:"<<pa<<endl;

    cout<<"Digite a razão de peso afranio:";
    cin>>ta;
    cout<<"razão de peso afranio;"<<ta<<endl;

    n1 = pe-pa+ta-te;
    n2 = ta-te;
    n = n1/n2; 

    cout<<"Numero de anos necessário:"<<n+1<<endl;

    cout<<"Peso de Ermenganda atualmente: "<< (n)*te+pe<<endl;
    cout<<"Peso de Afranio atualmente"<< (n)*ta+pa<<endl; 
    


return 0;
}