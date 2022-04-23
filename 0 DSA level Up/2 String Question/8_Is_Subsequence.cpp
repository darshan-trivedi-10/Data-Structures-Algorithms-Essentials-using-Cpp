/*
// https://leetcode.com/problems/is-subsequence/

392. Is Subsequence

Problem : Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Example 1:
Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:
Input: s = "axc", t = "ahbgdc"
Output: false
 
Constraints:
0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.
 
Follow up: Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want to check one by one to see if t has its subsequence. In this scenario, how would you change your code?
*/

class Solution
{
public:
    bool isSubsequence(string s2, string s1)
    {
        int i = s1.length() - 1;
        int j = s2.length() - 1;

        while (i >= 0 and j >= 0)
        {
            if (s2[j] == s1[i])
            {
                i--;
                j--;
            }
            else
            {
                i--;
            }
        }
        if (j == -1)
        {
            return true;
        }
        return false;
    }
};

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int a = s.size(), b = t.size();
        int j = 0;

        for (int i = 0; i < b; i++)
        {
            if (j < a && s[j] == t[i])
                j++;
        }

        return j == (a);
    }
};