/*(iddias)  Faça um programa que leia a idade de uma pessoa expressa em anos, meses e dias
 e mostre-a expressa apenas em dias.*/

 #include <cmath>
 #include <iostream>
 using namespace std; 

 int main(){

    int anos, meses, dias; 
    int idadeEmDias;

    cout<<"Expresse sua idade em anos, meses e dias: ";
    cin>>anos;
    cin>>meses; 
    cin>>dias;

    idadeEmDias = dias+ (meses * 30) + (anos * 365); 

    cout<<"Idade expressa apenas em dias: "<<idadeEmDias<<endl; 



    return 0;
 }