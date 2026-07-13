/*Problem 1:
#include <iostream>
    using namespace std;

int add(int x, int y)
{
    return x - y;
}

int main()
{
    int a = 10;
    int b = 5;

    cout << "Sum= " << add(a, b) << endl;

    return 0;
} 

Solution: */

#include <iostream>
    using namespace std;

int add(int x, int y)
{
    cerr << "add() called\n";
    cerr << "x = " << x << ", y = " << y << '\n';

    return x + y; //- to +, bug
}

int main()
{
    int a = 10;
    int b = 5;

    cout << "Sum = " << add(a, b) << endl;

    return 0;
}

/*Concept:
BUFFER: temporary storage for output before it's actually displayed
FLUSH: empty the buffer and display its contents immediately
cout: buffered (more efficient for normal output)
cerr: unbuffered (better for debugging and error messages) (display immediately)
endl: newline and flushes the buffer (wait, then display)
'\n': newline only
*/

/* FLUSH AND BUFFER:
"Hello" goes to buffer
then "World" goes to buffer
then "Hello World" is displayed and buffer is empty (flushed)
cout flushes when program ends

UNBUFFERED:
"Hello" goes to screen
"World" goes to screen
no waiting area
if at step 3, there's a problem then step 1 and 2 will still be
displayed on screen so you know where the problem
*/