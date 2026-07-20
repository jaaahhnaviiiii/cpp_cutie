#include <iostream>
using namespace std;

void print1(double x) // parameter is double
{
    cout << x << '\n';
}
void print2(int x) // parameter is int
{
    cout << x << '\n';
}

int main()
{
    print1(10);                     // implicit conversion from int to double
    
    /*print2(10.5);                 // implicit conversion from double to int.
                                    warning/error comes cuz value is truncated/changed.*/
 
    print2(static_cast<int>(10.5)); /* explicit conversion from double to int.
                                    value is truncated/changed but no warnings.
                                    dont even have to turn off treatment of warnings as errors.*/

    return 0;
}