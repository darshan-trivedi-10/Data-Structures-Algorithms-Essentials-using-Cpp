/*
Vowel Find
Given a string consisting of lowercase English alphabets, return a string containing all the vowels present in S in serial order.

Input Format
In the function a string S is passed.

Output Format
Return a string.

Sample Input
S = "aeoibsddaeioudb"

Sample Output
"aeoiaeiou"

*/

#include <bits/stdc++.h>
using namespace std;

string vowel(string s)
{
    // your code goes here
    string ans = "";
    for (auto it : s)
    {
        if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u')
        {
            ans.push_back(it);
        }
    }

    return ans;
}