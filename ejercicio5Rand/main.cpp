#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int numero, dato, contador=0;

    srand(time(NULL));
    dato=1+rand()%(100);

    do{
        cout<<"escriba un numero "; cin>>numero;
        if(numero>dato){
            cout<<"\nescriba un numero menor\n";
        }
        if(numero<dato){
            cout<<"\nescriba un numero mayor\n";
        }
        contador++;
    }while(numero != dato);

    cout<<"\nacertaste tras "<<contador<<" intentos"<<endl;

    system("pause");
    return 0;
}
