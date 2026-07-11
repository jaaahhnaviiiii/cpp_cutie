#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x - y; // semantic error: programmer doesn't get what she wants
}

int main()
{
    cout << "5+2: " << add(5, 2) << '\n'; // programmer wanted 7 as result but got 3
    return 0;
}
/*Output:
5+2: 3 (which is wrong, but compiler wont say that)*/