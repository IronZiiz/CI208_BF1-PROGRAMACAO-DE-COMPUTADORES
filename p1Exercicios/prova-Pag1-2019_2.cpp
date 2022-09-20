/*Questão 2 (50 pontos)
Bettina está montando uma poupança para a sua
aposentadoria e você deve fazer um programa em
C++ para auxiliá-la nesta tarefa. Seu programa
deve ler um valor real positivo, que é o aporte inicial do investimento, e, em seguida, uma sequencia
de valores reais positivos que são os aportes mensais. Para cada mês deve-se calcular o valor total do
investimento, acrescendo ao valor do mês anterior
uma porcentagem de rendimento, mais o aporte do
mês corrente. A instituição financeira de Bettina
fornece duas
 opções de rendimentos: 
0.39%, se o
aporte do mês corrente for menor que R$ 300,00;
ou 0.41% no caso contrário (uma bonificação para
aportes mensais mais altos). Por exemplo, se o valor do investimento
 está em R$ 50000,00 e Bettina efetua um aporte de R$ 450,00, o valor total
desse mês passa a ser R$ 50000,00 + (0.41% de
50000,00) + R$ 450,00 = R$ 50655,00. A sequência de aportes mensais termina com o valor -1, que
não deve ser considerado como um aporte válido.
A cada mês seu programa deve imprimir o valor total do investimento.
Exemplo de execução:
Primeiro aporte: 50000
Aporte mensal: 450
total = 50655
Aporte mensal: 175.50
total = 51028.1
Aporte mensal: 300
total = 51537.3
Aporte mensal: -1*/

#include <iostream>
using namespace std; 

int main(){ 
 
    float aporteM = 0;
    float investimento = 0; 
    

    cout<<"Digite o primeiro aporte:"<<endl; 
    cin>>investimento; 

    while(aporteM != -1)
    {
        cout<<"Aporte mensal:";
        cin>>aporteM; 

            if(aporteM < 300)
            {
                investimento += investimento*0.0039 + aporteM; 
            }else{
                investimento += investimento*0.0041 + aporteM;
            }
        cout<<"Aporte mensal: "<<aporteM<<endl;
        cout<<"Total: "<<investimento<<endl;
    } 

    return 0; 
}

