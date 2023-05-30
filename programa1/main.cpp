#include <iostream>
#include <chrono>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    auto start = chrono::system_clock::now();

    // Haz algo de trabajo
    for (int i = 0; i < 10000000; i++) {}

    auto end = chrono::system_clock::now();

    chrono::duration<double> elapsed_seconds = end - start;
    cout << "Elapsed Time: " << elapsed_seconds.count() << " sec" << endl;

    int salario = 3500;

    cout << salario << endl;


}
