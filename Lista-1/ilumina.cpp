/*(ilumina) Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2
deve-se usar 18W de potência. Faça um programa que recebe as duas dimensões de um cômodo
(em metros), calcule e mostre a sua área (em m2) e a potência de iluminação em watts que deverá
ser usada.*/

#include <cmath>
#include <iostream> 
using namespace std;  


int main() {

    int h , w; 
    int a; 

    cout<<"digite duas dimensões:";
    cin>>h; 
    cin>>w; 

    a  = h * w; 

    cout<<"Deve-se ser usada: "<<a*18<<"W de potencia"<<endl; 

return 0; 
}