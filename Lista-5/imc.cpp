/*O índice de massa corporal (IMC) é calculado dividindo seu peso em quilogramas pelo
quadrado de sua altura (em metros). A partir deste valor e com a tabela abaixo é possível definir se
a pessoa está no seu peso ideal:

Faça um programa que leia do usuário o peso e altura de vários indivíduos e exiba uma mensagem
indicando a situação de cada um, conforme a tabela acima. O programa termina quando for digitado
um par de valores em que um deles seja nulo.
O cálculo do IMC deve ser feito pela função calcIMC, que recebe como parâmetros o peso e altura
de uma pessoa e retorna o valor do IMC.
Deve também ser criada e usada no programa principal a função exibeSituacao que recebe
como parâmetro um valor de IMC e mostra na tela a mensagem correspondente conforme a tabela.
Esta função não retorna nenhum valor.
*/
#include <iostream> 
using namespace std; 


void exibeSituação(float situação);
void leia(float x, float y); 

float calcIMC(float x, float y);

int main()
{
    float peso; 
    float altura; 
    cout<<"Digite os valores de peso e altura, respectivamente";
    cin>>peso>>altura;
    calcIMC(peso, altura);
    leia(peso, altura);


return 0;
}

void leia(float x, float y)
{
    float peso, altura; 
    cout<<"Digite os valores de peso e altura, respectivamente: ";
    cin>>peso>>altura;
    calcIMC(peso, altura);

    while(peso!= 0 &&  altura !=0 )
    {
        cin>>peso>>altura;
        calcIMC(peso, altura);
    } 
 
}
void exibeSituação(float situação)
{
    if(situação<18)
    {
        cout<<"Você está abaixo do peso normal!"<<endl; 
    }
    if(situação>18 && situação<=24)
    {
        cout<<"Parabéns, você está em seu peso normal!"<<endl; 
    }
    if(situação>24 && situação<=29)
    {
        cout<<"Você está acima de seu peso (sobrepeso)"<<endl;
    }
    if(situação>29 && situação<=34)
    {
        cout<<"Obesidade grau I"<<endl;
    }
    if(situação>34 && situação<=39)
    {
        cout<<"Obesidade grau II"<<endl;
    }
    if(situação>39)
    {
        cout<<"Obesidade grau III"<<endl;
    }
}

float calcIMC(float x, float y)
{
    float imc = x/(y*y);
    exibeSituação(imc);
}