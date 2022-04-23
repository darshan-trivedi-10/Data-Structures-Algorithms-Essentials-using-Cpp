#include <bits/stdc++.h>
using namespace std;

void subsqequence(string s, string o, vector<string> &v)
{
    //  Base Case :
    if (s.size() == 0)
    {
        v.push_back(o);
        return;
    }

    char ch = s[0];
    string reduced_input = s.substr(1);
    subsqequence(reduced_input, o + ch, v);
    subsqequence(reduced_input, o, v);
}

bool compare(string a, string b)
{
    if (a.size() == b.size())
    {
        return a < b;
    }

    return a.size() < b.size();
}

int main()
{
    string s;
    cin >> s;
    vector<string> v;
    string output = "";
    subsqequence(s, output, v);
    sort(v.begin(), v.end(), compare);
    for (auto it : v)
    {
        cout << it << " , ";
    }
    cout << endl;

    return 0;
}