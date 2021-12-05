#include <iostream>
using namespace std;

int main()
{
    int num;
    int positiveCount = 0, negativeCount = 0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num >= 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
    }
    cout << "The number of positive number is: " << positiveCount << endl;
    cout << "The number of negative number is: " << negativeCount;
}