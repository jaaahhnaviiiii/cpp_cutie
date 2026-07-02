#include <iostream>
using namespace std;
int main()
{
    int a{};
    cout << "Enter the number: ";
    cin >> a;
    int b = a * 2;
    cout << "The double of this number is: " << b << ".\n";
    cout << "The square of the doubled number is: " << b * b << ".\n";
    return 0;
}