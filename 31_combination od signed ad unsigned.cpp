#include <iostream>
using namespace std;

int main()
{
    signed int s{-1}; 
    unsigned int u{1};

    if (s>u) //signed converted to unsigned when combo used
    cout << "s is greater than u\n";
    else
    cout << "s is less than u\n";

    cout << s-u << '\n'; //result is converted to unsigned

    return 0;

}