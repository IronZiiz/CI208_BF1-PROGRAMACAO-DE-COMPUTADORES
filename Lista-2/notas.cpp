/*(notas) Escreva um programa que leia o código de um aluno e suas três notas. Calcule a média
ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3.
Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a
média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5.*/

#include <cmath> 
#include <iostream>
using namespace std; 

    int main() 
    {
        int n1, n2, n3, maior, mediaPond; 

        cout<<"Digite 3 notas:";
        cin>>n1; 
        cin>>n2; 
        cin>>n3; 

        if(n1>n2 && n1>n3)
        {
            mediaPond = (n1*4 + n2*3 + n3*3)/10;
            cout<<"Maior: "<<n1<<endl<<"Nota2: "<<n2<<endl<<"Nota3: "<<n3<<endl;
            cout<<"Media ponderada: "<<mediaPond<<endl;
            if(mediaPond>=5){
                cout<<"APROVADO!!";
            }else{
                cout<<"REPROVADO!!";
            }


        }
        if(n2 > n1 && n2 > n3)
        { 
            mediaPond = (n2*4 + n1*3 + n3*3)/3;
            cout<<"Maior: "<<n2<<endl<<"Nota1: "<<n1<<endl<<"Nota3: "<<n3<<endl;
            cout<<"Media ponderada: "<<mediaPond<<endl;
            if(mediaPond>=5){
                cout<<"APROVADO!!";
            }else{
                cout<<"REPROVADO!!";
            }
 
        }

        if(n3 > n1 && n3 >n2)
        {
            mediaPond = (n3*4 + n2*3 + n1*3)/3;
            cout<<"Maior: "<<n3<<endl<<"Nota1: "<<n1<<endl<<"Nota2: "<<n2<<endl;
            cout<<"Media ponderada: "<<mediaPond<<endl;
            if(mediaPond>=5){
                cout<<"APROVADO!!";
            }else{
                cout<<"REPROVADO!!";
            }

        }

    return 0;
    }