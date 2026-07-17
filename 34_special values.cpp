#include <iostream>
using namespace std;

int main()
{
    double zero {0.0};
    double posinf{5.0/zero}; //positive infinity
    cout << posinf << '\n';

    double neginf{-5.0/zero}; //negative infinity
    cout << neginf << '\n';

    double z1 {0.0/posinf}; //positive zero
    cout << z1 << '\n';

    double z2 {-0.0/posinf}; //negative zero
    cout << z2 << '\n';
    
    double nan {zero/zero}; //not a number (mathematically invalid);
    cout << nan << '\n';

    return 0;
}