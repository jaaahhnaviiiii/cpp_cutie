#include <iostream>
using namespace std;

int main()
{
    int x{2147483647};      // max value of 4 byte signed int
    cout << x << '\n';      // ok
    x = x + 1;
    cout << x << '\n';      // undefined behavior, since overflow, wrap around. -2147483648

    cout << 20 / 4 << '\n';
    cout << 22 / 4 << '\n'; // produces only integer result. 5

    return 0;
}