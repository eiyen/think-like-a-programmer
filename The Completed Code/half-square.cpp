#include <iostream>
using namespace std;

int main()
{
    for (int lineNum = 1; lineNum <= 5; lineNum++)
    {
        for (int asteriskNum = 1; asteriskNum <= 6 - lineNum; asteriskNum++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}
