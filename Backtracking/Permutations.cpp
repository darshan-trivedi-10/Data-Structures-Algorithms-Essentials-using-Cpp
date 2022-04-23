/*

Problem : Given a string s, find all permutations of the string.

Input : abc

Output : abc, acb, bac, bca, cab, cba.

*/

// Restore our original array while going back this step called backtreacking.

#include <bits/stdc++.h>
using namespace std;

void permutations(string s, int start)
{
    if (s.size() == start + 1)
    {
        cout << s << " ";
        return;
    }

    for (int i = start; i < s.size(); i++)
    {
        swap(s[i], s[start]);
        permutations(s, i);
        swap(s[i], s[start]);
    }
}

int main()
{
    string s;
    cin >> s;
    permutations(s, 0);

    return 0;
}