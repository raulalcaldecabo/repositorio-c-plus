#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    const string name="Paco";
    int age {25};
    double salary;

    cout<< "Introduce el salario: ";
    cin>> salary;

    cout<< "Introduce la edad de este: ";
    cin>> age;

    cout<<"-------------------------------------------------------------------------------------------"<<endl;

    cout<<"Datos del empleado: " <<endl;
    cout<<"Nombre: " << name <<". Edad: "<< age <<". salario: "<< salary << endl;


}
