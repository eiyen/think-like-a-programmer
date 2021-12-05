#include <iostream>
using namespace std;

int characterToDigit()
{
    char digit;
    cout << "Enter a one-digit number: ";
    digit = cin.get();
    int digitInt = digit - '0';
    // cout << "The input digit is: " << digitInt;
    return digitInt;
}

int main() {
    characterToDigit();
}