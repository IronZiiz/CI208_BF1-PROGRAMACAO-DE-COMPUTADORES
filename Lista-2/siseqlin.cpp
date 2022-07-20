/*(siseqlin) Um sistema de equações lineares do tipo
ax + by = c
dx + ey = f
pode ser resolvido segundo mostrado abaixo :

Escreva um programa que lê os coeficientes a, b, c, d, e, f e calcula e mostra os valores de x e y.
Caso não seja possível o cálculo, exibir mensagem indicando o fato.*/

#include <cmath>
#include <iostream>
using namespace std; 

int main(){

    int x,y;
    int a,b,c,d,e,f;

    cout<<"Digite os valores de a, b, c, d, e, f:";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f; 

    if(a*e - b*d == 0){
        cout<<"Não é possivel calcular X";
        return 0; 
    }else{
        cout<<"X é : "<<(c*e - b*f)/(a*e-b*d)<<endl; 
    }

    if(a*e - b*d == 0)
    {
        cout<<"Não é possivel calcular y";
        return 0;
    }else{
        cout<<"y é : "<<(a*f - c*d)/(a*e-b*d)<<endl; 
    }
}
