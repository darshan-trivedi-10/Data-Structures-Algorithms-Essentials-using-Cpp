// https://codeforces.com/gym/346709?locale=en
#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
    if (n < 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return true;
}

bool check_prime1(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return true;
}
int main()
{
    int n = 20;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << check_prime1(i + 1) << endl;
    }

    return 0;
}