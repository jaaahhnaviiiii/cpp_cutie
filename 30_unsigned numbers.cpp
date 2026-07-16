#include <iostream>
using namespace std;

int main()
{
    unsigned short x{65535}; //max 2 byte unsigned value
    
    cout << x << '\n'; // ok
    x = x+1;
    cout << x << '\n'; //wrap around since overflow, out of range. 0
    x = x+1;
    cout << x << '\n'; //same. 1

    x = -1;
    cout << x << '\n'; //same. 65535
    x = -2;
    cout << x << '\n'; //same. 65534

    return 0;

}