#include <iostream>
using namespace std;
int add(int x, int y)            // a and y are parameters
{
    return x + y;
}
int multiply(int z, int w)
{
    return z * w;
}
int main()
{
    cout << add(4, 5) << ".\n";                       // 4 and 5 are arguments. gives 9
   
    cout << add(1 + 2, 3 * 4) << ".\n";               //gives 15
   
    int a{multiply(4, 10)};
    cout << add(a, a) << ".\n";                       // gives 80
   
    cout << multiply(7, add(1, 2)) << ".\n";          //gives 21

    cout << add(add(2, 5), multiply(2, 5)) << ".\n";  //gives 17
   
    return 0;
}