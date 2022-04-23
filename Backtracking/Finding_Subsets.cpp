/*
Finding Subsets
Problem : Given a string, find all subsets of the given string.

input :
"abc"

output :
" ",a,b,c,ab,ac,bc,abc.
*/

#include <iostream>
#include <string>
using namespace std;

void find_subset(string s, string subset, int start)
{
    if (s.size() == start)
    {
        cout << subset << ", ";
        return;
    }
    subset.push_back(s[start]);
    find_subset(s, subset, start + 1);
    subset.pop_back();
    find_subset(s, subset, start + 1);
}

int main()
{
    string s;
    cin >> s;
    find_subset(s, "", 0);

    return 0;
}