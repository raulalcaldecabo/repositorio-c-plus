#include <iostream>
#include <conio.h>
using namespace std;

//prototipo de funcion
void calcular(int, int, int&, int&);

int main()
{
    int num1, num2, suma=0, producto=0;

    cout<<"Escriba dos numeros: ";
    cin>>num1>>num2;

    calcular(num1,num2, suma, producto);
    cout<<"El valor de la suma es: "<<suma<<endl;
    cout<<"El valor del producto es: "<<producto<<endl;

    getch();
    return 0;
}
//definici�n de la funci�n
void calcular(int num1, int num2, int& suma, int& producto){//pasamos la direcci�n de memoria donde est�n las variables
    suma= num1+num2;
    producto=num1*num2;
}
