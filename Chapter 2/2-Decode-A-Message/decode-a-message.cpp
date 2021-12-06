/* Decode a message complete solution. */

#include <iostream>
using namespace std;

void completeSolotion()
{
    char charNum;
    int digitNum, onlyExecuteOnce, numExecuteTimes = 0;
    enum modeType
    {
        UPPERCASE,
        LOWERCASE,
        PUNCTUATION
    } mode;
    cout << "Enter group of number strings: ";
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
            numExecuteTimes++;
            digitNum = digitNum * 10 + (charNum - '0');
            charNum = cin.get();
        }
        
        if (numExecuteTimes == 0)
        {
            continue;
        } else {
            numExecuteTimes = 0;
            switch (mode)
            {
            case UPPERCASE:
                if (digitNum % 27 == 0)
                {
                    mode = LOWERCASE;
                }
                else
                {
                    cout << (char)(digitNum % 27 + 'A' - 1);
                }
                break;

            case LOWERCASE:
                if (digitNum % 27 == 0)
                {
                    mode = PUNCTUATION;
                }
                else
                {
                    cout << (char)(digitNum % 27 + 'a' - 1);
                }
                break;

            case PUNCTUATION:
                if (digitNum % 9 == 0)
                {
                    mode = UPPERCASE;
                }
                else
                {
                    switch (digitNum % 9)
                    {
                    case 1:
                        cout << '!';
                        break;
                    case 2:
                        cout << '?';
                        break;
                    case 3:
                        cout << ',';
                        break;
                    case 4:
                        cout << '.';
                        break;
                    case 5:
                        cout << ' ';
                        break;
                    case 6:
                        cout << ';';
                        break;
                    case 7:
                        cout << '"';
                        break;
                    case 8:
                        cout << '\'';
                        break;
                    }
                }
            }
        } 
    } while (charNum != '\n') ;
}

int main()
{
    completeSolotion();
    return 0;
}

/* 
    Test input: 18,12312,171,763,98423,1208,216,11,500,18,241,0,32,20620,27,10
    Expected output: Right? Yes!
*/