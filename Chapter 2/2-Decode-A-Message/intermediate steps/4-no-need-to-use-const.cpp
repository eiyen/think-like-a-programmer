/* I'd like to use `const` or `enum` to excecute a statement in a loop only once.
   But I found I could achieve that with `int`. */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int onlyOnce = 1; // No need to use `const` or `enum` here.
    while (onlyOnce)
    {
        cout << "First time, also the last time!";
        onlyOnce--;
    }
    return 0;
}