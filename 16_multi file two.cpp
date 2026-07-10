#include <iostream>
using namespace std;

int getInteger();
int main()
{
    int x{getInteger()};
    int y{getInteger()};

    cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}

/* To run:
 g++ "16_multi file two.cpp" "15_multi file one.cpp" -o program
 .\program.exe  or .\program or program  
 (given that program.exe exists)
 */