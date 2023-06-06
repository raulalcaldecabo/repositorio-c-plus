#include <iostream>
#include <conio.h>
using namespace std;

//prototipo de funcion
void mostrarMatriz(int m[][3], int, int); //siempre hay que indicar las columnas en matrices
void cuadrado(int m[][3], int, int);

int main()
{
    const int NFILAS=2;
    const int NCOL=3;
    int m[NFILAS][NCOL]={{1,2,3},{4,5,6}};

    mostrarMatriz(m,NFILAS,NCOL);
    cuadrado(m,NFILAS,NCOL);
    mostrarMatriz(m,NFILAS,NCOL);

    getch();
    return 0;
}
//definición de la función
void mostrarMatriz(int m[][3], int nfilas, int ncol){
    cout<<"mostrando matriz: "<<endl;
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void cuadrado(int m[][3], int nfilas, int ncol){
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol;j++){
           m[i][j]*=m[i][j];
        }
    }
}
