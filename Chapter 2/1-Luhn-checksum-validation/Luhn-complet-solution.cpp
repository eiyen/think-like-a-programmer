#include <iostream>
using namespace std;

int doubleDigit(int digit)
{
    int doubleDigit = digit * 2;
    if (doubleDigit >= 10)
    {
        int sum = 1 + doubleDigit % 10;
        return sum;
    }
    return digit;
}

int calculateChecksum()
{
    char digit;
    int digitInt;
    int lengthEvenChecksum = 0;
    int lengthOddChecksum = 0;
    int checksum;
    int position = 1;

    cout << "Enter a string of numbers: ";
    /*
            1   2   3   4   5   6
            dou sin dou sig dou sig
    */
    digit = cin.get();
    while (digit != '\n')
    {
        digitInt = digit - '0';
        if (position % 2 == 0)
        {
            lengthEvenChecksum += digitInt;
            lengthOddChecksum += doubleDigit(digitInt);
        }
        else
        {
            lengthEvenChecksum += doubleDigit(digitInt);
            lengthOddChecksum += digitInt;
        }
        position++;
        digit = cin.get();
    }
    if (position % 2 == 0)
    {
        checksum = lengthEvenChecksum;
    }
    else
    {
        checksum = lengthOddChecksum;
    }
    cout << "The checksum is: " << checksum;
    return checksum;
}

int main()
{
    calculateChecksum();
}