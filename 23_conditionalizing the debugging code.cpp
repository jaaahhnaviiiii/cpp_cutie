#include <iostream>
#define ENABLE_DEBUG // comment out to disable debugging
using namespace std;

int getUserInput()
{
#ifdef ENABLE_DEBUG
    cerr << "getUserInput() called\n";
#endif

    cout << "Enter a number: ";
    int x{};
    cin >> x;
    return x;
}

int main()
{
#ifdef ENABLE_DEBUG
    cerr << "main() called\n";
#endif

    int x{getUserInput()};
    cout << "You entered: " << x << '\n';

    return 0;
}