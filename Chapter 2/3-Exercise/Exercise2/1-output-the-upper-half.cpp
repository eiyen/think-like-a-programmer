/* Output:
   ##
  ####
 ######
########
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
    
    return 0;
}
