#include <bits/stdc++.h>
using namespace std;

bool prime[(int)1e5 + 10];
void sieve()
{
    // Time Complexity is O(N * Log(Log(N))).
    // False is Array means number is Prime
    int maxN = (int)1e5 + 10;
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (!prime[i])
        {
            for (int j = (i * i); j <= maxN; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    sieve();
    int n = 20;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Number " << i << " is ";
        if (prime[i])
        {
            cout << "Not Prime\n";
        }
        else
        {
            cout << "Prime\n";
        }
    }

    return 0;
}