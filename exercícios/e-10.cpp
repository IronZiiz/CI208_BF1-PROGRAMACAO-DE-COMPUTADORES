/*(custocarro)  O custo ao consumidor de um carro novo é a soma do custo de fábrica com 
a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a
percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um programa que leia 
o custo de fábrica de um carro e escreva o custo ao consumidor.*/

#include <cmath> 
#include <iostream>
using namespace std;


int main()
{

    int custoDeFabrica; 

    cout<<"Digite o custo de fabrica: "; 
    cin>>custoDeFabrica;

    cout<<"Custo ao consumidor: "<<custoDeFabrica+(0.28*custoDeFabrica) +(0.45*custoDeFabrica)<<endl;

    return 0;
}


