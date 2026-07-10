#include <iostream>
using namespace std;

#define PRINT_JVII

int main()
{
#ifdef PRINT_JVII
    cout << "Jvii\n"; // will be compiled since PRINT_JVII is defined
#endif

#ifdef PRINT_ENLISAR
    cout << "Enlisar"; // will be excluded wince PRINT_ENLISAR is not defined
#endif

#ifndef PRINT_YUSIBU
    cout << "Yusibu\n"; // will be compiled because ifndef
#endif

#if 0
    cout << "Jahnavi\n";
    cout << "Jaevi\n";
    /*boompala boompala boompala ayyy
    i i i i i i'm iconic by mistake*/
#endif

#if 1
    cout << "Vaishnavi\n";
    cout << "Babu\n";
    /*boompala boompala boompala ayyy
    i i i i i i'm iconic by mistake*/
#endif

    return 0;
}