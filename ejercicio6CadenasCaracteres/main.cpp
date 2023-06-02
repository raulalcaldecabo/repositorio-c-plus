#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    char palabra[]="Raul";
    char name[20];

    cout<<"Escribe tu nombre: ";
    cin.getline(name,20,'\n');

    cout << palabra<< endl;
    cout << name<< endl;

    system("pause");
    return 0;
}
