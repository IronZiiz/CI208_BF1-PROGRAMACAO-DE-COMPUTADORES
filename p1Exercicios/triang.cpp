/*Insira 3 valores e confime que é um triangulo. Depois diga se é escaleno , isosceles ou equilatero.*/

#include <iostream> 
using namespace std; 
    int main(){
        int a,b,c; //Lados do triangulo 

        cout<<"Digite os lados do triangulo:"<<endl; 
        cin>>a; 
        cin>>b;
        cin>>c; 

        //determinando a existencia do triangulo 
        if(a < (b+c)||  b<(a+c) || c<(a+b))
        {
            if(a == b && a == c)
            { 
                cout<<"O triangulo existe e é equilatero"<<endl;
            }
            if(a == b && a!= c || a!=b && a==c)
            {
                cout<<"O triangulo existe e é isosceles"<<endl; 
            }
            if(a!=b && a!=c)
            {
                cout<<"O triangulo existe e é escaleno"<<endl; 
            }
        }else{
            cout<<"O triangulo não existe, então não é possivel comparar seus lados:";
            return 1; 
        }
    return 0;
    }