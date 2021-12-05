#include <iostream>
using namespace std;

int main()
{
    /*
        Output the sequence 1234321 in the corresponding line 1234567

        line    number  4-line  abs(4-line) 4-abs(4-line)
        1       1       3       3           1
        2       2       2       2           2
        3       3       1       1           3
        4       4       0       0           4
        5       3       -1      1           3
        6       2       -2      2           2
        7       1       -3      3           1
    */
    for (int lineNum = 1; lineNum <= 7; lineNum++)
    {
        for (int asteriskNum = 1; asteriskNum <= 4 - abs(4 - lineNum); asteriskNum++)
        {
            cout << '*';
        }
        cout << '\n';
    }
}