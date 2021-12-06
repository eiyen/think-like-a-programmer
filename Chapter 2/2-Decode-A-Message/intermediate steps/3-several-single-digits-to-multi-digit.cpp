/* Turn several sigle digits into a multi-digit */

#include <iostream>
using namespace std;

void digitSingleToMulti() {
    char digit;
    int digitNum = 0;
    cout << "Enter a string of numbers: ";
    digit = cin.get();
    while (digit != '\n') {
        digitNum = digitNum * 10 + (digit - '0');
        digit = cin.get();
    }
    cout << "The number entered is: " << digitNum;
}

int main() {
    digitSingleToMulti();
}