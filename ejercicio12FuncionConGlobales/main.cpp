#include <iostream>
#include <conio.h>
using namespace std;

//prototipo de funcion
void pedirDatos();
void mult(float x, float y);

float num1, num2;

int main()
{
    pedirDatos();
    mult(num1, num2);

    getch();
    return 0;
}
//definición de la función
void pedirDatos(){
    cout<<"Escriba dos numeros decimales: ";
    cin>>num1>>num2;
}
void mult(float x, float y){
    float resultado= x*y;

    cout<<"El resultado es: "<<resultado<<endl;
}
