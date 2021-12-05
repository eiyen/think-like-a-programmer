/* Number to character. */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int character;
    cout << "Enter a number between 65 and 90: ";
    cin >> character;
    cout << "The corresponding character is: " << (char)character;
    return 0;
}
