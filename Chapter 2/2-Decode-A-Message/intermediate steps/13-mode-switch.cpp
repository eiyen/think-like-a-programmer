/* Mode switch */

#include <iostream>
using namespace std;

void completeSolotion()
{
    char charNum;
    int digitNum, onlyExecuteOnce;
    enum modeType
    {
        UPPERCASE,
        LOWERCASE,
        PUNCTUATION
    } mode;
    cout << "Enter groups of number strings seperated by character(s): ";
    do
    {
        charNum = cin.get();
        onlyExecuteOnce = 1;
        while (charNum >= '0' && charNum <= '9')
        {
            if (onlyExecuteOnce == 1)
            {
                digitNum = 0;
                onlyExecuteOnce = 0;
            }
            digitNum = digitNum * 10 + (charNum - '0');
            charNum = cin.get();
        }
        switch (mode)
        {
        case UPPERCASE: 
            if (digitNum % 27 == 0)
            {
                mode = LOWERCASE;
                cout << "When input " << digitNum << ", the mode changed into lowercase.\n";
            }
            break;
        
        case LOWERCASE:
            if (digitNum % 27 == 0)
            {
                mode = PUNCTUATION;
                cout << "When input " << digitNum << ", the mode changed into punctuation.\n";
            }
            break;
        
        case PUNCTUATION:
            if (digitNum % 9 == 0)
            {
                mode = UPPERCASE;
                cout << "When input " << digitNum << ", the mode changed into uppercae.\n";
            }
            break;
        }
    } while (charNum != '\n');
}

int main()
{
    completeSolotion();
    return 0;
}