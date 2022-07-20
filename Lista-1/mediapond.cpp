/*(mediapond) Faça um programa que leia as 3 notas de um aluno e calcule a média final deste
aluno. Considerar que a média é ponderada e que o peso das notas é, respectivamente, 2, 3 e 5.*/

/*(mediapond)  Faça um programa que leia as 3 notas de um aluno e calcule a média final deste aluno. 
Considerar que a média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente.*/

#include <cmath>
#include <iostream> 

using namespace std; 

int main()
{
int N1, N2, N3; 
int media;

cout<<"Leia 3 notas de um aluno:";
cin>>N1; 
cin>>N2;
cin>>N3; 

N1 = N1*2;
N2 = N2*3;
N3 = N3*5; 

media = (N1+N2+N3)/3;

cout<<"Media ponderada das notas: "<< media; 
return 0; 
}

