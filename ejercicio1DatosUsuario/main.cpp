#include <iostream>

using namespace std;

int main()
{
    int edad;
    char sexo[10];
    float altura;
    cout << "Inserta tu edad: " << endl;
    cin>> edad;
    cout << "Inserta tu sexo: " << endl;
    cin>> sexo;
    cout << "Inserta tu altura: " << endl;
    cin>> altura;

    cout << "Tu edad es: "<<edad<< endl;
    cout << "Tu sexo es: "<<sexo<< endl;
    cout.precision(3);
    cout << "Tu altura es: "<<altura<< endl;

    return 0;
}
