#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y, resultado = 0;

    cout<<"a�ada un numero x: "; cin>>x;
    cout<<"a�ada un numero y: "; cin>>y;

    resultado= (sqrt(x))/(pow(y,2)-1);
    cout << "El resultado es: "<< resultado << endl;
    return 0;
}
