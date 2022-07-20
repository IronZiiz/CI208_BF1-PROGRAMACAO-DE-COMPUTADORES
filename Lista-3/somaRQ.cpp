//Escreva um programaa que leia do teclado um valor n> 0 e escreva na tela os valor raiz de 1 ..... raiz de n 

#include <cmath> 
#include <iostream> 
using namespace std; 

int main()
{
    int n, contador=0; 

    cout<<"Digite um numero: "; 
    cin>>n; 

    while (contador <n)
    {
        contador++;
        cout<<" "<<sqrt(contador); 
    }
    

return 0;
}