#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, p, k;
        cin >> n >> p >> k;
        if (k == 1)
        {
            cout << 0 << endl;
        }
        else if (n < k)
        {

            cout << p + 1 << endl;
        }
        else
        {
            int ans = 0;
            ans += (n / k);
            if (p == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                while (p--)
                {
                    ans += (n / k);
                }

                ans -= (n / k);
            }

            cout << ans << endl;
        }
    }

    return 0;
}