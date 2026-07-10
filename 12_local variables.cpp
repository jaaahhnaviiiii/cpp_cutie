#include <iostream>
using namespace std;

// x is not in scope anywhere in this function
void doSomething(){
    
    cout << "Hello.\n";

}

int main()
{
    // x can not be used here because it's not in scope YET
    int x{0};        // x enters scope here and can now be used within this function
    doSomething();   // x is still alive during this function call
    return 0;

} // x goes out of scope here and can no longer be used (lifetime ends)