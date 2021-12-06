/* Output:
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
        for (int spaceNum = 1; spaceNum <= lineNum - 1; spaceNum++)
        {
            cout << ' ';
        }
        for (int harshNum = 1; harshNum <= 10 - lineNum * 2; harshNum++)
        {
            cout << '#';
        }
        cout << '\n';
    }

    return 0;
}
