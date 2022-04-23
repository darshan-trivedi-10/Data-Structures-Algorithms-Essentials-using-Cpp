/*
Binary String to Number
Given a binary string as input, convert into its decimal form and return it as an integer.

Input Format
In the function a binary string is passed.

Output Format
Return an integer.

Sample Input
111

Sample Output
7
*/

#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string s)
{
    // your code goes here
    int ans = 0, power = 1;
    int n = s.size();
    for (int i = (n - 1); i >= 0; i--)
    {
        char it = s[i];
        if (it == '1')
        {
            ans += power;
        }
        power *= 2;
    }

    return ans;
}
