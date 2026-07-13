#include <iostream>
using namespace std;

void printValue(int value)
{
    cout << value << '\n';
}

int main()
{
    printValue(5);
    printValue(6);
    printValue(7);
    
    return 0;
}

/*
Run to cursor: executes till this line (double click on line)
Continue: continue execution from selected line till termination etc (menu)
Start: like continue but from start (while not debugging, run menu, start debugging or F5)
Breakpoint: stop execution at that line (yk)
Set next statement:  changes point of execution (double click on line and choose jump to cursor)
*/