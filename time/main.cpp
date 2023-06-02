#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

int main()
{
    auto now =chrono::system_clock::now();
    time_t end_time = chrono::system_clock::to_time_t(now);
    cout << "Current Time and Date" << ctime(&end_time) << endl;
    return 0;
}
