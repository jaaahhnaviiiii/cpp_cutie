#include <iostream>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int min(int x, int y)
{
    if (x < y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Maximum: " << max(a, b) << ".\n";
    cout << "Minimum: " << min(a, b) << ".\n";
    return 0;
}