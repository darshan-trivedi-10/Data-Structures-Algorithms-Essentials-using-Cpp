/*
String Normalisation

You are given a sentence with words separated by spaces.
Your task is to:
Write a function that returns a copy of this sentence where all the words:
start with a capital letter
the rest of the letters are lower case

Note:
Your function should not modify the sentence given as argument.

Sample Input
This is SO MUCH FUN!

Sample Output
This Is So Much Fun!
*/
#include <bits/stdc++.h>
using namespace std;

string normalize(const string &ans)
{
    string s = ans;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {

        if (i == 0)
        {
            s[i] = toupper(s[i]);
        }
        else if ((s[i - 1] == ' ' || s[i - 1] == '\t'))
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }

    return s;
}

int main()
{
    string s = "This is SO MUCH FUN!";
    cout << normalize(s) << endl;

    return 0;
}


