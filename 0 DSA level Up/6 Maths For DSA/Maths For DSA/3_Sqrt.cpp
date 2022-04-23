#include <bits/stdc++.h>
using namespace std;

//  O(Logn) Time
double Sqrt(int n, int p = 3)
{
    int s = 0, e = n;
    double root = 0.0;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if ((m * m) == n)
        {
            return m;
        }
        else if ((m * m) > n)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
            root = m;
        }
    }

    double increment = 0.1;
    for (int i = 0; i < p; i++)
    {
        while (root * root <= n)
        {
            root += increment;
        }

        root -= increment;
        increment /= 10;
    }

    return root;
}

int main()
{

    int n = 20;
    cin >> n;
    cout << setprecision(3) << Sqrt(n);

    return 0;
}