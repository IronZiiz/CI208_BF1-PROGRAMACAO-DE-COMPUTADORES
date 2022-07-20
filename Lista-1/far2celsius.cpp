/*Converter uma temperatura expressa em Farenheit (F) para Celsius (C). */

#include <cmath>
#include <iostream>
using namespace std; 

int main(){

    int tempFar; 
    int tempCel;


    cout<<"Digite a temperatura em farenheit:";
    cin>>tempFar; 

    tempCel = 5/9*(tempFar - 32); 

    cout<<"Temperatura convertida de Farenheit para celsius: "<<tempCel<<endl; 

return 0;
}