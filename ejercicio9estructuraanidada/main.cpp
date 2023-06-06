#include <iostream>
#include <conio.h>
using namespace std;

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio notas;
} alumno1;

int main()
{
    float promedioAlumno;

    fflush(stdin); //vacía el buffer
    cout<<"nombre: ";
    cin.getline(alumno1.nombre,20,'\n');
    cout<<"sexo: ";
    cin.getline(alumno1.sexo,30,'\n');
    cout<<"Edad: ";
    cin>>alumno1.edad;

    cout<<"nota 1: ";
    cin>>alumno1.notas.nota1;
    cout<<"nota 2: ";
    cin>>alumno1.notas.nota2;
    cout<<"nota 3: ";
    cin>>alumno1.notas.nota3;

    promedioAlumno = (alumno1.notas.nota1+alumno1.notas.nota2+alumno1.notas.nota3)/3;

    cout<<"Los datos del alumno son: "<<endl;

    cout<<"nombre: "<<alumno1.nombre<<endl;
    cout<<"sexo: "<<alumno1.sexo<<endl;
    cout<<"edad: "<<alumno1.edad<<endl;
    cout<<"promedio de notas: "<<promedioAlumno<<endl;


    getch();
    return 0;
}
