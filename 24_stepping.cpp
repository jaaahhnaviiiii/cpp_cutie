#include <iostream>
using namespace std;

int getUserInput()
{
    int a{};
    cout << "Enter number: ";
    cin >> a;

    return a;
}

int multiply(int b, int c)
{
    return b * c;
}

int main()
{
    int x{getUserInput()};
    int y{getUserInput()};

    cout << "Product is: " << multiply(x, y) << '\n';

    return 0;
}

/* Debugging procces:
ctrl + shift + P
start debugging
g++ etc etc
then menu comes
STEP IN: executes line by line
STEP OUT: whole function at once
STEP OVER: next line executes
variables section (left side, run and debug)
call stack (tells what function we're on, left side)
*/