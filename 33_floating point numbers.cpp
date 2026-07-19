#include <iostream>
#include <iomanip> //for setprecision()
using namespace std;

int main()
{

    cout << 5.0 << '\n';
    cout << 6.7f << '\n';
    cout << 9876543.21 << '\n';

    cout << setprecision(17);

    double d1{0.1};
    cout << d1 << '\n';
    double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1}; // should be 1.0 but isn't
    cout << d2 << '\n';

    cout << setprecision(16);

    double d3{0.1};
    cout << d3 << '\n';
    double d4{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1}; // d4=!d2
    cout << d4 << '\n';

    return 0;
}