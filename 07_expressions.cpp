#include <iostream>
using namespace std;
int five()
{
    return 5;
}

int main()
{
    int a{2};
    int b{2 + 3};
    int c{(2 * 3) + 4};
    int d{b};
    int e{five()};

    cout << "The required values are: " << "a=" << a << '.\n'
         << "b=" << b << '\n'
         << "c=" << c << '\n'
         << "d=" << d << '\n'
         << "e=" << e << '\n';

    return 0;
}

/*
int x;   //statement with no expression
int x=5; //statement with an expression
x=5;     //expression statement
foo();   //expression statement because foo is a function
cout<<x; //expression statement
*/