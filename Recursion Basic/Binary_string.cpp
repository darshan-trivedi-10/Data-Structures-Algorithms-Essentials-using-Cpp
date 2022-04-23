/*

Binary Strings!

Problem : You are given an integer N. Your task is to print all binary strings of size N without consecutive ones.

Constraints:
N<=12

Input Format
In the given function an integer N is passed as parameter.

Output Format
Return a vector of strings, with all possible strings in a sorted order.

Sample Input
3

Sample Output
000
001
010
100
101

*/

#include <bits/stdc++.h>
using namespace std;

void give_me_string(vector<string> &ans, int n, int s, string str)
{
    if (s > n)
    {
        ans.push_back(str);
        return;
    }

    if (str.size() == 0 || str[str.size() - 1] == '0')
    {
        str.push_back('1');
        give_me_string(ans, n, s + 1, str);
        str.pop_back();
    }
    str.push_back('0');
    give_me_string(ans, n, s + 1, str);
    str.pop_back();
}

vector<string> binaryStrings(int n)
{
    vector<string> ans;
    give_me_string(ans, n, 1, "");
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cin >> n;
    binaryStrings(n);

    return 0;
}