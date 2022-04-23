/*
Given a string, write a function to replace all spaces in a string with '%20'. It is given that the string has sufficient space at the end to hold additional characters.
Input :
hello world, how are you?

output :
hello%20world,%20how%20are%20you?
*/

#include <bits/stdc++.h>
using namespace std;

// Time Complexity : O(N)
// Space Complexity : O(string size)
void space20()
{
    string str;
    getline(cin, str);
    string ans = "";
    for (auto it : str)
    {
        if (it == ' ' || it == '\t')
        {
            ans.push_back('%');
            ans.push_back('2');
            ans.push_back('0');
        }
        else
        {
            ans.push_back(it);
        }
    }

    cout << ans << endl;
}

// Time  Complexity : O(N)
// Space Complexity : O(1)
void replace_space(char *str)
{
    //1. calc spaces
    int spaces = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            spaces += 1;
        }
    }

    int idx = strlen(str) + 2 * spaces;
    str[idx] = '\0';

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[idx - 1] = '0';
            str[idx - 2] = '2';
            str[idx - 3] = '%';
            idx = idx - 3;
        }
        else
        {
            str[idx - 1] = str[i];
            idx--;
        }
    }
}

int main()
{
    char input[10000];
    cin.getline(input, 1000);
    replace_space(input);
    cout << input << endl;

    return 0;
}