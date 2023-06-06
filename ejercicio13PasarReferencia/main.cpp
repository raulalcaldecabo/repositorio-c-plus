#include <iostream>
#include <conio.h>
using namespace std;

//prototipo de funcion
void valnuevo(int&, int&);

int main()
{
    int num1, num2;

    cout<<"Escriba dos numeros: ";
    cin>>num1>>num2;

    valnuevo(num1,num2);
    cout<<"El valor del primer numero es: "<<num1<<endl;
    cout<<"El valor del segundo numero es: "<<num2<<endl;

    getch();
    return 0;
}
//definición de la función
void valnuevo(int& xnum, int& ynum){//pasamos la dirección de memoria donde están las variables
    cout<<"El valor del primer numero es: "<<xnum<<endl;
    cout<<"El valor del segundo numero es: "<<ynum<<endl;

    xnum=33;
    ynum=56;
}
