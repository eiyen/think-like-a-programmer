#include <iostream>
using namespace std;

int main()
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        cout << i;
        for (int j = 1; j <= 3; j++)
        {
            if (j == 2)
            {
                break;
                // continue;
            }
            cout << ' ' << j;
        }
        cout << endl;
    }
}