#include <bits/stdc++.h>
using namespace std;

int mod = 1000000007;
long long func(vector<long long> &sum, long long x, long long n)
{
    long long count = (x / n) % mod;
    long long res = (count * sum[(int)n]) % mod;
    res = (res + sum[(int)(x % n)]) % mod;

    return res;
}

vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q)
{

    vector<int> ans;
    vector<long long> sum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        sum[i] = (sum[i - 1] + arr[i - 1]) % mod;
    }
    // func(sumArray, r, n);
    int i = 0;
    while (q--)
    {
        vector<long long> range = queries[i];
        long long l = range[0];
        long long r = range[1];

        long long rsum = func(sum, r, n);
        long long lsum = func(sum, l - 1, n);
        ans.push_back((int)((rsum - lsum + mod) % mod));
        i++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> a;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        a.push_back(temp);
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}