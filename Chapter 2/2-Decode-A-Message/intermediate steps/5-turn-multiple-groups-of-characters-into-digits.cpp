/* Turn multiple groups of multiple character digits
   into multiple groups of multi-digits */

#include <iostream>
using namespace std;

void multipleCharactersToDigits()
{
    char charNum;
    int digitNum = 0;
    int numProcessedTimes = 0;
    int onlyExecuteOnce = 1;

    cout << "Enter a string of number: ";
    do
    {
        charNum = cin.get();
        while (charNum != ',' && charNum != '\n' && charNum != ' ')
        {
            numProcessedTimes++;
            digitNum = digitNum * 10 + (charNum - '0');
            charNum = cin.get();
        }

        if (onlyExecuteOnce)
        {
            cout << "The digits you input are: ";
            onlyExecuteOnce = 0;
        }

        if (numProcessedTimes)
        {
            cout << digitNum;
            if (charNum != '\n')
            {
                cout << ", ";
            } else {
                cout << '.';
            }
            digitNum = 0;
            numProcessedTimes = 0;
        }

    } while (charNum != '\n');
}

int main()
{
    multipleCharactersToDigits();
}