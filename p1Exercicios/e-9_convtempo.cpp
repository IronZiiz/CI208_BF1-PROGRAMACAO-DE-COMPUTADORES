/*(convtempo)  Faça um programa que leia o tempo de fabricação de um carro em uma fábrica de 
automóveis expressa em segundos e mostre-o expresso em horas, minutos e segundos.*/

#include <cmath>
#include <iostream> 

using namespace std; 

int main(){

    int segundosFabrica;
    int horas; 
    int minutos; 
    int segundos; 


    cout<<"Digite o tempo de fabricação de um carro em segundos:";
    cin>>segundosFabrica;

    horas  = segundosFabrica/3600; 
    minutos=(segundosFabrica%3600)/60; 
    segundos=(segundosFabrica%3600)%60;

    cout<<"Horas: "<<horas<<endl<<"Minutos: "<<minutos<<endl<<"Segundos: "<<segundos<<endl; 



    return 0; 
}