/*(convtempo) Dado um número inteiro que representa uma quantidade de segundos, determinar o
seu valor equivalente em horas, minutos e segundos. Se a quantidade de segundos for insuficiente
para dar um valor em horas, o valor em horas deve ser 0 (zero). A mesma observação vale em
relação aos minutos e segundos. Por exemplo: 3.600 segundos = 1 hora, 0 minutos, 0 segundos. ;
3.500 segundos = 0 horas, 58 minutos e 20 segundos.*/


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