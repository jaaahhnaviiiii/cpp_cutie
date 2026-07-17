#include <cstddef> //upar neeche kar sakte
#include <iostream>

using namespace std;

int main()
{
    int x{5};
    size_t s {sizeof(x)}; //size_t is the data type of sizeof
    cout << s << '\n';

    return 0;
}