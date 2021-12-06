/* Output
####
 ###
  ##
   #
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int lineNum = 1; lineNum <= 4; lineNum++)
    {
        for (int spaceNum = 1; spaceNum <= lineNum - 1; spaceNum++)
        {
            cout << ' ';
        }
        for (int hashNum = 1; hashNum <= 5 - lineNum; hashNum++)
        {
            cout << '#';
        }
        cout << '\n';
    }

    return 0;
}
