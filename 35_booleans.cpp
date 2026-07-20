#include <iostream>
using namespace std;

bool isEven(int num)
{
    return (num % 2 == 0);
}

int main()
{
    cout << boolalpha; //  Prints true/false instead of 1/0. to turn off, use noboolalpha
    int num{};
    cout << "Enter an integer: ";
    cin >> num;

    bool even{isEven(num)};
    bool positive{num > 0};
    bool zero{num == 0};

    cout << "\nResults:\n";
    cout << "Is even? " << even << '\n';
    cout << "Is positive? " << positive << '\n';
    cout << "Is zero? " << zero << '\n';

    cout << "\nConversions:\n";
    cout << "bool(num) = " << bool(num) << '\n';
    cout << "int(even) = " << int{even} << '\n';

    return 0;
}