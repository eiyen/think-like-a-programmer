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

int main()
{
    int digit;
    cout << "Enter an integer: ";
    cin >> digit;
    cout << "The processed number is: " << doubleDigit(digit);
}