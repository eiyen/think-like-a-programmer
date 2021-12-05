#include <iostream>
using namespace std;

void detectEnterKey()
{
    cout << "Enter a number: ";
    char digit;
    while (digit != '\n') {
        digit = cin.get();
        cout << int(digit) << " ";
    }
}

int main() {
    detectEnterKey();
}