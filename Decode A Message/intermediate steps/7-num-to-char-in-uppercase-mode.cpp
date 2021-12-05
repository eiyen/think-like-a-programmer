/* Turn number into letter under uppercase mode. */

#include <iostream>
using namespace std;

void numToUppercase()
{
    char charNum, convertedChar;
    int digitNum = 0, onlyEcecuteOnce = 1, numProcessedTimes = 0;;

    cout << "Enter a string of number: ";
    do
    {
        charNum  = cin.get();
        while (charNum != '\n' && charNum != ' ' && charNum != ',')
        {
            digitNum = digitNum * 10 + (charNum - '0');
            numProcessedTimes++;
            charNum = cin.get();
        }
        convertedChar = digitNum % 27 + 'A' - 1;
        if (onlyEcecuteOnce)
        {
            cout << "The characters after decoding are: ";
            onlyEcecuteOnce = 0;
        }
        if (numProcessedTimes != 0)
        {
            cout << (char)convertedChar;
            digitNum = 0;
            numProcessedTimes = 0;
        }
    } while (charNum != '\n');
}

int main(int argc, char const *argv[])
{
    numToUppercase();
    return 0;
}
