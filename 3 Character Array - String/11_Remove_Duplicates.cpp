/*


Problem :
Remove Duplicates
Given a string S, the task is to remove all the duplicates in the given string in sorted order.

Input Format
In the function a string is passed.

Output Format
Return the updated string.

Sample Input
string s = "geeksforgeeks"

Sample Output
"efgksor"

Solustion : https://www.geeksforgeeks.org/remove-duplicates-from-a-given-string/
*/

#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    // your code goes here
    int n = s.size();
    set<char> st(s.begin(), s.end());
    int i = 0;
    for (auto it : st)
    {
        s[i++] = it;
        cout << it << " ,";
    }
    // s[i] = '\0';
    s.erase(s.begin() + i, s.end());
    return s;
}

int main()
{
    removeDuplicate("geeksforgeeks");
    return 0;
}