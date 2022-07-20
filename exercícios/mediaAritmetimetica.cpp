/*Escreva um programa em C++ para: 
.ler a quantidade de provas 
.ler as 3 notas
.imprimir a média aritmetica 
.verificar as entradas emitindo saídas de erro conforme exemplos
--Exemplo 1: Digite quantas provas: 4 Desculpe encerrar Meu programa 
só funciona para 3 provas 

--Exemplo 2: Digite quantas provas: 2 Desculpe encerrar Meu 
programa só funciona para 3 provas

--Exemplo 3: Digite quantas provas: 3 Digite 3 notas: 
100 90 84 Media das 3 provas = 91.3333 

--Exemplo 4: Digite quantas provas: 
3 Digite 3 notas: 120 100 100 Desculpe encerrar. Meu programa só funciona para
 notas entre 0 e 100*/

 #include <iostream>
 using namespace std; 

 int main(){

    int nota1, nota2, nota3, nProvas;
    float media; 

    cout<<"Digite quantas provas"<<endl;
    cin>>nProvas;

    if(nProvas==3)
    {
        cout<<"Digite 3 notas:";
        cin>>nota1;
        cin>>nota2; 
        cin>>nota3;
        
        if(nota1 >= 0 && nota2 >= 0 && nota3 >= 0 && nota1<=100 && nota2<=100 && nota3<=100)
        {
            media = (nota1 + nota2 + nota3)/nProvas;
        
            cout<<"Media das "<< nProvas<<" provas é:"<<media<<endl; 

        }else{
            cout<<"Desculpe, so trabalhamos com valores maiores ou iguais a 0 e menores iguais a 100"<<endl;
            return 2;
        }

    }else{ 
    cout<<"Desculpe, mas o meu programa só funciona para 3 provas"<<endl; 
    return 1;
    }
    
//declarar 4 variaveis de valores inteiros: nota1, nota2, nota3, contador; 
//declarar 1 variavel de valor flutuante: media; 
//captura de dados
//estruturas condicionais nao deixar capturar mais do que 3 notas 
//estruturas condicionais para nao deixar digitar notas maiores do que 100 e menores que 0





    return 0;
 }