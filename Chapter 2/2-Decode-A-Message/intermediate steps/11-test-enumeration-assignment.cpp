/* Test the assignment of enumeration. */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    enum modeType
    {
        UPPERCASE,
        LOWERCASE,
        PUNCTUATION
    } mode; // The default value of mode is 0;
    // modeType mode = UPPERCASE;
    // modeType mode = 0; // The code will report an error.
    cout << mode;
    return 0;
}
