/*
Run Length Encoding

Write a function to perform basic string compression using the counts of repeated characters, also known as Run Length Encoding. Let see one example, the input string "aaaabcccccaaa" would become "a4b1c5a3". If the "compressed" string would not become smaller than the original string, your function should return the input string. You can assume the string has only uppercase and lowercase letters. You may use the to_string(int) method to convert an integer into string.

Sample Inputs
bbbaaaadexxxxxx
abc

Sample Outputs
b3a4d1e1x6
abc

*/

#include <bits/stdc++.h>
using namespace std;

//str is the input the string
string compressString(const string &str)
{
    //complete the function to return output string
    int n = str.size();
    string output = "";
    for (int i = 0; i < n; i++)
    {
        char a = str[i];
        int ctn = 0, j = i;
        while (i < n && str[j] == str[i])
        {
            i++, ctn++;
        }

        output.push_back(str[j]);
        output += to_string(ctn);
        i--;
    }
    return str.length() > output.length() ? output : str;
}

int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cout << compressString(s) << endl;
    }
    return 0;
}