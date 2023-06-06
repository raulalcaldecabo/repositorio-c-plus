#include <iostream>
#include <conio.h>
using namespace std;

//prototipo de funcion
int encontrarMax(int x, int y);

int main()
{
    int n1,n2;

    cout<<"escribe dos numeros: ";
    cin>>n1>>n2;

    cout<<"El mayor de los numeros es: "<<encontrarMax(n1,n2)<<endl;
    getch();
    return 0;
}
//definición de la función
int encontrarMax(int x, int y){
    int maximo;
    if(x>y){
        maximo=x;
    }
    else{
        maximo=y;
    }
    return maximo;
}
