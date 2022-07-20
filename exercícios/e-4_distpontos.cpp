/* Construa um programa que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1)
 e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é*/

 #include <cmath>
 #include <iostream>
 using namespace std;

 int main()
 {

    int x1, y1; //ponto 1 
    int x2, y2; //ponto 2
    float distancia; 
    float distanciaPow;

    cout<<"Digite os valores de x1 e x2:";
    cin>> x1; 
    cin>> x2; 
    
    cout<<"Digite os valores de y1 e y2:";
    cin>>y1;
    cin>>y2; 

    distanciaPow= pow((x2-x1),2) + pow(y2-y1,2);
    distancia =sqrt(distanciaPow);
    cout<<"Distancia entre eles:"<<distancia;



    return 0 ;
 }