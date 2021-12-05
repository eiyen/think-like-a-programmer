/* Test how to set a character range. */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter a character: ";
    char character = cin.get();
    if (character >= '0' && character <= '9')
    {
        cout << "You inputed a number: " << character;
    }
    
    return 0;
}
