#include <iostream>
#include <stdlib.h>
using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1={"Raul", 40},
persona2={"pepi", 25};

int main()
{
    struct Persona persona3;
    cout<<"nombre: ";
    cin.getline(persona3.nombre, 20,'\n');
    cout<<"Edad: ";
    cin>>persona3.edad;

    cout<<"nombre1: "<<persona1.nombre<<endl;
    cout<<"edad1: "<<persona1.edad<<endl;

    cout<<"nombre2: "<<persona2.nombre<<endl;
    cout<<"edad2: "<<persona2.edad<<endl;

    cout<<"nombre3: "<<persona3.nombre<<endl;
    cout<<"edad3: "<<persona3.edad<<endl;

    system("pause");
    return 0;
}
