#include <iostream>
using namespace std;

void doIt(int x)
{
     int y{4};
     cout << "doIt: x =" << x << " y = " << y << '\n';

     x = 3;
     cout << "doIt: x =" << x << " y = " << y << '\n';
}

int main()
{
     int x{1};
     int y{2};

     cout << "main: x =" << x << " y = " << y << '\n';  // 1 and 2

     doIt(x);                                           // 1 and 4, 3 and 4

      cout << "main: x =" << x << " y = " << y << '\n';  // 1 and 2 (doIt nahi dekh rha ab vo)

      return 0;
}