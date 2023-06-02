#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y, resultado = 0;

    cout<<"añada un numero x: "; cin>>x;
    cout<<"añada un numero y: "; cin>>y;

    resultado= (sqrt(x))/(pow(y,2)-1);
    cout << "El resultado es: "<< resultado << endl;
    return 0;
}
