#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, x=0, y=1, z=1;
    cout << "Inserte un n�mero: "; cin>>n;

    for(int i=1; i<=n;i++){
        z= x+y;
        cout<<z<< " ";
        x=y;
        y=z;

    }

    cout << "\n";
    system("pause");
    return 0;

    //hola jula
}
