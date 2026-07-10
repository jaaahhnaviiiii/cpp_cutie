#include "20.01_math.h"

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Square and cube of give number are: " << square(a) << " and " << cube(a) << " respectively.\n";

    int b, c;
    cout << "Enter two numbers: ";
    cin >> b >> c;
    cout << "Maximum of these two numbers is: " << max(b, c) << ".\n";

    int d, e;
    cout << "Enter two numbers: ";
    cin >> d >> e;
    cout << "Subtraction of the two numbers is: " << subtract(d, e) << ".\n";

    return 0;
}