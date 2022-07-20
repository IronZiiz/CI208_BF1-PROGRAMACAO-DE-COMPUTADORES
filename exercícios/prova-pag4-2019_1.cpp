/*
Imagine uma máquina caça-níqueis que mostra
3 cilindros que giram aleatoriamente ao se puxar
uma alavanca e quando param de girar mostram
cada um uma determinada fruta: maçã, abacaxí,
laranja e banana.
A máquina recebe uma aposta e após a parada
dos cilindros, devolve um valor conforme a tabela
abaixo:

cilindros                            valor devolvido
banana-banana-banana                 10× aposta
2 bananas em qualquer                posição 5× aposta
uma única banana em qualquer         aposta
posição 

Obviamente, se uma determinada configuração
fizer jus a diversos prêmios, apenas o maior será
pago.
Escreva um programa C++ que receba 3 números
inteiros, correspondendo às frutas que apareceram no visor (maçã=1, abacaxí=2, laranja=3 e
banana=4) e um número real, correspondendo ao
valor da aposta. O programa deve então calcular
e imprimir o valor devolvido, ou se este inexistir
mande a mensagem "TENTE DE NOVO".
*/

#include <iostream> 
using namespace std; 

int main()
{
    int n1, n2, n3; //frutas
    float aposta = 0;

    cout<<"Digite o valor dos 3 numeros que aparecem no visor\nSendo:\n 1 = maça\t2 = abacaxi\t3 = laranja\t 4 = banana\n"<<endl;
    cin>> n1; 
    cin>> n2; 
    cin>> n3; 

    cout<<"Digite o valor da aposta:"<<endl; 
    cin>>aposta; 
    if(n1 == 4 && n2 == 4 && n3 == 4);
    {
        cout<<"Valor devolvido: "<<aposta*10<<endl; 
    }
    if(n1 == 4 && n2 == 4 && n3 !=4|| n1 == 4 && n3 ==4 && n2!=4 || n1!= 4 && n2 == 4 && n3 ==4)
    {
        cout<<"Valor devolvido: "<<aposta*5<<endl; 
    }
    if(n1 == 4 && n2!= 4&& n3!=4 || n1!= 4 && n2 == 4 && n3!=4 || n1!= 4 && n2 != 4 && n3 == 4)
    { 
        cout<<"Valor devolvido: "<<aposta<<endl; 
    }
return 0; 
}