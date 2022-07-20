/*(achamaior) Escreva um programa que leia 3 números inteiros e mostre o maior deles.*/

#include<cmath>
#include<iostream>
using namespace std; 

int main (){

    int n1,n2,n3,m;

    cout<<"Digite o valor de 3 inteiros:";
    cin>>n1;
    cin>>n2;
    cin>>n3; 

    n1 = m; 

    if (n2 > m)
    {
        m =n2;
    }

    if (n1 > m)
    {
        m = n1;
    }

    if (n3 > m)
    {
        m = n3;
    }

    cout<<"maior valor:"<<m<<endl;


    return 0;
}