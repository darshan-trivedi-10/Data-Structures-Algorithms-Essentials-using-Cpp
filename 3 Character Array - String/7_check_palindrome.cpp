#include <iostream>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here
    int s = 0, e = str.size() - 1;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return false;
        }

        s++, e--;
    }

    return true;
}
int main()
{

    return 0;
}