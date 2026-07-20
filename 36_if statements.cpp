#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x == 2)
        return true;
    else if (x == 3)
        return true;
    else if (x == 5)
        return true;
    else if (x == 7)
        return true;

    return false;
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (isPrime(x))
        cout << x << " is a prime number." << '\n';
    else
        cout << x << " is not a prime number." << '\n';

    int y{7};
    if (y) // is y not zero/not empty?
        cout << "y is true." << '\n';
    else
        cout << "y is false." << '\n';

    return 0;
}