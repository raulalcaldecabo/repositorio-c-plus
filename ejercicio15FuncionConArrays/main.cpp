#include <iostream>
#include <conio.h>
using namespace std;

//prototipo de funcion
void cuadrado(int vec[], int);
void pintar(int vec[], int);

int main()
{
    //el vector debe ser siempre constante
    const int TAM=5;
    int vec[TAM]={1,2,3,4,5};

    cuadrado(vec,TAM);
    pintar(vec,TAM);


    getch();
    return 0;
}
//definición de la función
void cuadrado(int vec[], int tam){
    for(int i=0;i<tam;i++){
        vec[i] *= vec[i];
    }

}

void pintar(int vec[], int tam){
    for(int i=0;i<tam;i++){
        cout<<vec[i]<<" ";
    }
}
