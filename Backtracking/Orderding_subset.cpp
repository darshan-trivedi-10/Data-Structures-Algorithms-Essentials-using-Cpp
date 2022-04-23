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
#include <vector>
#include <algorithm>
using namespace std;



void subset(char *input, char *output, int i, int j, vector<string> &v)
{
    // Base Case :-
    if (input[i] == '\0')
    {
        output[j] = '\0';
        // cout << output << endl;
        v.emplace_back(output);
        return;
    }

    output[j] = input[i];

    // Recursive Case :-
    subset(input, output, i + 1, j + 1, v);

    // Backtracking
    subset(input, output, i + 1, j, v);
}

int main()
{
    char input[100];
    char output[100];
    cin >> input;
    vector<string> list;
    subset(input, output, 0, 0, list);
    sort(list.begin(), list.end());
    for (auto it : list)
    {
        cout << it << endl;
    }
    // cout << output << endl;
    return 0;
}