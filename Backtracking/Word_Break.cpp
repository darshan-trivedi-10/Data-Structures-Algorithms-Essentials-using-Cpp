#include <bits/stdc++.h>
using namespace std;

// Will it work for string=abcd and dictionary={ab, abc, d}.. Solution is picking "ab" first , then it will only search for cd..
bool present(string str, vector<string> &dic)
{
    for (auto it : dic)
    {
        // cout << it << " " << str << endl;
        if (it == str)
        {
            return true;
        }
    }

    return false;
}
int ans = 0;
// Will it work for string=abcd and dictionary={ab, abc, d}.. Solution is picking "ab" first , then it will only search for cd..
void solve(string str, vector<string> &dic)
{
    if (str.size() == 0)
    {
        ans++;
        return;
    }

    for (int i = 0; i < str.size(); i++)
    {
        string left = str.substr(0, i + 1);

        if (present(left, dic))
        {
            string right = str.substr(i + 1);
            solve(right, dic);
        }
    }
}
int wordBreak(string str, vector<string> &dictionary)
{
    solve(str, dictionary);
    return ans;
}

int main()
{
    vector<string> a = {"ou", "suyoypayul", "eim", "otehzri"};
    cout << wordBreak("otehzri ab eimabouabsuyoypayulabouab", a);
    // otehzri
    //  abcd
    return 0;
}

// dictionary = { i, like, sam, sung, samsung, mobile}
// str = "ilikesamsungmobile"