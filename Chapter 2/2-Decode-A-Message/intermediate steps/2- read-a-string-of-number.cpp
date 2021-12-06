#include <iostream>
using namespace std;

void readMultiDigits() {
    char digit;
    int digitNum;
    cout << "Enter a string of numbers: ";
    digit = cin.get();
    while (digit != '\n')
    {
        digitNum = digit - '0';
        cout << digitNum << ' ';
        digit = cin.get();
    }
}

int main() {
    readMultiDigits();
}