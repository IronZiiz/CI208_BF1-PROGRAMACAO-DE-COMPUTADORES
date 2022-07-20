/*(idanos) Faça um programa que leia a idade de uma pessoa expressa em dias e mostre-a expressa
em anos, meses e dias. Considere que os anos tem 365 dias e os meses são todos de 30 dias.*/

#include <cmath>
#include <iostream> 
using namespace std; 

int main(){ 

    int idadeEmDias;
    int anos; 
    int meses; 
    int dias; 


    cout<<"Expresse a idade em dias:";
    cin>>idadeEmDias;

    anos = idadeEmDias/365; 
    meses = (idadeEmDias%365)/30; 
    dias = (idadeEmDias%365)%30; 

    cout<<"Anos: "<<anos<<endl<<"Meses: "<<meses<<endl<<"Dias: "<<dias<<endl;
    

    return 0; 
}