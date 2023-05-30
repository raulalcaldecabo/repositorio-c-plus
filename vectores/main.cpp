#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> records(6);
    vector <char> letras;
    vector <double> salarios(350, 2125);

    for(int i=0; i<350; i++){
        cout<< salarios[i] << endl;
    }
    //metodo at() para saber la posicion y el push_back() para agregar valores a un vector
    //metodo erase() e insert() para agregar valores a un vector
}
