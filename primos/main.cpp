#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number;
    bool prime = true;

    cout << "Introduce un numero positivo: ";
    cin >> number;

    for (int i=2; i<=number/2; i++){
        if(number%i==0){
            prime = false;
            break;
        }
    }

    if( prime){
        cout<< number << " es primo"<<endl;
    }
    else{
        cout << number << "   NO es primo" <<endl;
    }
}
