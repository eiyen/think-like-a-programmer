/* Turn number to punctuations. */

#include <iostream>
using namespace std;

void digitToPunctuation() {
    char charNum;
    int digitNum = 0, puctuation, onlyExecuteOnce = 1, numCalculateTimes = 0;

    cout << "Enter groups of strings of number seperated by character: ";
    do
    {
        charNum = cin.get();
        while (charNum >= '0' && charNum <= '9')
        {
            digitNum = digitNum * 10 + (charNum - '0');
            charNum = cin.get();
        }
        if (onlyExecuteOnce)
        {
            cout << "The decoded punctuations are: ";
            onlyExecuteOnce = 0;
        }
        puctuation = digitNum % 9;
        switch (puctuation)
        {
            case 1: cout << '!'; break;
            case 2: cout << '?'; break;
            case 3: cout << ','; break;
            case 4: cout << '.'; break;
            case 5: cout << ' '; break;
            case 6: cout << ';'; break;
            case 7: cout << '"'; break;
            case 8: cout << '\''; break;
        }
        digitNum = 0;
    } while (charNum != '\n');
}

int main(int argc, char const *argv[])
{
    digitToPunctuation();
    return 0;
}
