#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

void print(int i, int s, int e, int n, string o)
{
    if (i == (2 * n))
    {
        cout << o << endl;
        return;
    }
    if (s < n)
    {
        print(i + 1, s + 1, e, n, o + '(');
    }

    if (e < s)
    {
        print(i + 1, s, e + 1, n, o + ')');
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    print(0, 0, 0, n, "");

    return 0;
}