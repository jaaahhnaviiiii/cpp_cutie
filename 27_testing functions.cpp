#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

void testadd()
{
    cout << "This function should print: 2 0 0 -2\n";

    cout << add(1,1) << " ";
    cout << add(-1,1) << " ";
    cout << add(1,-1) << " ";
    cout << add(-1,-1) << " ";
}

int main()
{
    testadd();

    return 0;
}