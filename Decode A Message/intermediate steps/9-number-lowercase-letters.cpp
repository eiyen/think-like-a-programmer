/* Turn number into letters under lowercase mode. */

#include <iostream>
using namespace std;

void numToLowercaseLetters()
{
    char charNum;
    int digitNum = 0,
        letter,
        numCalculateTimes = 0,
        executeOnlyOnce = 1;

    cout << "Enter a string of number: ";
    do
    {
        charNum = cin.get();
        while (charNum >= '0' & charNum <= '9')
        {
            numCalculateTimes++;
            digitNum = digitNum * 10 + (charNum - '0');
            charNum = cin.get();
        }
        if (executeOnlyOnce)
        {
            cout << "The decoded characters are: ";
            executeOnlyOnce = 0;
        }

        if (numCalculateTimes != 0)
        {
            letter = digitNum % 27 + 'a';
            cout << (char)letter;
            numCalculateTimes = 0;
            digitNum = 0;
        }
    } while (charNum != '\n');
}

int main(int argc, char const *argv[])
{
    numToLowercaseLetters();
    return 0;
}
