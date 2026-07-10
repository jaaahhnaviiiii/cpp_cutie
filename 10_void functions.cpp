#include <iostream>
using namespace std;

void returnNothing() // non-value returning function
{
}

/*void printHi()        // non-value returning function
{
    cout << "Hi\n";
    return 5;         //COMPILE ERROR: We are trying to return a value
}*/

int returnFive() // value returning function
{
    return 5;
}

int main()
{
    returnNothing(); // when calling function by itself, no value is required

    returnFive(); // we call a function that returns a value, and ignore that return value

    /* cout << returnNothing();      // COMPILE ERROR: we can't call a function that returns void in this context */

    cout << returnFive(); // we call a function that returns a value and that value will be used

    
    return 0;
}