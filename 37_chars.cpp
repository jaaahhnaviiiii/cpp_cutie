#include <iostream>
using namespace std;

int main()
{
    // Character variables:
    char letter{'B'};
    char digit{'7'};
    char symbol{'$'};

    cout << "Characters:\n";
    cout << "Letter: " << letter << "\n";
    cout << "Digit: " << digit << "\n";
    cout << "Symbol: " << symbol << "\n\n";

    // Character literals and ASCII values:
    cout << "ASCII values:\n";
    cout << letter << " = " << int{letter} << "\n";
    cout << digit << " = " << int{digit} << "\n";
    cout << symbol << " = " << int{symbol} << "\n\n";

    // ASCII value to character conversion:
    char asciiChar{77};

    cout << "Character from ASCII 77: " << asciiChar << "\n";
    cout << "ASCII value of " << asciiChar << " = " << int{asciiChar} << "\n\n";

    // User Input:
    char userChar{};
    cin >> userChar;

    cout << "\nYou entered: " << userChar << '\n';
    cout << "ASCII value of " << userChar << " = " << int{userChar} << "\n\n";

    // Character arithmetic:
    char nextChar{static_cast<char>(int{userChar} + 1)}; //for type conversion
    cout << "Next character after " << userChar << " is: " << nextChar << "\n";
    cout << "ASCII value of " << nextChar << " = " << int{nextChar} << "\n";

    return 0;
}