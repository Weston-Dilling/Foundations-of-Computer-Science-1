#include <iostream>
using namespace std;

int main ()
{

    cout << 13 % 8 << endl
     << 343298 % 10 << endl
     << 13 % 5 << endl
     << 0 % 456 << endl
     << 0 % 18 << endl
     << 13 / 2 - 3 << endl
     << 3.4 * 2 << endl
     << 12.0 / 4 << endl
     << (6 + 122) % 2 -1 << endl
     << 12 / (18/5) << endl;

    int cars = 8;
    int trucks = 3;
    int buses = 1;
    int vans = 24;
    int count = 3;

    cars += count;
    trucks += trucks + buses;
    buses *= 4;
    ++buses;
    vans = vans / buses;

    cout << cars << endl
    << trucks << endl
    << buses << endl
    << vans << endl;

    return 0;
}
