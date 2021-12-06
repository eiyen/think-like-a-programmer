/* Output:
   ##
  ####
 ######
########
########
 ######
  ####
   ##
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int lineNum = 1; lineNum <= 4; lineNum++)
    {
        for (int spaceNum = 1; spaceNum <= 4 - lineNum; spaceNum++)
        {
            cout << ' ';
        }
        for (int hashNum = 1; hashNum <= 2 * lineNum; hashNum++)
        {
            cout << '#';
        }
        cout << endl;
    }
    for (int lineNum = 5; lineNum <= 8; lineNum++)
    {
        for (int spaceNum = 1; spaceNum <= lineNum - 5; spaceNum++)
        {
            cout << ' ';
        }
        for (int hashNum = 1; hashNum <= 8 - (lineNum - 5) * 2; hashNum++)
        {
            cout << '#';
        }
        cout << endl;
    }

    return 0;
}
