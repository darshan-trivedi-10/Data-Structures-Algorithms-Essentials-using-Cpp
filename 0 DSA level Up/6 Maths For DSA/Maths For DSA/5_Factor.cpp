#include <bits/stdc++.h>
using namespace std;

// Print Factor
void print_Factor(int n)
{
    vector<int> ans(0);
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if ((n / i) != i)
            {
                ans.push_back(n / i);
            }
        }
    }

    n = ans.size();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int n = 20;
    cin >> n;
    print_Factor(n);

    return 0;
}