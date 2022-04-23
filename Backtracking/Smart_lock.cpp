// https://leetcode.com/problems/letter-combinations-of-a-phone-number/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

class Solution
{
public:
    void solve(vector<string> &ans, string digit, vector<string> &store, string a, int s)
    {
        if (s == digit.size())
        {
            ans.push_back(a);
            return;
        }

        for (auto &c : store[digit[s] - '2'])
        {
            a.push_back(c);
            solve(ans, digit, store, a, s + 1);
            a.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        if (digits.size() == 0)
        {
            return {};
        }
        vector<string> ans;
        vector<string> stor = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(ans, digits, stor, "", 0);
        return ans;
    }
};

int main()
{

    return 0;
}